#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;	
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//tim phan tu thu i trong vector lon hon phan tu dung sau
	int i=n-2;
	while(i>=0&&a[i]>=a[i+1]){
		i--;
	}
	//neu da la cau hinh cuoi cung tuc la da duoc sx giam dan
	if(i<0){
		for(int i=0;i<n;i++)
			cout<<i+1<<" ";
			cout<<endl;
	}else{
		int j=n-1;
		while(a[j]<=a[i]){
			j--;
		}
		swap(a[i],a[j]);
		reverse(a.begin()+i+1,a.end());
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
			cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
