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
void Next_Permutation(){ //sinh ra ho�n v? k? ti?p
    int j = n-1; //xu?t ph�t t? v? tr� j = n-1
    while(j>0 && x[j]>x[j+1]) //t�m ch? s? j sao cho x[j] < x[j+1] 
        j--;
    if ( j > 0){ // n?u chua ph?i ho�n v? cu?i c�ng
        int k = n; //xu?t ph�t t? v? tr� k = n
        while(x[j]>=x[k]) //t�m ch? s? k sao cho x[j] < x[k] 
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
    }else //n?u d� l� c?u h�nh cu?i c�ng
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

