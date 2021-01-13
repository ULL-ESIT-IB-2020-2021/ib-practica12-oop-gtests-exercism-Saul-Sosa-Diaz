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


#include "fecha.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]){
  //Declaración de variables  
  int dia, mes, anio;
  char slash1, slash2;
  std::vector<Fecha> fechasDesordenadas;
  Fecha hoy;
  
  Usage(argc, argv);
    
  //Asignación ficheros 
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
  std::cout << "Se ha leído el archivo" << std::endl;
  while(archivoEntrada >> dia >> slash1 >> mes >> slash2 >> anio){ //Asignación variables desde el fichero.
    Fecha fechaAgregar{dia, mes, anio};
    fechasDesordenadas.push_back(fechaAgregar);
  }
  
  std::sort(fechasDesordenadas.begin(), fechasDesordenadas.end()); // ordenar las fechas
  for(const auto& i: fechasDesordenadas){
    archivoSalida << i << ' ' <<std::endl;
  } 
  std::cout << "Se han ordenado las fechas y han sido guardadas en el fichero: " << nombreArchivoSalida << std::endl << std::endl;
  std::cout << hoy << " " << IsBisiesto(hoy) << " es bisiesto." << std::endl;
  
  //Cerrar los archivos
  archivoEntrada.close();
  archivoSalida.close();
return 0;
}