#include<iostream>
using namespace std;
int main(){
	float a, s;
	cout<<"Unesite broj"<<endl;
	cin>>a;
	while (a != 0){
		s = s + 1/a;
	cout<<"Unesite broj, za kraj programa unesite 0"<<endl;
	cin>>a;		
	}
	cout<<s;
	return 0;
}
