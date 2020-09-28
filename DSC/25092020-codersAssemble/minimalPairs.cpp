#include<bits/stdc++.h>
using namespace std;


//to find absolute minimum difference
int findMinimumDifference(vector<long long int> array, int no_of_elements) 
{ 

   // Initialize difference as infinite 
   long long int difference = INT_MAX; 
  
   // Find the min diff by comparing adjacent pairs in sorted array 
   for (long long int i = 0; i < no_of_elements-1; i++){
       
      if (array[i+1] - array[i] < difference) 
          difference = array[i+1] - array[i]; 
       
   }
   // Return min difference
   return difference; 
} 


int main() {
    
    // Get number of elements
    long long int no_of_elements;
    cin >> no_of_elements;
    
    // Get the comma seperated input string
    string input_string;
    cin >> input_string;
  
    // Get the input string as input in stringstream 
    stringstream stream(input_string); 
  
    // Parse the string to the input_vector
    vector<long long int> input_vector; 
    for (long long int i; stream >> i;) { 
        
        input_vector.push_back(i); 
        if (stream.peek() == ','){
            stream.ignore(); 
        }
        
    } 
    
    // Sort array in non-decreasing order 
    sort(input_vector.begin(), input_vector.end()); 
    
    // Find the minimum difference
    long long int minimum_difference = findMinimumDifference(input_vector, no_of_elements);
    
    int flag = 0;
    
    // Output the pairs in ascending order
    for(long long int i = 0; i < no_of_elements - 1; i++){
        
        if((input_vector[i + 1] - input_vector[i]) == minimum_difference){
            
            if(flag == 0){
                
                cout << "[" << input_vector[i] << "," << input_vector[i + 1] << "]"; 
                flag = 1;
                
            }else{
                
                cout << ",[" << input_vector[i] << "," << input_vector[i + 1] << "]"; 

            }
        }
    }
}