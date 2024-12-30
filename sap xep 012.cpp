#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0;i<n;i++) cin >> a[i];
	// sap xep
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>=a[j]) swap(a[i],a[j]);
			
		}
		cout << a[i]<< ' ';
	}
}    
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
