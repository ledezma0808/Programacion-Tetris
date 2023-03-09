#pragma once
#include"Bloque.h"

class Tablero
{
private:
	string nombre;
	int filaLimiteSuperior;
	int bordeSuperior;
	int bordeInferior;
	int bordeIzquierda;
	int bordeDerecha;
	int filaActual;
	int eliminarFilaLLena;
	int filaLLena;
	int colisionPieza;
	int colisionPiezaEnRotaion;
	Bloque bloqueSiguiente;

public:
	Tablero() {
		nombre = "tablero sin nombre";
	}

	void incializarTablero();
	
	bool rotarBloque();
	void bajarBloque();
	bool moverBloque(int direccion);


	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }
};

