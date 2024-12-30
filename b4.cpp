#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>&vt, int left,int right,string x)
{
	if(left==right){
		cout<<x<<" ";
	for(const string &s:vt){
		cout<<s<<" ";
	}
	cout<<endl;
	}else{
		for(int i=left;i<=right;i++){
			swap(vt[left],vt[i]);
			solve(vt,left+1,right,x);
			swap(vt[left],vt[i]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	string s;
	cin.ignore();
	getline(cin,s);
	string a;
	stringstream ss(s);
	string word;
	vector<string>vt;
	while(ss>>word){
		if(word!=a){
			vt.push_back(word);
		}
	}
	sort(vt.begin(),vt.end());
	solve(vt,0,vt.size()-1,a);
	return 0;
}
