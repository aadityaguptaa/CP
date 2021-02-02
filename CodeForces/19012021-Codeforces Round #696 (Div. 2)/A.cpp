#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
//---------------------------------------------------------------------------

	ll t;
	cin >> t;
	for(ll i = 0; i < t; i++){
		ll n;
		cin >> n;
		string inp;
		cin >> inp;
		int k = 1;
		cout << k;
		if(inp[0] == '0'){
			k = 1;
		}else{
			k = 2;
		}
		for(ll j = 1; j < n; j++){
			if(k == 1){
				//this could be 2 or 0
				if(inp[j] == '0'){
					cout << 0;
					k = 0;
				}else if(inp[j] == '1'){
					cout << 1;
					k = 2;
				}
			}else if(k == 2){
				//this could be 1 or 0
				if(inp[j] == '0'){
					k = 1;
					cout << 1;
				}else if(inp[j] == '1'){
					k = 1;
					cout << 0;
				}
			}else if(k == 0){
				//this could be 1 or 2
				if(inp[j] == '0'){
					k = 1;
					cout << 1;
				}else if(inp[j] == '1'){
					k = 2;
					cout << 1;
				}
			}
		}
		cout << endl;


	}


}