//Persona.cc
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
Persona::Persona()
{
  DNI="";
  Nombre="";
  Apellidos="";
  Edad=0;
  Direccion="";
  Localidad="";
  Provincia="";
  Pais="";
  NYA="";
}
string Persona::getApellidosYNombre()
{
  NYA=Apellidos+", "+Nombre;
cout<<NYA<<endl;
  return NYA;
}
int main(int argc, char const *argv[])
 {
int opcion=1;
Persona p;
cout<<"Introduzca el DNI de la persona"<<endl;
p.setDNI();
  while(opcion!=0)
  {
    cout<<"----------------------------------------------"<<endl;
    cout<<"Opcion 1--->Introducir el nombre"<<endl;
    cout<<"Opcion 2--->Introducir el apellido"<<endl;
    cout<<"Opcion 3--->Introducir la edad"<<endl;
    cout<<"Opcion 4--->Introducir la direccion"<<endl;
    cout<<"Opcion 5--->Introducir la localidad"<<endl;
    cout<<"Opcion 6--->Introducir la provincia"<<endl;
    cout<<"Opcion 7--->Introducir el pais"<<endl;
    cout<<"Opcion 8--->Juntar nombre y apellidos"<<endl;
    cout<<"Opcion 9--->Imprimir todos los datos"<<endl;
    cout<<"Opcion 0--->Salir del programa"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cin>>opcion;
    switch(opcion)
    {
      case 1:
      p.setNombre();
      p.getNombre();
      break;
      case 2:
      p.setApellidos();
      p.getApellidos();
      break;
      case 3:
      p.setEdad();
      p.getEdad();
      break;
      case 4:
      p.setDireccion();
      p.getDireccion();
      break;
      case 5:
      p.setLocalidad();
      p.getLocalidad();
      break;
      case 6:
      p.setProvincia();
      p.getProvincia();
      break;
      case 7:
      p.setPais();
      p.getPais();
      break;
      case 8:
      p.getApellidosYNombre();
      break;
      case 9:
      p.Imprimir();
      break;
    }
  }
  return 0;
}
