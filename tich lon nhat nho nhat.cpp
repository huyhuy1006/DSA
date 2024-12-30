#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	sort(a,a+n);
	sort(b,b+m);
	cout<<(long long)a[n-1]*b[0]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
