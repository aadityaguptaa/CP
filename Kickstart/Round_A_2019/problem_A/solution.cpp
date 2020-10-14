#include<bits/stdc++.h>

using namespace std;

int main(void){

    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int n, p;
        cin >> n >> p;
        vector<long long int> inp;
        for(long long int j = 0; j < n; j++){
            long long int k;
            cin >> k;
            inp.push_back(k);
        }
        sort(inp.begin(), inp.end());
        vector<long long int> cumsum;
        cumsum.push_back(0);
        for(long long int j = 1; j <= n; j++){
            cumsum.push_back(cumsum[j-1] + inp[j-1]);
        }

        long long int res = INT_MAX;
        long long int s;
        for(long long int j = 0; j < n - (p-1); j++){
            s = cumsum[j + p ] - cumsum[j];
            long long int trainingcost = (inp[j + p - 1]*p) - s;
            res = min(res, trainingcost);
        }
        cout << "Case #" << i+1 << ": "<< res  << endl;

    }
}
