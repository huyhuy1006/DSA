#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n){
	if(s.length()==n){
		if(s[0]=='8'&&s[n-1]=='6'){
			bool check=true;
			for(int i=0;i<n;i++){
				if(s[i]=='8'&&s[i+1]=='8'){
					check=false;
					break;
				}
			}
			if(check && s.find("6666")==string::npos){
				cout<<s<<endl;
			}
		}
		return;
	}
	solve(s+'6',n);
	solve(s+'8',n);
}
int main(){
	int N;
	cin >> N;
	solve("8",N);
}


