//Persona.cc
#include <iostream>
#include <string>
#include "persona.h"
using namespace std;
Persona::Persona(string dni,string NOMBRE,string APELLIDOS, int EDAD, string DIRECCION, string LOCALIDAD,string PROVINCIA,string PAIS)
{
  DNI=dni;
  Nombre=NOMBRE;
  Apellidos=APELLIDOS;
  Edad=EDAD;
  Direccion=DIRECCION;
  Localidad=LOCALIDAD;
  Provincia=PROVINCIA;
  Pais=PAIS;

}
string Persona::getApellidosyNombre()
{
  string NYA;
  NYA=Apellidos+", "+Nombre;
  cout<<NYA<<endl;
  return NYA;
}
bool Persona::setEdad(int aux)
{
  if(aux>=0)
  {
    Edad=aux;
    return true;
  }
    else
    {
      return false;
    }
  }
  bool Persona::mayor()
  {
    if(Edad>19)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
