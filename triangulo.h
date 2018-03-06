#pragma once
//Declaracion de la clase
class triangulo
{
	// Atributos - Variables
private:
	float base;
	float altura;
	float area;
	//Metodos - Funciones
public:
	triangulo(void); //Constructor - asigna memoria 
	~triangulo(void); //Deestructor - libera memoria
	//Prototipos
	float calculararea(float b, float h);
};

