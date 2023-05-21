#include <iostream>
#include <conio.h>
using namespace std;
//prototipo de funcion
int potencia(int, int);

int main(){
	int base, exponente;
	//pedir datos al usuario
	cout<<"Digite la base:";cin>>base;
	cout<<"igite el exponete:";cin>>exponente;
	
	cout<<"\nPotencia de "<< base <<" elevado a "<< exponente <<" es:"<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

int potencia (int x, int y){
	int pot;
	if(y==1){
		pot=x;
	}
	else{
		pot=x*potencia(x,y-1);
	}
	return pot;
}
