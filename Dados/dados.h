//dados.h
//Esta clase representa el lanzamiento de dos dados
 class Dados
 {
 //La parte privada es la unica que ve el desarrollador, el usuario utiliza la parte public
 private:
 	int d1_;
 	int d2_;
  int numero1_;
  int numero2_;
  float media1;
  float media2;
 public:
 	Dados();//Esto es el constructor de la clase
 	void lanzamiento();//Obiene un valor aleatorio para los dos dados
	int getDado1();//Devuelve el valor del primer dado
	int getDado2();//Devuelve el valor del segundo dado
	bool setDado1(int a);//Recibe un valor y lo introduce en d1, solo si esta entre 1 y 6
	bool setDado2(int b);//Igual que setDado1 pero con el dado 2
	int getSuma();//Devuelve la suma de los dados
  int diferencia();//Esta funscion devuelve la diferencia entre ambos dados;
  int getLanzamientos1();//Esta funcion devuelve el numero de lanzamientos del dado 1
  int getLanzamientos2();//Esta funcion devuelve el numero de lanzaientos del dado2
  float getMedia1();//Esta funcion devuelve la media del dado 1
  float getMedia2();//Esta funcion devuelve la media del dado 2
 };
