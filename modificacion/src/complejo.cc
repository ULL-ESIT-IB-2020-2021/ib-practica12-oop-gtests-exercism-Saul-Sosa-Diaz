/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Fichero donde estan las implementaciones de los métodos de la clase Complejo, y las funciones usadas en el programa
 */

#include "complejo.h"
#include <string>


/** Sobrecarga del operador + complejo con complejo 
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] complejo2 objeto de la clase Complejo
 *  @return El resultado de sumar dos números complejos
 */
Complejo operator+(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result(complejo1.real_+complejo2.real_, complejo1.imaginario_+complejo2.imaginario_);
  return result;
}

/** Sobrecarga del operador - complejo con real
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] un numero real, double
 *  @return El resultado de restar un complejo con un real
 */
Complejo operator-(const Complejo &complejo1, const double & real){
  double parteReal = double(complejo1.real_);
  Complejo result(parteReal - real, complejo1.imaginario_);
  return result;

}

/** Sobrecarga del operador + complejo con real
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] un numero real, double
 *  @return El resultado de sumar un complejo con un real
 */
Complejo operator+(const Complejo &complejo1, const double & real){
  double parteReal = double(complejo1.real_);
  Complejo result(parteReal + real, complejo1.imaginario_);
  return result;
}

/** Sobrecarga del operador - 
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] complejo2 objeto de la clase Complejo
 *  @return El resultado de restar dos números complejos
 */
Complejo operator-(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result(complejo1.real_-complejo2.real_, complejo1.imaginario_-complejo2.imaginario_);
  return result;
}

/** Sobrecarga del operador * 
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] complejo2 objeto de la clase Complejo
 *  @return El resultado de multiplicar dos números complejos
 */
Complejo operator*(const Complejo &complejo1, const Complejo &complejo2){
  Complejo result((complejo1.real_*complejo2.real_)-(complejo1.imaginario_*complejo2.imaginario_), (complejo1.real_*complejo2.imaginario_)+(complejo1.imaginario_*complejo2.real_));
  return result;
}

/** Sobrecarga del operador << en consola
 *  @param[in] std::ostream flujo
 *  @param[in] complejo objeto de la clase Complejo
 *  @return Un flujo de salida a la consola
 */
std::ostream& operator<<(std::ostream &out, const Complejo &complejo){
    if(complejo.imaginario_ < 0){
      out << complejo.real_ << complejo.imaginario_ <<"i";  
    }else{
      out << complejo.real_ << "+" <<complejo.imaginario_ <<"i";
    }
  return out;
}

/** Sobrecarga del operador ==
 *  @param[in] complejo1 objeto de la clase Complejo
 *  @param[in] complejo2 objeto de la clase Complejo
 *  @return El resultado de comparar dos números complejos 
 */
bool operator==(const Complejo &complejo1, const Complejo &complejo2){
  bool result = false;
  if(complejo1.real_ == complejo2.real_ && complejo1.imaginario_ == complejo2.imaginario_){
    result = true;
  }
  return result;
}

/** Muestra por pantalla el complejo pero con parte double
 *  @param[in] complejo1 objeto de la clase Complejo
 */
void print( Complejo complejo1){
  if(complejo1.GetImaginario() > 0){
    std::cout << complejo1.Getrealdouble() << " + " << complejo1.GetImaginario() <<"i";
  }else{
    std::cout << complejo1.Getrealdouble() << complejo1.GetImaginario() <<"i";
  }
}

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char* argv[]){ 
  if(argc != 1){
    if(argc == 2){
      std::string parameter{argv[1]};
      if(parameter == "--help"){ 
        std::cout << "El programa imprimirá en pantalla una serie de operaciones con números complejos, si quiere modificarlos\n" 
        << "tendrá que hacerlo desde el código fuente. " << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << "./user_program.out - Calculadora de números complejos" << std::endl << "Modo de uso: ./user_program.out" << std::endl <<
    "Pruebe ./user_program.out --help para más información"<< std::endl;
    exit(EXIT_SUCCESS);
  }
}
