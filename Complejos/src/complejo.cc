/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Fichero donde estan definidas las funciones utilizadas en el programa
 */

#include "complejo.h"
#include <string>


//Sobrecarga de operadores
//-----------------------------------------------------------------------------------------------------------

Complejo operator+(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result(complejo1.real_+complejo2.real_, complejo1.imaginario_+complejo2.imaginario_);
return result;
}

Complejo operator-(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result(complejo1.real_-complejo2.real_, complejo1.imaginario_-complejo2.imaginario_);
return result;
}

Complejo operator*(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result((complejo1.real_*complejo2.real_)-(complejo1.imaginario_*complejo2.imaginario_), (complejo1.real_*complejo2.imaginario_)+(complejo1.imaginario_*complejo2.real_));
return result;
}

std::ostream& operator<<(std::ostream &out, const Complejo &complejo){
  if(complejo.imaginario_ < 0){
    out << complejo.real_ << complejo.imaginario_ <<"i";  
  }else{
    out << complejo.real_ << "+" <<complejo.imaginario_ <<"i";
  }
return out;
}
//--------------------------------------------------------------------------------------------------------
//Funciones

void Usage(char* palabra){ //Modo de uso
  std::string ayuda = "--help";
     if(palabra == ayuda){ //Información programa
      std::cout << "El programa mostrará por pantalla una serie de operaciones con numeros complejos. " << std::endl;
      exit(1);
     }
    std::cout << std::endl <<"./complejos.out - Calculador complejos" << std::endl << "Modo de uso: ./complejos.out" << std::endl <<
    "Pruebe ./complejos.out --help para más información"<< std::endl << std::endl << std::endl;    
}

