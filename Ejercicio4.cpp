#include <iostream>

using namespace std;
int entero1(int);
int entero2(int);
int main(int argc, char*argv[]){
	int n;
	cout<<"ingrese un numero:";
	cin>>n;
	if(entero1(n)==1){
		cout<<"El numero es par\n";
	}
	else{
		cout<<"El numero es impar\n";
	}
	return 0;
}
int entero1(int n){
	if(n==0){
		return 1;
	}
	else{
		return entero1(n-1);
	}
}
