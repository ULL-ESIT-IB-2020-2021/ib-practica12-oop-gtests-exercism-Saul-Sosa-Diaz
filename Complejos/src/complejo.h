/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Este es un fichero de cabecera del programa complejo
 */
#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <string>



class Complejo{//Clase Complejo
 public: //Métodos
  //Constructores
  Complejo() : real_(1), imaginario_(2) {};
  Complejo(int real, int imaginario) : real_(real), imaginario_(imaginario) {};
  //Sobrecarga de operadores
  friend Complejo operator+(const Complejo &complejo1, const Complejo &complejo2);
  friend Complejo operator-(const Complejo &complejo1, const Complejo &complejo2);
  friend Complejo operator*(const Complejo &complejo1, const Complejo &complejo2);
  friend bool operator==(const Complejo &complejo1, const Complejo &complejo2);
  friend std::ostream& operator<<(std::ostream &out, const Complejo &complejo);
 private: //atributos
  int real_, imaginario_; 
};

void Usage(int argc, char* argv[]);//muestra la información del programa


#endif