#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	int c[n+m];
		for(int i=0;i<n+m;i++){
			cin>>c[i];
		}
		sort(c,c+n+m);
			for(int i=0;i<n+m;i++) cout<<c[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
