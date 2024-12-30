#include<bits/stdc++.h>
using namespace std;
int n,b[100];
vector<vector<int> > res;
bool ok[100];
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(!ok[j])
		{
			b[i]=j;
			ok[j]=true;
			if(i==n)
			{
				vector<int> a;
				for(int j=1;j<=n;j++)
					a.push_back(b[j]);
				res.push_back(a);
			}
			else Try(i+1);
			ok[j]=false;
		}
	}
}
void Res()
{
    for(int i=res.size()-1;i>=0;i--)
    {
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j];
        cout<<' ';
    }
    cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Try(1);
		Res();
		res.clear();
	}
}
