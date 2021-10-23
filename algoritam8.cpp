#include<iostream>
using namespace std;
int main(){
	float a, b, c, d;
	cout<<"Unesite 3 ocjene"<<endl;
	cin>>a>>b>>c;
	d = a * b * c;
	if (a+b+c <= 11){
		d=d/2;
	}
	cout<<d;
	return 0;
	
}
