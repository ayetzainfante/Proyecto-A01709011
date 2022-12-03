#include <string>
#include <iostream>

using namespace std;
//Metodos publicos
class Persona
{
//Declaramos atributos privados de la clase
  private:
    string name;
    int edad;

  public:
  int EdadAño();
/* *
* Se crea el constructor que recibe sus respectivas variables (name, user, password, phone) 
*/
    Persona();
    Persona(string,int);
    
    //getters
    string getName();

    int getEdad();

    //setters
    void setName(string nom);

    void setEdad(int ed);
  
};
using namespace std;

Persona::Persona(string nom, int ed){
 
//Asignacion de Variables
  name = nom;

  edad = ed; 
}
//getters y setters de sus respectivas varibales
string Persona::getName(){
 
  return name;

}

void Persona::setName(string nom){

  name=nom;

}

int Persona::getEdad(){

  return edad;

}

void Persona::setEdad(int ed){

  edad = ed;

}
int Persona::EdadAño(){
int EdadAño=edad+1;
return EdadAño;
};
