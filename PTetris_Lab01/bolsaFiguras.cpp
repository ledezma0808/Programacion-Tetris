#include "bolsaFiguras.h"

bolsaFiguras::bolsaFiguras()
{
	 bolsaLLena=true;
	 bolsaVacia = true;
	 nuevaFicha=true;

}


void bolsaFiguras(bool _bolsaLlena)
{
	cout << "Aqui podemos saber si el almacen de figuras estan llegas, para que no se repitan";
}

void bolsaFiguras(bool _bolsaVacia)
{
	cout << "Aqui podemos saber si el almacen de figuras estan vacias, y poderlas llenar";
}

void bolsaFiguras(bool _nuevaFicha)
{
	cout << "Aqui podemos generar la nueva ficha que se incopota a la bolsa";
}