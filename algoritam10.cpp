#include<iostream>
using namespace std;
int main(){
	int p, o;
	cout<<"Unesite ponasanje i ocjenu"<<endl;
	cin>>p>>o;
	if (p < 6 && o < 4){
		cout<<"Dobio si 1";
	}
	else if (p < 6 && o >=4 ){
		cout<<"Izbacen si";
	}
	else {
		cout<<"Pohvaljen si";
	}
	return 0;
}
