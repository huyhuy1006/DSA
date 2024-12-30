#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
				if(s[i]=='0' && s[i-1]=='0') 
					s[i]='0';
				else if(s[i]=='0' && s[i-1]=='1') 
					s[i]='1';
				else if(s[i]=='1' && s[i-1]=='0') 
					s[i]='1';
				else
					s[i]='0';
		cout<<s[i];
		}
		cout<<endl;
	}
}
