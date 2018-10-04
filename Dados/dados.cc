//dados.cc
#include <iostream>
#include "dados.h"
#include <cstdlib>
#include <ctime>

Dados::Dados()
{
	d1_=1;
	d2_=1;
	numero1_=0;
	numero2_=0;
	media1=0;
	media2=0;
media1_=0;
media2_=0;

	srand(time(NULL));
}

void Dados::lanzamiento()// Calcula dos valores aleatorios
{
	d1_=(rand()%6)+1;
	d2_=(rand()%6)+1;
	numero1_++;
	media1=media1+d1_;
	numero2_++;
	media2=media2+d2_;
}

int Dados::getDado1()//Actualiza el valor de d1_
{
	return d1_;
}

int Dados::getDado2()//Actualiza el valor de d2_
{
	return d2_;
}

bool Dados::setDado1(int a)//Introduce un valor escrito por teclado en d1_
{

	if((a<1) || (a>6))
	{
		return false;
	}
	else
	{
		d1_=a;
		numero1_++;
		media1=media1+d1_;
		return true;
	}
}

bool Dados::setDado2(int b)//Introduce un valor ecrito por teclado en d2_
{

	if((b<1) || (b>6))
	{
		return false;
	}
	else
	{
		d2_=b;
		numero2_++;
		media2=media2+d2_;
		return true;
	}
}

int Dados::getSuma()//Suma los valores de ambos dados
{
	int suma=0;
	suma=d1_+d2_;
	return suma;
}
int Dados::getDiferencia()//Calcula la getDiferencia entre ambos dados
{
int diferencia=0;
	if(d1_>d2_)
	{
		diferencia=d1_-d2_;
	}
	else
	{
		diferencia=d2_-d1_;
	}
	return diferencia;
}

int Dados::getLanzamientos1()//Devuelve el numero de lanzamientos del primer dado
{
	return numero1_;
}

int Dados::getLanzamientos2()//Devuelve el numero de lanzamientos del segundo dado
{
	return numero2_;
}

float Dados::getMedia1()//Devuelve el valor de la media del dado 1
{
	if((media1!=0) && (numero1_!=0))
	{media1_=media1/numero1_;}

	return media1_;

}

float Dados::getMedia2()//Devuelve el valor de la media del dado 2
{
	if((media2!=0) && (numero2_!=0))
	{media2_=media2/numero2_;}

	return media2_;

}
