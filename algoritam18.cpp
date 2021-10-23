#include<iostream>
using namespace std;
int main(){
	int x, i=0,s;
	cout<<"Unesite broj"<<endl;
	cin>>x;
	while (x != 0){
		if (x % 2 == 0){
			s = s+x;
	        i++;
		}
	cout<<"Unesite broj, za zavrsetak unesite 0"<<endl;
	cin>>x;
	}
	cout<<"Prosjek parnih brojeva je "<<s/i;
	return 0;
}
