#include<bits/stdc++.h>
using namespace std;
int n,d1[100],d2[100],cot[100];
int res=0;
void Try(int a) {
   for(int j = 1; j <= n; j++) {
      if(cot[j] == 0 && d1[a + j - n] == 0 && d2[a + j - 1] == 0) {
         cot[j] = d1[a + j - n] = d2[a + j - 1] = 1;
         if (a == n) {
            res++;
         } else {
            Try(a + 1);
         }
         // Backtrack
         cot[j] = d1[a + j - n] = d2[a + j - 1] = 0;
      }
   }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    res=0;
	    cin>>n;
	    Try(1);
	    cout<<res<<endl;
	   }
	}
