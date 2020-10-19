#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int w, n;
        cin >>w >> n;
        long long int arr[w];
        for(long long int j = 0; j < w; j++){
            cin >> arr[j];
        }
        long long int s = 9223372036854775807;
        for(long long int j = 1; j <= n; j++){
            long long int o = 0;
            for(long long int k = 0; k < w; k++){
                long long int c = 0;
                long long int ab = j - arr[k];
                if(ab < 0){
                    ab *= -1;
                }
                if((n - ab) < ab){
                    o += n-ab;
                }else{
                    o += ab;
                }
            }
            if(o < s){
                s = o;
            }
        }
        cout << "Case #" << i+1 << ": " <<  s << endl;
        
    }
}
