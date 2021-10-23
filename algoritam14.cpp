#include<iostream>
using namespace std;
int main(){
	int x, n;
	cout<<"Unesite broj i djelioca"<<endl;
	cin>>x>>n;
	while (x % n != 0){
		x++;
	}
	cout<<"Prvi broj djeljiv sa djeliocem nakon x je "<<x;
	return 0;
}
