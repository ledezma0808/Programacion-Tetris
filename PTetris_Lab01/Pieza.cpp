#include "Pieza.h"


Pieza::Pieza()
{
	nombre = "Sin nombre";
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(string _nombre, string _color)
{
	nombre = _nombre;
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = _color;
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(float _velocidad) :velocidad(_velocidad)
{
	nombre = "Sin nombre";
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	//velocidad = _velocidad;
	enMovimiento = true;

}


void Pieza::rotar(int _angulo)
{
	cout << "Esta funcion rota una figura" << endl;
}

void Pieza::acelerar(float _velocidad)
{
	cout << "Esta funcion incrementa la velocidad de caida de una figura" << endl;
}

void Pieza::moverHorizontalmente(int _direccion)
{
	cout << "Esta funcion permite mover la figurar hacia la derecha o izquierda." << endl;
}

void Pieza::pruebaDeMovimiento(int _posicion_X)
{
	cout << "Esta funcion nos permite simular el movimiento de la pieza para saber si no choca con ninguna otra";
}
void Pieza::pruebaDeRotacion(int _gradosRotacionHorizontal, int _gradosRotacionVertical)
{
	cout << "Esta funcion nos permite simular el giro de la pieza para saber si entra en la matriz sin chocar";
}