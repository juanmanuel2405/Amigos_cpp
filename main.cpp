/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2019-05-19
  Licencia: GNU-GPL
*/

/*
  Utilidad: guardar objetos en un contenedor STL, concretamente, en un vector.
  
  vector es muy similar a un array. Pero los arrays son de tamaño fijo y no son objetos. Mientras que vector es una clase parametrizable y es de tamaño variable. Dispone de funciones con las que puedes obtener su tamaño (size) así como cada uno de sus elementos, con operator []

  while(condicion)
  Se pueden combinar varias condiciones lógicas con or and y not

  El break rompe el bucle en el que estés. Solo sales del primer bucle, en el caso de que haya varios.
*/

#include "Amigo.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <Amigo> miListaDeAmigos;

  Amigo miMejorAmigo("Santana", 23, 1.78);

  while(true)
  {
    string respuesta;
    cout << "¿Tienes más amigos? (S/N) ";
    getline(cin, respuesta);
    if(respuesta == "N" or respuesta == "n")
      break;

    string nombre;
    int edad;
    double estatura;
    string auxiliar;

    cout << "¿Cómo se llama tu amigo? ";
    getline(cin, nombre);

    cout << "¿Cuál es su edad? ";
    getline(cin, auxiliar);
    edad = stoi(auxiliar);
  
    cout << "¿Cuanto mide de estatúra en metros? ";
    getline(cin, auxiliar);
    estatura = stod(auxiliar);

    Amigo amigo(nombre, edad, estatura);
    miListaDeAmigos.push_back(amigo);    
  }

  int cantidadDeAmigos = miListaDeAmigos.size();
  cout << "En total tienes " << cantidadDeAmigos << " amigos, que son:" << endl;
  for(int cual=0; cual<cantidadDeAmigos; cual++)
    cout << miListaDeAmigos.at(cual).datosCompletos() << endl;

  return 0;
}
