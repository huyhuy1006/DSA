#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int x[100],n;
bool OK=true;
void Init(){
    for(int i=1;i<=n;i++){
        x[i]=i;
    }
}
void Result(){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout << endl;
}
void Next_Permutation(){ //sinh ra hoán v? k? ti?p
    int j = n-1; //xu?t phát t? v? trí j = n-1
    while(j>0 && x[j]>x[j+1]) //tìm ch? s? j sao cho x[j] < x[j+1] 
        j--;
    if ( j > 0){ // n?u chua ph?i hoán v? cu?i cùng
        int k = n; //xu?t phát t? v? trí k = n
        while(x[j]>=x[k]) //tìm ch? s? k sao cho x[j] < x[k] 
            k--;
        int tmp = x[j]; x[j] = x[k]; x[k]=tmp; //d?i ch? x[j] cho x[k]
        int r = j+1, s = n;
        while (r<=s){ //l?t ngu?c do?n t? j+1 d?n n
            int t=x[r]; 
            x[r]=x[s];
            x[s]=t;
            r++;
            s--;
        }
    }else //n?u dã là c?u hình cu?i cùng
        OK=false;
}
int main(){
    cin>>n;
    Init();
    while(OK){
        Result();
        Next_Permutation();
    }
    return 0;
}

