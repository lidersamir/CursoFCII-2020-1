#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(){
	int n1,n2,i,suma,p;

	cout<<"Ingrese el valor inicial de la suma \n";
	cin>>n1;
	
	cout<<"Ingrese el valor final de la suma\n";
	cin>>n2;
	
	cout<<"Ingrese 0 si quiere imprimi en pantalla o 1 si desea guardarlo en un documento de texto \n";
	cin>>p;
	
	suma=0;
	for (i=n1;i<=n2;i+=1){
		suma=suma+i;
	}
	
	if(p==0){
		printf("El resultado de la suma es: %d \n",suma);
	}
	
	else{//nota: esta parte del guardado no la tengo muy clara 
		//adjunto lo que hice comentado, me gustaria si profundizar mas en eso 
		
		//ofstream archivo;
	
		//archivo.open("suma.txt",ios::out);
		//if(archivo.fail()){
			//cout<<"No se puede abrir el archivo";
			//exit(1);
		//}
		//archivo<<"El resultado de la suma es: \n";
		//archivo<<suma;
		//archivo.close();
	
	}
	
		
	}
		
}


	
