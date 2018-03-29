#include "StdAfx.h"
#include <iostream>
#include "vector.h"

using namespace std;

vector::vector(void)
{
	vec[10]=0;
	n=0;
}


vector::~vector(void)
{
}

void vector::cargarVector(int vec[], int n){
	for(int i=0;i<n;i++){
		cout<<"vec["<<i<<"] =" ;
		cin>>vec[i];
	}
}

void vector::mostrarVector(int vec[], int n){
	for(int i=0;i<n;i++){
		cout<<vec[i]<<", ";
	}
	cout<<endl;
}

void vector::ordenarVector(int vec[], int n){
	int aux;
	for(int i=0; i<(n-1); i++){
		for(int j=i; j<n; j++){
			if(vec[i] > vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
