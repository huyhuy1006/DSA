#include<bits/stdc++.h>
using namespace std;
int a[100],n,dem=0;
bool ok=true;
void Init(){
	//khoitao xau nhi phan dau tien
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=0;//thiet lap xau voi n so 0
	}
}
void Result(){
	//dua ra xau nhi phan hien tai
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Next_Bits_String(){
	//thuat toan sinh xau nhi phan ke tiep
	int i=n;//i chay tu cuoi
	while(i>0 && a[i]==1){
		//duyet tu vi tri ben phai nhat
		a[i]=0; //neu gap a[i]=1 ta chuyen thanh 0
		i--; //lui ve cac vi tri sau
	}
	if(i>0){
		a[i]=1; //gap a[i]=0 dau tien ta chuyen thanh 1
	}else ok=false; //ket thuc neu gap xau co n so 1
}
int main(){
	Init();
	while(ok){
		//lap lai neu chua phai la cau hinh cuoi cung
		Result();//dua ra cau hinh hien tai
		Next_Bits_String();//sinh cau hinh ke tiep
	}
}
