//Alison Khiara Flores Hallasi//
//Tercer ejercicio
//Calcule la sumatoria de las fracciones
#include <iostream>
using namespace std;
double suma(int a);
float factorial (int b);
int main(){
	int n, sum=0;
	cout<<"Ingrese el numero enesimo: "; cin>>n;
	sum = suma(n);
	cout<<"La suma especial es: "<<sum<<endl;	
	return 0;
}
// Funci�n para calcular la suma
double suma(int a){
	double s=0.0;
	for (int i=1; i<=a; i++){
	
		s= s + factorial(i)/(2*i);
	}
	return (s);
}
// Funci�n para calcular el factorial
float factorial (int b){
	float f=1;
	for (int i=2; i<=b; i++){
		f*=i;
	}
	return (f);
}
