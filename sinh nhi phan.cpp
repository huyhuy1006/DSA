#include<bits/stdc++.h>
using namespace std;
bool check=false;
void sinh(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=n-1;
	while(i>0 &&a[i]==1){
		i--;
	}
	if(i<=0){
		check=true;
	}else{
		a[i]=1;
		for(int j=i+1;j<n;j++){
			a[j]=0;
		}
	}
	for(int k=0;k<n;k++){
		cout<<a[k]<<" "<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	sinh();
}
