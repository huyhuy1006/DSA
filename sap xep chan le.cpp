#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>chan,le;
	for(int i=0;i<a.size();i++){
		if((i+1)%2==0){
			chan.push_back(a[i]);
		}else{
			le.push_back(a[i]);
		}
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(),greater<int>());
	//xep lai mang ban dau
	for(int i=0,j=0,k=0;i<a.size();i++){
		if((i+1)%2==0){
			a[i]=chan[j++];
		}else{
			a[i]=le[k++];
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
		solve();
}
