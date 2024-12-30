#include<bits/stdc++.h>
using namespace std;
void solve(string s,int l ,int r){
 		do{
			cout<<s<<' ';
		}while(next_permutation(s.begin(),s.end()));
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	solve(s,0,s.length()-1);
	cout<<endl;
}
