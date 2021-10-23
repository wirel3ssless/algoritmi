#include<iostream>
using namespace std;
int main(){
	float c, b, s, p;
	 cout<<"Unesite cijenu kilometra, broj km, cijenu starta "<<endl;
     cin>>c>>b>>s;
     p = s + b * c;
	 if (b > 50) {
	  p = p * 0.90; }
	 cout<<"Cijena za platiti je: "<<p ;
	 return 0;
}
