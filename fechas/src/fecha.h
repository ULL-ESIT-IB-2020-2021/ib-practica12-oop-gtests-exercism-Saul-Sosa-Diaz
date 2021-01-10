#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


class Fecha{  //Clase fecha
 private:  //Atributos
  int day_{10}, month_{1}, year_{2021};
  
 public: //Metodos
  Fecha() : day_(10), month_(1), year_(2021) {};
  Fecha(int day, int month, int year) : day_(day), month_(month), year_(year) {};
  //Getters
  int GetDay() {return day_;};
  int GetMonth() {return month_;};
  int GetYear() {return year_;};
  
  friend std::string IsBisiesto(Fecha); //Calculo año bisiesto
  void Usage(int argc, char* palabra); // info programa
  //Sobrecarga de operadores
  friend std::ostream& operator<<(std::ostream &out, const Fecha &fecha);
  friend bool operator<(const Fecha &fecha1, const Fecha &fecha2);
  friend std::ofstream& operator<< (std::ofstream &out, const Fecha &fecha);
  
  };




#endif