#include <stdio.h>
#include <stdlib.h>

int sumaFilas(int matriz[][50],int vector[],int filas,int columnas){
	int i=0;
	int j=0;
	for(i=0;i<filas;i++){
		int suma=0;
		for(j=0;j<columnas;j++){
			suma+=matriz[i][j];
		}
		vector[i]=suma;
	}
	return i;
}

void mostrarRe(int vector[], int filas){
	int i=0;
		printf("La suma de las filas son: \n");
		for(i=0;i<filas;i++){
			printf("De la fila %d: %d\n",i+1,vector[i]);
		}
}

int main(){
	int matriz[100][50];
	int vector [100];
	int filas,columnas,i=0,j=0;
	printf("Ingrese el numero de filas (el maximo de filas es 100): ");
	scanf("%d",&filas);
	printf("Ingrese el numero de columnas (el maximo de columnas es 50): ");
	scanf("%d",&columnas);
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Ingrese el valor del elemento de la fila %d columna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n\n");
	}
	sumaFilas(matriz,vector,filas,columnas);
	mostrarRe(vector,filas);
	
	system("pause");
	return 0;
}
