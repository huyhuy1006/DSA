#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100];
bool check(){
	for(int i=0;i<k;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;
}
void solve(){
	int pos=1;
	for(int i=0;i<k;i++){
		a[i]=i+1;//khoi tao to hop ban dau tu 1 den k
		cin>>b[i];
	}
	while(true){
		if(check()){
			cout<<pos<<endl;
			return;
		}
		int i=k-1;//phan tu cuoi 
		while(i>=0&&a[i]==n-k+i+1){
			i--;
		}
		if(i<0){
			break;
		}
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		pos++;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		solve();
	}
	return 0;
}
