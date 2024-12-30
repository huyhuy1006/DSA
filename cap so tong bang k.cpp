#include<bits/stdc++.h>
using namespace std;
int solve(){
	int n,k;
	cin>>n>>k;
	int h=0;
	int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(a[j]+a[i]==k){
						h++;
					}
				}
			}
			return h;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int res=solve();
		cout<<res;
		cout<<endl;
	}
}
