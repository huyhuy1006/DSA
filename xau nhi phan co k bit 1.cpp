#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	string s(n-k,'0');//tao ra 1 xau co do dai la n-k la phan dau cua xau
	s+=string(k,'1');//noi them 1 xau co k ki tu 1 vao cuoi xau s day la phan cuoi xau
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	//vong lap do while
	//in ra tat ca cac cau hinh cua xau s theo thu tu tu dien
	//ham next_permutation:sinh ra cau hinh tiep theo cua xau s
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
