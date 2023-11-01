#include <stdio.h>
#include <stdlib.h>

void ingCalificaciones(int calificaciones[][4],int clientes){
	for(int i=0;i<clientes;i++){
		printf("Cliente %d: \n",i+1);
		for(int j=0;j<4;j++){
			printf("Ingrese la calificacion del aspecto %d(1-10): ",j+1);
			scanf("%d",&calificaciones[i][j]);
		}
	}
}

void calcPromedios(int calificaciones[][4], float promedio[], int clientes){
	for(int i=0;i<4;i++){
		float suma=0;
		for(int j=0;j<clientes;j++){
			suma+=calificaciones[j][i];
		}
		promedio[i]=suma/clientes;
	}
}

int ordPromedios(float promedio[],int orden[]){
	float temp;
	for(int i=0;i<4;i++){
		orden[1]=i;
	}
	for(int j=0;j<4;j++){
		if(promedio[j]<promedio[j+1]){
		temp=promedio[j];
		promedio[j]=promedio[j+1];
		promedio[j+1]=temp;
		int temporden=orden[j];
		orden[j]=orden[j+1];
		orden[j+1]=temporden;
		}
	}
	
	return temp;
}

void mostrarRes(float promedio[], int orden[]){
	printf("Aspecto mejor calificado al peor: \n");
	for(int i=0;i<4;i++){
		int aspecto=orden[i];
		printf("Aspecto %d: %.2f\n",aspecto+1,promedio[aspecto]); 
	}
}

int main(){
	int calificaciones[5][4];
	int orden[4];
	int clientes=5;
	float promedio[4];
	
	ingCalificaciones(calificaciones,clientes);
	calcPromedios(calificaciones,promedio,clientes);
	ordPromedios(promedio,orden);
	mostrarRes(promedio,orden);
	
	system("pause");
	return 0;
}
