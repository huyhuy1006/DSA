#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=-1;
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
			}
		}
		if(dem>(n/2)){
			res=a[i];
			break;
		}
	}
	if(res!=-1){
		cout<<res<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
