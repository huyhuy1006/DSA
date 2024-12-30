#include<bits/stdc++.h>
using namespace std;

int main(){
//khai bao va nhap
	string s;
	//nhap tu ban phim
	cin>>s;
	couts<<endl;
	//gan gia tri string s="c++"; 0 duoc co dau cach
	getline(cin,s); //doc duoc dau cach
	//getline gap phim enter se dung cau lenh.
	cin.ignore();//dung truoc dong cin cau lenh nay se mac dinh xoa 1 ki tu.neu nhieu ki tu cin.ignore(1,2,3...n);
	//Length() size() tra ve so luong ki tu trong sau.
	cout<<s.length()<<endl;
	cout<<s.size()<<endl;
//	string s="python";
//	for(i=0;i<s.length();i++){
//		cout<<s[i]<<endl;
//for each
//	for(char x:s){
//		cout<<x<<endl;
//	}
//	return 0;
//noi 2 xau voi nhau
	string a="python";
	string b="java";
	string c=a+b;
	cout<<c<<endl; //pythonjava (c=b+a -> javapython)
	//a+=b = a+b -> pythonjava
//so sanh 2 xau so sanh theo thu tu tu dien
	string a="abc";
	string b="def";
	if(a>b){
		cout<<"a lon hon b\n";
	}
	else{
		cout<<"a nho hon b\n";
	}
	//->a nho hon b
//abc so voi abcd
//so cac ki tu giong nhau truoc roi so thu tu tu dien
	if(a==b){
		cout<<"giong nhau\n";
	}
//ham compare
	cout<<a.compare(b)<<endl;
	//a<b->-1 a==b->0 a>b->1
//ham substr(n,k) n chi so bat dau muon cat, k la so ki tu cat
//substr(n) cat tu n toi cuoi xau
	string a="abcdef";
	string b=a.substr(2,3));
	cout<<b<<endl;
	//->cde
//ham stoi chuyen xau thanh so nguyen int
//ham stoll chuyen thanh so long long
//ham to_string() chuyen 1 so nguyen thanh 1 chuoi
//stringstream ss(s)
	string s="java python    php lap trinh";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		cout<<tmp<<endl;
	}
}
