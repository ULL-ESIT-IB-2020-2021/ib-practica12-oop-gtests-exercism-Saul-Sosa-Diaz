/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Calculadora elemental de números complejos
 */

#include "complejo.h"

int main(int argc, char* argv[]){
  
  Usage(argc, argv);//Modo de uso del programa

  Complejo complejo1(1,4);
  Complejo complejo2(4,-7);

  std::cout << complejo1 << " - " << complejo2 << " = " << complejo1 - complejo2 << std::endl;
  std::cout << complejo1 << " + " << complejo2 << " = " << complejo1 + complejo2 << std::endl;
  std::cout << complejo1 << " * " << complejo2 << " = " << complejo1 * complejo2 << std::endl;

return 0; 
}