#include "fecha.h"
#include <string>

//-----------------------------------------------------------------------------------------------------------

std::ostream& operator<<(std::ostream &out, const Fecha &fecha){ //operador <<
  out << fecha.day_ << "/" << fecha.month_ << "/" << fecha.year_; 
 return out;
}

bool operator<(const Fecha &fecha1, const Fecha &fecha2){ //operador <
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

std::ofstream& operator<< (std::ofstream &out, const Fecha &fecha){
  out << fecha.day_ << "/" << fecha.month_ << "/" << fecha.year_; 
 return out;
}


//--------------------------------------------------------------------------------------------------------

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
  
void Fecha::Usage(int argc, char* palabra){ //Modo de uso
  std::string ayuda = "--help";
  if(argc != 3){
     if(palabra == ayuda){ //Información programa
      std::cout << "El programa deberá imprimir en el fichero de salida todas las fechas que se encuentran en el fichero de entrada pero escritas en orden ascendente cronológicamente. " << std::endl;
      exit(1);
    }
    std::cout << "./fechas.out - Gestión de fechas" << std::endl << "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txtt" << std::endl <<
    "Pruebe ./fechas.out --help para más información"<< std::endl;
    exit(1);
  }
}



