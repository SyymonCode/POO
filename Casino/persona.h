//persona.h
//Aqui declaramos la clase persona
#include <iostream>
#include <string>
using namespace std;
class Persona
{
  //Parte privada
private:
  string Nombre;
  string Apellidos;
  string DNI;
  int Edad;
  string Direccion;
  string Localidad;
  string Provincia;
  string Pais;

public:
  Persona(string dni,string NOMBRE="",string APELLIDOS="", int EDAD=0, string DIRECCION="", string LOCALIDAD="",string PROVINCIA="",string PAIS="");//ructor de la clase
  inline  void setNombre(string aux){DNI=aux;};
  inline  string getNombre()const{return Nombre;};
  inline  string getDNI()const{return DNI;};
  inline  void setApellidos(string aux){Apellidos=aux;};
  inline  string getApellidos()const{return Apellidos;};
  inline  void setDNI(string aux){DNI=aux;};
  inline  int getEdad()const{return Edad;};
  inline  void setDireccion(string aux){Direccion=aux;};
  inline  string getDireccion()const{return Direccion;};
  inline  void setLocalidad(string aux){Localidad=aux;};
  inline  string getLocalidad()const{return Localidad;};
  inline  void setProvincia(string aux){Provincia=aux;};
  inline  string getProvincia()const{return Provincia;};
  inline  void setPais(string aux){Pais=aux;};
  inline  string getPais()const{return Pais;};
  string getApellidosyNombre();
  bool setEdad(int aux);
  bool mayor();
};
