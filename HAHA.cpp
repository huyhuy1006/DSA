#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n){
	if(s.length()==n){
		if(s[0]=='H'&&s[n-1]=='A'){
			bool check=true;
			for(int i=0;i<n;i++){
				if(s[i]=='H'&&s[i+1]=='H'){
					check=false;
					break;
				}
			}
			if(check){
				cout<<s<<endl;
			}
		}
		return;
	}
	solve(s+'A',n);
	solve(s+'H',n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	solve("",n);
	}
}

