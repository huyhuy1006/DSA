#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool found=false;
	for(int i=0;i<n;i++){
		bool check=false;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cout<<a[i]<<endl;
				found=true;
				check=true;
				break;
			}
  		}
  		if(check) break;
  	}
		if(!found){
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
