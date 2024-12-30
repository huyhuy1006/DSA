#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	int c[n+m];
	int dem=0;
		for(int i=0;i<n+m;i++){
			cin>>c[i];
		}
		sort(c,c+n+m);
			for(int i=0;i<n+m;i++){
				for(int j=i+1;j<n+m;j++){
					if(pow(c[i],c[j]) > pow(c[j],c[i])){
						dem++;
					}
				}
			}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
