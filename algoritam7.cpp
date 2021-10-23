#include<iostream>
using namespace std;
int main(){
	int broj, cifra;
	cout<<"Unesite broj"<<endl;
	cin>>broj;
	if (broj <= 9){
		cout<<"Predzadnja cifra ne postoji";
	}
	else {
	cifra = (broj%100)/10;
	cout<<"Predzadnja cifra je "<<cifra;
	return 0;
	}
}
