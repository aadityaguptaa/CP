#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int k;
        cin >> k;
        while(k != 0){
            cout << k << " ";
            k-=1;
        }
        cout << endl;
    }
 
    return 0;
}