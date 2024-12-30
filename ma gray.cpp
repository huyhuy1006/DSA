#include<bits/stdc++.h>
using namespace std;
int n;
string s[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int l=pow(2,n);//so luong ma gray 2^n
		//khoi tao ch gray adu tien
		s[1]="0";
		s[2]="1";
		if(n>1){
			int vt=2;//lay doi xung
			for(int i=2;i<=n;i++){
				int k=pow(2,i);//so luong ma gray
				for(int j=1;j<=vt;j++){
					s[k-j+1]="1"+s[j];//nua sau ma gray
					s[j]="0"+s[j];//nua dau ma gray
				}
				vt=k;
			}
		}
		for(int i=1;i<=l;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}
//00
//01
//--
//11
//10
