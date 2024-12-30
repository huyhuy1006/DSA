#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000];
void sinh(){
	//duyet tu cuoi len dau
	int i=k;
	while(i>=0&&a[i]==n-k+i){
		i--;
	}
	//neu k tim duoc vi tri do thi tap con cau hinh cuoi 
	//in ra tap con dau tien
	if(i<=0){
		for(int j=1;j<=k;j++){
			a[j]=j;
		}
	}else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		sinh();
		in();
	}
}
