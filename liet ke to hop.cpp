#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=0;//k con to hop nao de sinh
	}else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;//so luong phan tu cua tap hop
	cin>>t>>k;//k= so luong phan tu trong moi to hop con
	int tmp[100];
	ok =1; //ok=1 van co the sinh to hop tiep theo
	set<int>se;
	for(int i=1;i<=t;i++){
		int x;
		cin>>x;
		se.insert(x);
	}
	n=se.size();
	int i=1;
	for(int x:se){
		tmp[i++]=x;
	}
	ktao();
	while(ok){
		for(int i=1;i<=k;i++){
			cout<<tmp[a[i]]<<" ";
		}
		sinh();
		cout<<endl;
	}
}
