#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Unesite 2 broja"<<endl;
	cin>>a>>b;
	if (a>b){
		cout<<"Prvi broj je veci";
	}
	else if (b>a){
		cout<<"Drugi broj je veci";
	}
	else {
		cout<<"Brojevi su jednaki";
	}
	return 0;
}
