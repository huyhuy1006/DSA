#include <bits/stdc++.h>
using namespace std;
void test(){
	int n;
	cin>>n;
	vector<string>v;
	queue<string>q;
	q.push("");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		if(s!="") v.push_back(s);
		if(s.length()==n){
			continue;
		}
		q.push(s+"6");
		q.push(s+"8");
	}
	cout<<v.size()<<endl;
	for(string i:v) cout<<i<<" ";
}
int main(){
	int T=1;
	cin>>T;
	while(T--){
		test();
		cout<<endl;
	}
}
