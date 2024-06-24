//Alison Khiara Flores Hallasi//
//Segundo ejercicio
//Diseñe un algoritmo que determine si dos números son PESI
#include <iostream>
using namespace std;
int main(){
	int n1, n2, c=0, i=1;
	cout<<"Ingrese los números a verificar: "; cin>>n1;
	cin>>n2;
	while((i<=n1)&&(i<=n2)){
		if((n1%i==0)&&(n2%i==0)){
			c = c+1;
		}
		i=i+1;
	}
	if (c>1){
		cout<<"No son PESI"<<endl;}
	else {
		cout<<"Son PESI"<<endl;
	}
	
}
