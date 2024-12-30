#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],b[1001],cnt;
void print(int m){
	for(int i=1;i<=m;i++){
		if(b[i]) cout<<a[i]<<" ";
	}
	cout<<endl;
	cnt++;
}
void Try(int i,int presum){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(presum+a[i]*j==k){
			print(i);
		}else{
			if(i<n){
				Try(i+1,presum+a[i]*j);
			}
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1,0);
	cout<<cnt;
}
