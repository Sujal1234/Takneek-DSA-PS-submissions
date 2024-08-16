#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n <= m){
        cout << -1  << endl;
    }else{
        cout << 2*m + 1 << endl;
    }
}
int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    solve();
	}
}
