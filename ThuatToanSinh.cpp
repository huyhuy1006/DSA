#include<bits/stdc++.h>
using namespace std;
int n,a[100];
bool ok=false;
bool check(){
	for(int i=0,j=n-1;j<n-1,i<j;i++,j--){
		if(a[i]!=a[j]){
			return false;
		}
	}
	return true;
}
void in(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void init(){
	for(int i=0;i<n;i++){
		a[i]=0;//khoi tao cau hinh ban dau
	}
}
void next(){
	int i=n-1;
	while(i>=0 &&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>=0){
		a[i]=1;
	}else ok =false;
}
int main(){
	cin>>n;
	init();
	while(ok){
		if(check()){
			in();
		}
		next();
	}
}
