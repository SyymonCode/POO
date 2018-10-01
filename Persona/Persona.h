//persona.h
//Aqui declaramos la clase persona
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
  string NYA;
public:
  Persona();//Constructor de la clase
  void setNombre();
  string getNombre();
  void setApellidos();
  string getApellidos();
  void setDNI();
  string getDNI();
  void setEdad();
  int getEdad();
  void setDireccion();
  string getDireccion();s
  void setLocalidad();
  string getLocaliad();
  void setProvincia();
  string getProvincia();
  void setPais();
  string getPais();
  string getApellidosYNombre();
}
inline string Persona::getDNI()
{
  return DNI;
}
inline string Persona::getNombre()
{
  return Nombre;
}
inline string Persona::getApellidos()
{
  return Apellidos;
}
inline string Persona::getLocalidad()
{
  return Localidad;
}
inline string Persona::getProvincia()
{
  return Provincia;
}
inline string Persona::getPais()
{
  return Pais;
}
inline string Persona::getDireccion()
{
  return Direccion;
}
inline int Persona::getEdad()
{
  return Edad;
}
inline void Persona::setNombre()
{
std::cin>>Nombre;
}
inline void Persona::setApellidos()
{
std::cin>>Apellidos;
}
inline void Persona::setDNI()
{
std::cin>>DNI;
}
inline void Persona::setLocalidad()
{
std::cin>>Localidad;
}
inline void Persona::setDireccion()
{
std::cin>>Direccion;
}
inline void Persona::setPais()
{
std::cin>>Pais;
}
inline void Persona::setProvincia()
{
std::cin>>Provincia;
}
inline void Persona::setEdad()
{
std::cin>>Edad;
}
