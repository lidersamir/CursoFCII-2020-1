//clase #3

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main()
{
  //CODIGO BASE SE IGNGRESO DE DATOS
  // definicion de variables
  float largo;
  float ancho;
  float profundidad;

  /*/ entrada de valores; prueba rapida
  cout << "ingrese el largo" << endl;
  cin >> largo;
 
  cout << "ingrese el ancho" << endl;
  cin >> ancho;

  cout << "ingrese la profundidad promedio" <<endl;
  cin >> profundidad;*/


  // calculos inmediatos
  float lxa = largo * ancho;

  float lma = largo + ancho;

  //calculo de dimensiones

  float perimetro = 2*lma;
  float volumen = lxa*profundidad;
  float area = 2*lma*profundidad + lxa;

  /*/salida de valores; prueba rapida
  cout<<"perimetro="<<perimetro<<"\n"<<"volumen="<<volumen<<"\n"<<"area de superficie subterranea="<<area<<"\n"<<endl;
*/

  //CONSTRUCCION DE LA TABLA

  //imprimir los titulos de las columnas

  cout << "Largo   Ancho   Profundidad   Perimetro   Volumen   Area de superficie subterranea\n";
  cout << "-----   -----   -----------   ---------   -------   -------------------------------\n";

  //primera linea
    largo =  25;
    ancho = 10;
    profundidad = 5.0;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
 
 //segunda linea
 
    largo =  25;
    ancho = 10;
    profundidad = 5.5;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
      
 
 //tercera linea
    largo =  25;
    ancho = 10;
    profundidad = 6.0;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
      
 //cuarta linea
 
    largo =  25;
    ancho = 10;
    profundidad = 6.5;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;

 //quinta linea
 
    largo =  30;
    ancho = 12;
    profundidad = 5.0;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
      
      
 //sexta linea
 
    largo =  30;
    ancho = 12;
    profundidad = 5.5;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
      
 //septima linea
 
    largo =  30;
    ancho = 12;
    profundidad = 6.0;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<< setw(2) <<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
      
 //octaba linea
 
    largo =  30;
    ancho = 12;
    profundidad = 6.5;
    
    lxa = largo * ancho;
    lma = largo + ancho;
    
    perimetro = 2*lma;
    volumen = lxa*profundidad;
    area = 2*lma*profundidad + lxa;
    
  cout<<largo
      << setw(10) << ancho
      << setw(11) << profundidad
      << setw(13) << perimetro
      << setw(12) << volumen
      << setw(20) << area << endl;
  return 0;
}
