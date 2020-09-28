#include<bits/stdc++.h>
using namespace std;

#define MAX 100010
#define mod 1000000007

long long prod[MAX]; // To store product of divisor.

void preCompute(){ // => To store poduct of divisors of each element.
   
    for(long long i = 1; i < MAX; i++){
        prod[i] = i;
    }
    for(long long i = 2; i < MAX; i++){
        for(long long j = 2 * i; j < MAX; j += i){
            prod[j] = (prod[j] * i) % mod;
        }
    }
}

int main() {
    //initializing variables
    long long input_length, query_length;
    string input_string, query_string;
    vector<long long> input_vector, query_vector; 

    // Get the inputs
    cin >> input_length >> input_string >> query_length >> query_string;
  
    // Get the input string as input in stringstream 
    stringstream stream_input(input_string), stream_query(query_string); 
  
    // Parse the strings to the input_vector and query_vector
    for (long long i; stream_input >> i;) { 
        input_vector.push_back(i); 
        if (stream_input.peek() == ','){
            stream_input.ignore(); 
        }
    }
    for (long long i; stream_query >> i;) { 
        query_vector.push_back(i); 
        if (stream_query.peek() == ','){
            stream_query.ignore(); 
        }
    }
    
    preCompute(); // To store poduct of divisors of each element.
    
    
    // Step 1
    // To compute frequency we can multiply, the number of consecutive elements at the left and right side. 
    vector<long long> frequency(input_length);
    stack<long long> stack1;
    stack1.push(0);
    for(long long i = 1; i < input_length; i++){
        while(!stack1.empty() && input_vector[ stack1.top() ] <= input_vector[i]){
            long long index=stack1.top();
            stack1.pop();
            long long left = index + 1;
            long long right = (i - index);
            
            if(!stack1.empty()){
                left = index - stack1.top();
            }
            frequency[index] = left * right;
        }
        stack1.push(i);
    }
    
    while(!stack1.empty()){
        long long index = stack1.top();
        stack1.pop();
        long long left = index + 1;
        long long right = (input_length - index);
        if(!stack1.empty()){
            left = index - stack1.top();
        }
        frequency[index] = left * right;
    }
    
    // Step 2
    // store the frequency with the product of its divisors.
    vector<pair<long long, long long>> store(input_length);
    for(long long i = 0; i < input_length; i++){
        store[i] = make_pair(prod[input_vector[i]], frequency[i]);
    }
    
    // Step 3
    sort(store.begin(), store.end());
    reverse(store.begin(), store.end());
    
    // Step 4
    //storing commulative sum of frequency
    for(long long i = 1; i < input_length; i++) {
        store[i].second= store[i-1].second + store[i].second;
    }
    
    //We can do binary search on the store array's first element, to find our desired result
    vector<long long> ans(query_vector.size());
    for(long long i = 0; i < query_length; i++){
        long long left = 1, right = input_length-1;
        if(store[0].second >= query_vector[i]){
             ans[i] = store[0].first;
             continue;
        }
        while(left <= right){
            long long middle = (left + right)/2;
            if(store[middle].second >= query_vector[i] && store[middle - 1].second < query_vector[i]){
                ans[i] = store[middle].first;
                break;
            }
            else if(store[middle].second < query_vector[i]) left = middle + 1;
            else right = middle - 1;
        }
    }
    //the output
    cout << ans[0];
    for(long long i = 1; i < ans.size(); i++){
        cout << "," << ans[i] ;
    }
}
