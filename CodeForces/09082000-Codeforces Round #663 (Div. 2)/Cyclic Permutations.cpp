#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
    long long int a = 1, b = 1;
    for(long long int i = 2; i <= n; i++){
        a = a * i % 1000000007;
        b = b * 2 % 1000000007;
    }
    cout << (a - b + 1000000007)%1000000007;
 
    return 0;
}