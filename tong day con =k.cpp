#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans=0;
int a[100],b[100];
void solve(){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i]*b[i];
	}
	if(sum==k){
		ans++;
		for(int i=1;i<=n;i++){
			if(b[i]==1){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}
void tc(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=0;
	}
	bool check=false;
	while(check==false){
		solve();
		int index=n;
		while(index>=1 and b[index]!=0){
			b[index=0];
			index--;
		}
		if(index>=1){
			b[index]=1;
		}else check=true;
	}
}
int main(){
	tc();
	cout<<ans;
}
