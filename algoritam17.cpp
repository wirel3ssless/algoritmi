#include<iostream>
using namespace std;
int main(){
	int x, s = 0, a;
	cout<<"Unesite broj"<<endl;
	cin>>x;
	while (x > 0){
		a = x % 10;
		s = s + a;
		x = x / 10;  
	}
	cout<<"Zbir cifara je "<<s;
	return 0;
}
