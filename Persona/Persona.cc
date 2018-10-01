//Persona.cc
#include <iostrean>
#include <string>
#include <Persona.h>
using namespace std;
Persona::Persona()
{
  DNI="";
  Nombre="";
  Apellidos="";
  Edad=0;
  Direccion="";
  Localiad="";
  Provincia="";
  Pais="";
  NYA="";
}
string Persona::getApellidosYNombre()
{
  NYA=Apellidos+", "+Nombre;
}
int main(int argc, char const *argv[]) {
int opcion=1;
Persona p;
cout<<"Introduzca el DNI de la persona"<<endl;
p.setDNI();
  while(opcion!=0)
  {
    cout<<"----------------------------------------------"<<endl;
    cout<<"Opcion 1--->Introducir el nombre"<<end;
    cout<<"Opcion 2--->Introducir el apellido"<<endl;
    cout<<"Opcion 3--->Introducir la edad"<<endl;
    cout<<"Opcion 4--->Introducir la direccion"<<endl;
    cout<<"Opcion 5--->Introducir la localidad"<<endl;
    cout<<"Opcion 6--->Introducir la provincia"<<endl;
    cout<<"Opcion 7--->Introducir el pais"<<endl;
    cout<<"Opcion 8--->Juntar nombre y apellidos"<<endl;
    cout<<"Opcion 0--->Salir del programa"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cin>>opcion;
    switch(opcion)
    {
      case 1:
      p.setNombre();
      p.getNombre();
      case 2:
      p.setApellidos();
      p.getApellidos();
      case 3:
      p.setEdad();
      p.getEdad();
      case 4:
      p.setDireccion();
      p.getDireccion();
      case 5:
      p.setLocalidad();
      p.getLocalidad();
      case 6:
      p.setProvincia();
      p.getProvincia();
      case 7:
      p.setPais();
      p.getPais();
      case 8:
      p.getApellidosYNombre();

    }
  }
  return 0;
}
