#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define tam 50


int main(int argc, char *argv[]) {
	int A[tam][tam], B[tam][tam];
	int r,c,k1,k2;
	
	/* Seccion de codigo para adquirir las dimensiones de la matriz*/
	printf("Este programa calcula la transpuesta de una matriz \n");
	printf("\nCuantos renglones tiene tu matriz?  ");
	scanf("%d",&r);
	printf("\nCuantas columnas tiene tu matriz?  ");
	scanf("%d",&c);
	
	/* Seccion de codigo para capturar la matriz*/
	system("cls");
	printf("Ingresa los datos de la matriz: \n");
	for(k1=0; k1<r;k1=k1+1)
	{
		for(k2=0;k2<c;k2=k2+1)
		{
			printf("A(%d,%d) = ",k1+1,k2+1);
			scanf("%d",&A[k1][k2]);
		}
	}
	/* Seccion de codigo para procesar y mostrar resultados*/
	system("cls");
	printf("La transpuesta de la matriz A: \n");
	for(k1=0; k1<r;k1=k1+1)
	{
		for(k2=0;k2<c;k2=k2+1)
		{
			printf("  %d  ",A[k1][k2]);
			B[k2][k1]=A[k1][k2];
		}
		printf("\n");
	}
	printf("\n\n es: \n");
	for(k1=0; k1<c;k1=k1+1)
	{
		for(k2=0;k2<r;k2=k2+1)
		{
			printf("  %d  ",B[k1][k2]);
		}
		printf("\n");
	}
	return 0;
}
