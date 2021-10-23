#include<iostream>
using namespace std;
int main(){
	int x, n;
	cout<<"Unesite broj i djelioca"<<endl;
	cin>>x>>n;
	if (x < n){
		cout<<"Brojevi nisu djeljivi";
}
	else {
	while (x > n){
	x = x - n;
}
    if (x == n){
    	cout<<"Brojevi su djeljivi";
	}
    else {
    	cout<<"Nisu djeljivi";
	}
}	


    return 0;
}
