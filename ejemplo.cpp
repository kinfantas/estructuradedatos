#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "triangulo.h"

using namespace std;

void main(){
	triangulo triangulo1, triangulo2; //Instancia o crear objeto
	float x,y;
	cout<<"Ingresar la base: ";
	cin>>x;
	cout<<"Ingresar la altura: ";
	cin>>y;
	cout<<"El area del triangulo es:  "<<triangulo1.calculararea(x,y)<<endl;
	//cout<<triangulo2.calculararea(x,y);
	getch();
}
