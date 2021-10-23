#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Unesite 3 broja"<<endl;
	cin>>a>>b>>c;
	if (a < b && a < c){
		cout<<"Prvi broj je najmanji";
	}
	else if (b < c){
		cout<<"Drugi broj je najmanji";
	}
	else if (c < a){
		cout<<"Treci broj je najmanji";
	}
	else if (a == c){
		cout<<"Prvi i treci su jednaki";
	}
	else if (a == b){
		cout<<"Prvi i drugi su jednaki";
	}
	else if (b == c){
		cout<<"Drugi i treci su jednaki";
	}
	return 0;
}
