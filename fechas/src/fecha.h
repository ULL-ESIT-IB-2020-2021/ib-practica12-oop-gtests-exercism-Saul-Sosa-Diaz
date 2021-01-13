/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Fecha class Definition
 *        Header guards:
 *        When this header is #included, the preprocessor checks whether FECHA_H 
 *        has been previously defined. 
 *        If this is the first time we’re including the header, FECHA_H will not have been defined. 
 *        Consequently, it #defines FECHA_H and includes the contents of the file. 
 *        If the header is included again into the same file, FECHA_H will already have been defined 
 *        from the first time the contents of the header were included, and the contents of the header 
 *        will be ignored (thanks to the #ifndef).
 */

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


class Fecha{  
 public: //Métodos
  //Constructores
  Fecha() : day_{10}, month_{1}, year_{2021} {}; //Constructor 1, por defecto
  Fecha(int day, int month, int year) : day_(day), month_(month), year_(year) {}; //Constructor 2
  //Getters
  int GetDay() {return day_;};
  int GetMonth() {return month_;};
  int GetYear() {return year_;};
  //Funciones
  friend std::string IsBisiesto(Fecha); //Calcula si un año es bisiesto
  //Sobrecargas de operadores 
  friend std::ostream& operator<<(std::ostream &out, const Fecha &fecha);
  friend bool operator<(const Fecha &fecha1, const Fecha &fecha2);
  friend std::ofstream& operator<< (std::ofstream &out, const Fecha &fecha);
 
 
 private:  //Atributos
  int day_{10}, month_{1}, year_{2021};
};

void Usage(int argc, char* argv[]);


#endif