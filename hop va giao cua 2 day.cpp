#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	vector<int>kq;
	int i=0;
	int j=0;
	while(i<a.size() && j<b.size()){
		if(a[i]<b[j]){
			kq.push_back(a[i]);
			i++;
		}else if(a[i]>b[j]){
			kq.push_back(b[j]);
			j++;
		}else{
			kq.push_back(a[i]);
			i++;j++;
		}
	}
	while(i<a.size()){
		kq.push_back(a[i]);
		i++;
	}
	while(j<b.size()){
		kq.push_back(b[j]);
		j++;
	}
	return kq;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
}
