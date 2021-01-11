/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Organizador de fechas desde un fichero de texto en orden ascendente en otro fichero
 */

#include "complejo.h"

int main(int argc, char* argv[]){
  
  if(argc == 1){ argv[1] = "NO_ERROR";} //Error no hay argv[1]
    Usage(argv[1]);;

  Complejo complejo1(1,4);
  Complejo complejo2(4,-7);

  std::cout << complejo1 << " - " << complejo2 << " = " << complejo1 - complejo2 << std::endl;
  std::cout << complejo1 << " + " << complejo2 << " = " << complejo1 + complejo2 << std::endl;
  std::cout << complejo1 << " * " << complejo2 << " = " << complejo1 * complejo2 << std::endl << std::endl;

return 0; 
}