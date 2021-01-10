/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Saúl Sosa
 * @date 3.enero.2021
 * @brief Organizador de fechas desde un archivo
 */


#include "fecha.h"

int main(int argc, char* argv[]){
  
  int dia, mes, ano;
  char slash1, slash2;
  std::vector<Fecha> fechasDesordenadas;
  
  Fecha today{};


  if(argc == 1){ argv[1] = "NO_ERROR";} //Error no hay argv[1]
    today.Usage(argc,argv[1]);
    
   
  std::ifstream archivoEntrada;
  std::ofstream archivoSalida; 
  
  std::string nombreArchivoEntrada = argv[1];
  std::string nombreArchivoSalida = argv[2];
    
  archivoEntrada.open(nombreArchivoEntrada,std::ios::in);
  archivoSalida.open(nombreArchivoSalida,std::ios::out);
    
  if (archivoEntrada.fail()){ // Comprobar apertura archivo
    std::cout<< "No se puede abrir el archivo" << std::endl;
    exit(1);
  }

  while(archivoEntrada >> dia >> slash1 >> mes >> slash2 >> ano){ //Asignación variables desde el fichero.
    Fecha fechaAgregar(dia,mes,ano);
    fechasDesordenadas.push_back(fechaAgregar);
  }


  std::sort(fechasDesordenadas.begin(), fechasDesordenadas.end()); // ordenar las fechas
   for (const auto &i: fechasDesordenadas)
      archivoSalida << i << ' ' <<std::endl;
  
  std::cout << today << " " << IsBisiesto(today) << " es bisiesto." << std::endl;
  
  
  archivoEntrada.close();
  archivoSalida.close();
return 0;
}