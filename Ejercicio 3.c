#include <stdio.h>
#include <stdlib.h>

#define max_dimension 100

void sumaMatriz(int fila, int columna, int matrizA[][max_dimension],int matrizB[][max_dimension],int matrizResul[][max_dimension]){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			matrizResul[i][j]=matrizA[i][j]+matrizB[i][j];
		}
	}
}

void traspuestaMatriz(int fila, int columna, int matriz[][max_dimension], int matrizTraspuesta[][max_dimension]){
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			matrizTraspuesta[i][j]=matriz[i][j];
		}
	}
}

int calcularTraza(int dimension, int matriz[][max_dimension]){
	int traza=0;
	for(int i=0;i<dimension;i++){
		traza+=matriz[i][i];
	}
	return traza;
}

int main(){
	int fila,columna;
	int matrizA[max_dimension][max_dimension];
	int matrizB[max_dimension][max_dimension];
	printf("Ingrese el numero de filas que tendran las matrices: ");
	scanf("%d",&fila);
	printf("Ingrese el numero de columnas que tendran las matrices: ");
	scanf("%d",&columna);
	printf("Ingresar valores de la matriz A: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			printf("Matriz A[%d]][%d]: ",i,j);
			scanf("%d",&matrizA[i][j]);
		}
	}
	printf("Ingresar valores de la matriz B: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			printf("Matriz B[%d]][%d]: ",i,j);
			scanf("%d",&matrizB[i][j]);
		}
	}
	int matrizResulSuma[max_dimension][max_dimension];
	sumaMatriz(fila,columna,matrizA,matrizB,matrizResulSuma);
	int matrizTrasA[max_dimension][max_dimension];
	traspuestaMatriz(fila,columna,matrizA,matrizTrasA);
	int traza=calcularTraza(fila,matrizA);
	printf("\nMatriz resultante de la suma\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			printf("%d",matrizResulSuma[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz resultante de la traspuesta\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			printf("%d",matrizTrasA[i][j]);
		}
		printf("\n");
	}
	printf("\nLa traza de la matriz A es: %d\n",traza);
	
	system("pause");
	return 0;
}
