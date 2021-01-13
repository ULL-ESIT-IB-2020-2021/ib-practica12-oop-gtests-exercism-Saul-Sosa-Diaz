/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief 
 */
#include "fecha.h"
#include <string>

/** Sobrecarga del operador << en consola
 *  @param[in] std::ostream flow
 *  @param[in] fecha objeto de la clase Fecha
 *  @return Un flujo de salida a la consola
 */

std::ostream& operator<<(std::ostream &out, const Fecha &fecha){ 
  out << fecha.day_ << "/" << fecha.month_ << "/" << fecha.year_; 
 return out;
}

/** Sobrecarga del operador <
 *  @param[in] fecha1 objeto de la clase Fecha
 *  @param[in] fecha2 objeto de la clase Fecha
 *  @return como se debe operar con el operador < en la clase Fecha
 */

bool operator<(const Fecha& fecha1, const Fecha& fecha2){ 
  bool result = false;
   if(fecha1.year_ < fecha2.year_){
     result = true;
   }
   if(fecha1.year_ == fecha2.year_){
     if(fecha1.month_ < fecha2.month_){
       result = true;
     }if(fecha1.month_ == fecha2.month_){
        if(fecha1.day_ < fecha2.day_){
          result = true;  
        }
     }
   }
return result;
}

/** Sobrecarga del operador << en ficheros
 *  @param[in] std::ostream flow
 *  @param[in] fecha objeto de la clase Fecha
 *  @return Flujo de salida a ficheros
 */
std::ofstream& operator<< (std::ofstream &out, const Fecha &fecha){
  out << fecha.day_ << "/" << fecha.month_ << "/" << fecha.year_; 
 return out;
}

/** Calcula si el año es bisiesto o no
 *  @param[in] today objeto de la clase Fecha
 *  @return Una cadena de texto la cual puede ser "Sí" o "No" dependiendo si el año es bisisesto o no.
 */
std::string IsBisiesto(Fecha today){ //Calcula si es bisiesto
  std::string result = "No";
  int year = today.year_;
  bool bisiesto = false;
  if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    bisiesto = true;   
  }
  if(bisiesto){
    result = "Si";
  }
return result;
}

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char* palabra[]){ 
  std::string ayuda = "--help";
  if(argc != 3){
     if(palabra[1] == ayuda){ 
      std::cout << "El programa deberá imprimir en el fichero de salida todas las fechas que se encuentran en el fichero de entrada pero escritas en orden ascendente cronológicamente. " << std::endl;
      exit(1);
    }
    std::cout << "./fechas.out - Gestión de fechas" << std::endl << "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txtt" << std::endl <<
    "Pruebe ./fechas.out --help para más información"<< std::endl;
    exit(1);
  }
}



