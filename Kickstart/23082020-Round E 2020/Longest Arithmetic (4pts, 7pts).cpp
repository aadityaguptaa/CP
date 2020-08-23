#include<bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int n;
        cin >> n;
        vector<long long int> input;
        for(long long int j = 0; j < n; j++){
            long long int k;
            cin >> k;
            input.push_back(k);
        }
        long long int k;
        long long int max = 0;
        long long int y = 0;
        for(long long int j = 0; j < n-1; j++){
            if(input[j+1] - input[j] != k){
                k = input[j+1] - input[j];
                y = 1;
            }else{
                y+=1;
            }
            if(y >= max){
                    max = y;
                }
        }
        cout << "Case #" << i+1 << ": " << max+1 << endl;
    }
}