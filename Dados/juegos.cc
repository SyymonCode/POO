//juegos.cc
#include <iostream>
#include "dados.h"

int main()
{
	int a,b;
	int opcion=1;
	Dados d;//Ejecutamos el constructor
	while(opcion!=0)
{
	std::cout<<"Introduzca la opcion que quiere usar"<<std::endl;
	std::cout<<"--------------------------------------------------------------"<<std::endl;
	std::cout<<"1=>Lanzamiento aleatorio"<<std::endl;
	std::cout<<"2=>Introudcir los dados manualmente"<<std::endl;
	std::cout<<"3=>Realizar la suma de los dados actuales"<<std::endl;
	std::cout<<"4=>Calcular la diferencia entre los dados actuales"<<std::endl;
	std::cout<<"5=>Saber cuantas veces se han lanzado los dados"<<std::endl;
	std::cout<<"6=>Hacer la media de los valores del dado 1 y 2"<<std::endl;
	std::cout<<"0=>Salir del programa"<<std::endl;
	std::cout<<"--------------------------------------------------------------"<<std::endl;
	std::cin>>opcion;
	switch (opcion)
	 {
		case 1:
			d.lanzamiento();
			std::cout << "Dado 1="<<d.getDado1()<< std::endl;
			std::cout << "Dado 2="<<d.getDado2()<< std::endl;
			break;
		case 2:
			std::cout << "Introduzca el valor del primer dado"<< std::endl;
			std::cin>>a;
			std::cout << "Introduzca el valor del segundo dado"<< std::endl;
			std::cin>>b;
			d.setDado1(a);
			d.setDado2(b);
			std::cout << "Dado 1="<<d.getDado1()<< std::endl;
			std::cout << "Dado 2="<<d.getDado2()<< std::endl;
			break;
		case 3:
			std::cout <<"La suma vale="<<d.getSuma()<<std::endl;
			break;
		case 4:
			std::cout <<"La diferencia entre los dados vale="<<d.getDiferencia()<<std::endl;
			break;
		case 5:
			std::cout <<"El dado uno se ha lanzado "<<d.getLanzamientos1()<< " veces, y el dado dos"<<d.getLanzamientos2()<< " veces"<<std::endl;
			break;
			case 6:
			std::cout<< "El valor de la media 1 es "<<d.getMedia1()<<" y el valor de la media 2 es "<<d.getMedia2()<<std::endl;

		}
	}


	return 0;
}
