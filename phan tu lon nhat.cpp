#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					swap(a[i],a[j]);
				}
			}
		}
		sort(a,a+n,greater<int>()); //greater<int>() sap xep theo thu tu giam dan
		for(int i=0;i<k;i++){
			cout<<a[i]<<" ";
			
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
