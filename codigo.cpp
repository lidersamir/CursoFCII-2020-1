/*la programacion orientada a objetos se refiere a la utilizacion de cierto tipo de estructuras de datos, esta estructura de datos es similar a la concepcion natural de un objeto fisico, esto da ciertas ventajas en cunto a la implementacion y desarrollo de ciertos algoritmos  
*/
#include <iostream>
#include <fstream.h>
using namespace std;

float suma(float * a, int n){

	float t =0;
	for (int i=0;i<n;i++)
		t+=a[i];
	return t;

}

int main( ){
	int i=0;
	float a[1000];
	int n;
	cout<<"introduzca la cantidad de numeros a sumar\n";
	cin>>n;
	
	while(i<n){

		cout<<"introduzca el valor a sumar\n";
		cin>>a[i];
		i++;
	}
	char r;
	cout<<"desea mostrar el resultado(m) o guardar en un archivo(g)\n";
	cin>>r;
	if (r=='m'){
		cout<<suma(a,n);
		cout<<"\n";
	
		}
	if (r=='g'){

		ofstream fout;
		fout.open("resultado_suma.txt");
	
		fout<<suma(a,n)<<endl;
		fout.close();
	}
		


return 0;
}

