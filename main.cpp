#include <iostream>
using namespace std;


class CalculadoraOO //Se crea la clase
{
   public:  //Declaro sin inicializar las variables de tipo int
   int a;
   int b;


   //Se crean los metodos de la clase/objeto en cuestión, en este caso la calculadora
   //Cada función recibe dos parametros o argumentos que hacen posible la operación matematica
   public:
   int FunSumar( int fa, int fb)
   {
    this->a=fa;
    this->b=fb;
    return  this->a + this->b;

   }

   int FunRestar( int fa, int fb)
   {
    this->a=fa;
    this->b=fb;
    return  this->a - this->b;

   }

   int FunDividir( int fa, int fb)
   {
    this->a=fa;
    this->b=fb;
    return  this->a / this->b;

   }

   int FunMultiplicar( int fa, int fb)
   {
    this->a=fa;
    this->b=fb;
    return  this->a * this->b;

   }

};


int main()//En el main construimos objetos que heredan las propiedades y metodos de la clase CalculadoraOO
{
int suma=0; //Declaramos una variable que va a almacenar el resultado de la operación cada vez que accedamos al metodo
CalculadoraOO sumador; //Creamos el objeto sumador, repetimos la creación en cada operación
suma=sumador.FunSumar(800, 800); //Accedemos al metodo o funcion FunSumar, le pasamos dos parametros
int asum=sumador.a; //Acá accedemos a los valores del objeto creado, haciendo posible imprimirlos en pantalla luego
int bsum=sumador.b;

int resta=0;
CalculadoraOO restar;
resta=restar.FunRestar(300, 100);
int arest=restar.a;
int brest=restar.b;

int divisor=0;
CalculadoraOO division;
divisor=division.FunDividir(15, 3);
int adiv=division.a;
int bdiv=division.b;

int multiplicar=0;
CalculadoraOO multiplicacion;
multiplicar=multiplicacion.FunMultiplicar(15, 3);
int amult=multiplicacion.a;
int bmult=multiplicacion.b;


cout<<"La suma entre "<<asum<<" + "<<bsum<<" es: "<<suma<<endl; //Imprimimos en pantalla los valores y el resultado final de la operación
cout<<"La resta de "<<arest<<" - "<<brest<<" es: "<<resta<<endl;
cout<<"La division de "<<adiv<<" / "<<bdiv<<" es: "<<divisor<<endl;
cout<<"La multiplicación de "<<amult<<" x "<<bmult<<" es: "<<multiplicar<<endl;
}
