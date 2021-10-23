#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Unesite broj"<<endl;
	cin>>x;
	int i = 2;
	while (i <= x){
		if ( x % i == 0 && x != i){
			cout<<"Broj nije primitivan";
		}
		else if (x == i){
			cout<<"Broj je primitivan";
		}
		i++;
	}
	return 0;
}
