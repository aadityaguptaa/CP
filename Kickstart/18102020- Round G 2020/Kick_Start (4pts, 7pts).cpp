#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        string input;
        cin >> input;
        long long int kick= 0;
        long long int start = 0;
        long long int no = 0;
        for(long long int j = 0; j < input.size(); j++){
            if(input[j] == 'K' && input[j+1] == 'I' && input[j+2] == 'C' && input[j+3] == 'K'){
                kick += 1;
            }else if(input[j] == 'S' && input[j+1] == 'T' && input[j+2] == 'A' && input[j+3] == 'R' && input[j+4] == 'T'){
                no += kick;
                start += 1;
            }
        }
        cout << "Case #" << i+1 << ": " << no << endl;
    }
}
