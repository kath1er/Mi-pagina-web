#include <iostream>
#include<cstdlib>
#include<string.h>
// Recursividad
// Verificar si una palabra es palindroma
using namespace std;

bool palindroma(char palabra[], int ini,int fin){
	
	if(ini>=fin)return true;
	if(palabra[ini]==palabra[fin])
		palindroma(palabra,ini+1,fin-1);
		else return false;
}

int main(void){
	system("color 0a");
	char palabra[50];
	int tam;
	bool pal;
	cout<<"\n\t\t	RECURSIVIDAD	\n";
	cout<<"\t\t----------------------\n\n";
	cout<<"Comprueba si una palabra es palindroma"<<endl<<endl;
	cout<<"Ingrese la palabra:\t";
	cin.getline(palabra,50);
	tam=strlen(palabra);
	
	pal=palindroma(palabra,0,tam-1);
	
	if(pal==true)cout<<"\n palabra es palindroma";
	else cout<<"\n la palabra no es palindroma";
	
	return 0;
}
