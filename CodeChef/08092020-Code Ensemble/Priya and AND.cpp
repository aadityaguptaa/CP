#include<bits/stdc++.h>

using namespace std;

int main(void){
     int t;
    cin >> t;
    for( int i = 0; i < t; i++){
         int n;
        cin >> n;
        vector< int> inp;
        for(int j = 0; j < n; j++){
            int k;
            cin >> k;
            inp.push_back(k);
        }
         int count = 0;
        for(int j = 0; j < n-1; j++){
            for( int k = j+1; k < n; k++){
                int a = inp[j];
                int b = inp[k];
                int y = a&b;
                if(y == inp[j]){
                    count ++;
                }
            }
        }
        cout << count << endl;
    }
}