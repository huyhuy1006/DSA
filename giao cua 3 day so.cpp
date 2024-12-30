#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<long long>a(n),b(m),c(k);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<k;i++){
		cin>>c[i];
	}
	int i=0;
	int j=0;
	int h=0;
	vector<long long>res;
	while(i<a.size()&&j<b.size()&&h<c.size()){
		if(a[i]==b[j]&&b[j]==c[h]){
			res.push_back(a[i]);
			i++;
			j++;
			k++;
		}else if(a[i]<b[j]){
			i++;
		}else if(b[j]<c[h]){
			j++;
		}else{
			h++;
		}
	}
	if(res.empty()){ 
		cout<<"-1"<<endl;
		//res.empty kiem tra xem co phan tu trung nhau trong ca 3 mang hay khong?
		//k co thi in ra -1
	}else {
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
