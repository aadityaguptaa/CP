#include<bits/stdc++.h>

using namespace std;

int main(void){
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> input;
        for(long long int j = 0; j < n; j++){
            long long int y;
            cin >> y;
            input.push_back(y);
        }
        int flag = 0;
        long long int count = 0;
        long long int sum = 0;
        int j = 0;
        for(long long int j = 0; j < n; j++){
            sum += input[j];
            if(sum <= k){
                continue;
            }else{
                if(input[j] > k){
                    flag = 1;
                    break;
                }else{
                    sum = 0;
                    j-=1;
                    count+=1;
                }
            }
        }
        if(flag == 1){
            cout << -1 << endl;
        }else{
            cout << count+1 << endl;
        }

    }
}
