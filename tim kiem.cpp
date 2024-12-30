#include<bits/stdc++.h>
using namespace std;
int solve(){
	int n,k;
	cin>>n>>k;
	int dem =0;
	int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
			for(int i=0;i<n;i++){
				if(a[i]==k){
					dem++;
				}
					
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int res=solve();
		if(res){
			cout<<res;
		}else cout<<"-1";
	 	cout<<endl;
	}
}
