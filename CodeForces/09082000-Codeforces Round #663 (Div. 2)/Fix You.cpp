#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int n, m;
        cin >> n >> m;
        long long int count = 0;
        for(long long int j = 0; j < n; j++){
            string y;
            cin >> y;
            if(j != n-1){
                if(y[m-1] != 'D'){
                    count += 1;
                }
            }else{
                for(long long int o = 0; o < m-1; o++){
                    if(y[o] != 'R'){
                        count+=1;
                    }
                }
            }
            
        }
        cout << count << endl;
        
    }
 
    return 0;
}