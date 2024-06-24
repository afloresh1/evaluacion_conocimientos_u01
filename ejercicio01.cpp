//Alison Khiara Flores Hallasi//
//Primer ejercicio
//Diseñe una calculadora
#include <iostream>
using namespace std;
int main(){
	int op1, op2; //dato de entrada
	int r; //dato de salida
	char op;//dato de entrada
	cout<<"Ingrese los operandos: "; 
	cin>>op1;
	cin>>op2;
	cout<<"Ingrese el operador: ";
	cin>>op;
	switch (op){
		case '+':
			r=op1+op2;
			cout<<r;
			break;
		case '-':
			r=op1-op2;
			cout<<r;
			break;
		case '*':
			r=op1*op2;
			cout<<r;
			break;
		case '/':
			r=op1/op2;
			cout<<r;
			break;
		default:
			cout<<"No es válido";
	}
	return 0;
}
