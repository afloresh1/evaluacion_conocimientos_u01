//Alison Khiara Flores Hallasi//
//Segundo ejercicio
//Diseñe un algoritmo que determine si dos números son PESI

#include <iostream>
using namespace std;
//funciones del while para regresar
int funcion1(int n1, int n2);


int main(){
	int n1, n2, c=0;
	cout<<"Ingrese el primer numero a verificar: "; cin>>n1;
	cout<<"Ingrese el segundo numero a verificar: "; cin>>n2;
	
	c = funcion1(n1, n2);
	
	if (c>1){
		cout<<"No son PESI"<<endl;
		}
	else {
		cout<<"Son PESI"<<endl;
	}
	
}

	int funcion1(int n1, int n2){
		int i=1, c=0;
		
		while((i<=n1)&&(i<=n2)){
			if((n1%i==0)&&(n2%i==0)){
				c = c+1;
			}
			i=i+1;
		}	
		return (c);
	}
	
