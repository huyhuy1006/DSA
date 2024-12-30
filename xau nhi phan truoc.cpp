#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	bool check=false;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='1'){
			s[i]='0';
			for(int j=i+1;j<s.size();j++){
				s[j]='1';
			}
			check=true;
			break;
		}
	}
	if(!check){
			for(int i=0;i<s.size();i++){
				cout<<'1';
			}
			cout<<endl;
		}else{
			cout<<s<<endl;
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
