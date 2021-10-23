#include<iostream>
using namespace std;
int main(){
	int s, m;
	cout<<"Unesite koliko je sati i minuta "<<endl;
	cin>>s>>m;
	if (s == 0 || s == 24 && m == 0){
		cout<<"Ponoc je";
	}
	else if (m < 30){
		cout<<"Sati je "<<s<< " i minuta "<<m;
	}
	else if (m == 30){
		cout<<"Pola "<<s+1<<" je";
	}
	else {
		cout<<60-m<<" minuta do "<<s+1;
	}
	return 0;
}
