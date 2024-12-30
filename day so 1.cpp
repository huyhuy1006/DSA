#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<'['<<a[0]; //in ra phan tu dau tien cua moi hang
		for(int j=1;j<n-i;j++){
			cout<<" "<<a[j];
			b[j-1]=a[j-1]+a[j];//tinh tong cua phan 2 cap roi cho vao b[j
		}
		cout<<']'<<endl;
		for(int j=0;j<n-i;j++){
			a[j]=b[j]; //gan lai gia tri a[j]=b[j]
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
