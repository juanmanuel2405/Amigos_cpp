/*
  Archivo: Amigo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2019-05-18
  Licencia: GNU-GPL
*/

#include"Amigo.h"

Amigo::Amigo(string nombre, int edad, double estatura) : nombre(nombre), edad(edad), estatura(estatura)
{
  // No hay que hacer nada
}


Amigo::~Amigo()
{
  // No hay que hacer nada
}


string Amigo::comoTeLlamas()
{
  return nombre;
}


int Amigo::cuantosAnhosTienes()
{
  return edad;
}


double Amigo::cuantoMides()
{
  return estatura;
}


bool Amigo::esMenorQue(int ciertaEdad)
{
//  return edad < ciertaEdad; 
  if(edad < ciertaEdad)
    return true;
  else
    return false;
}


bool Amigo::esMasAltoQue(int ciertaEstatura)
{
  return estatura > ciertaEstatura; 
}


string Amigo::datosCompletos()
{
  string resultado = "Nombre: " + nombre + ", edad: " + to_string(edad) + ", estatura: " + to_string(estatura);

  return resultado;
}
