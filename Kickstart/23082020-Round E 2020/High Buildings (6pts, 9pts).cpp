#include<bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<int> ans;
        if((a == b && b == n && c != a) || c > a || c > b){
            cout << "Case #" << j+1 << ": " << "IMPOSSIBLE" << endl;
        }else{
        int rem = 0;
        for(int i = 0; i < a-c; i++){
            ans.push_back(n-1);
            rem+=1;
        }
        for(int i = 0; i < c; i++){
            ans.push_back(n);
            rem+=1;
        }
        for(int i = 0; i < n-rem-(b-c); i++){
            ans.push_back(1);
        }
        for(int i = 0; i < b - c; i++){
            ans.push_back(n-1);
        }
        int r = 1;
        int max = ans[0];
        for(int i = 0; i < ans.size()-1; i++){
            if(ans[i+1] >= max){
                max = ans[i+1];
                r+=1;
            }
        }
        int o = 1;
        int max2 = ans[ans.size() - 1];
        for(int i = ans.size()-1; i > 0; i--){
            if(ans[i-1] >= max2){
                max2 = ans[i-1];
                o+=1;
            }
        }
        if(ans.size() != n || r != a || o != b){
            cout << "Case #" << j+1 << ": " << "IMPOSSIBLE"<<endl; ;
        }else{
            cout << "Case #" << j+1 << ": ";
            for(int i = 0; i < ans.size(); i++){
                if(i == ans.size()-1){
                    cout << ans[i] << endl;
                }else{
                    cout << ans[i] << " " ;
                }
            }
        }}
    }
}