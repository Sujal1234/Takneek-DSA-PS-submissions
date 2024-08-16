#include <bits/stdc++.h>
using namespace std;


bool is_prime(int n){
	for (int i = 2; i*i <= n; ++i)
	{
		if(n % i == 0) return false;
	}
	return true;
}

void solve(){
	int n; cin >> n;
	std::vector<int> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	std::vector<int> even, odd;
	int ones = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]&1){
			odd.push_back(i);
			if(a[i] == 1) ones++;
		}else{
			even.push_back(i);
		}
	}

	if(even.size() >= 2){
		cout << even[0]+1 << " " << even[1]+1 << endl;
		return;
	}
	if(odd.size() >= 2){
		if(ones != odd.size()){
			cout << odd[0]+1 << " ";
			if(a[odd[0]] != 1){
			    cout << odd[1]+1 << endl;
			    return;
			}
			for (int i = 0; i < odd.size(); ++i)
			{
				if(a[odd[i]] != 1){
					cout << odd[i]+1 << endl;
					return;
				}
			}
		}else{
		    //all odds are "1"
			if(even.size() == 0){
				cout << -1 << endl;
			}else{
				bool x = is_prime(a[even[0]] + 1);

				if(x) cout << -1 << endl;
				else cout << even[0]+1 << " " << odd[0]+1 << endl;
			}
		}
		return;
	}

	// odds = 1, evens = 1;
	if(is_prime(a[0] + a[1])){
		cout << -1 << endl;
	}else{
		cout << "1 2\n";
	}
}

int main(){

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}	

	return 0;
}
