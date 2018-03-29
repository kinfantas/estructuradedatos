#pragma once
class vector
{
private:
	int vec[10], n;
public:
	vector(void); // constructor
	~vector(void); //destructor

	void cargarVector(int vec[], int n); //metodos
	void mostrarVector(int vec[], int n);
	void ordenarVector(int vec[], int n);
};

