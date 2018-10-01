//persona.h
//Aqui declaramos la clase persona

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
  Persona();//Constructor de la clase
  void setNombre();
  string getNombre();
  void setApellidos();
  string getApellidos();
  void setDNI();
  string getDNI();
  void setEdad();
  string getEdad();
  void setDireccion();
  string getDireccion();s
  void setLocalidad();
  string getLocaliad();
  void setProvincia();
  string getProvincia();
  void setPais();
  string getPais();


}
