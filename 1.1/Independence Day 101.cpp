#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a < b) swap(a, b);
    if(b < c) swap(b, c);
    if(a < b) swap(a, b);
    
    //a >= b >= c
    // cerr << a << " " << b << " " << c << endl;
    if(b + c < a - 1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    solve();
	}

}
