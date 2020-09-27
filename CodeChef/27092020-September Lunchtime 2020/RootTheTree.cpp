/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int n;
        cin >> n;
        vector<long long int> a;
        vector<long long int> b;
        for(long long int j = 0; j < n-1; j++){
            long long int k1, k2;
            cin >>k1>>k2;
            a.push_back(k1);
            b.push_back(k2);
        }
        sort(b.begin(), b.end());
        long long int count = 0;
        for(long long int j = 0; j < b.size()-1; j++){
            if(b[j] == b[j+1]){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
