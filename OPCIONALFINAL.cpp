#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include<iostream>
using namespace std;
#include <windows.h>


int opcion;


struct llenarmatriz{
	int m1[3][3],f,c;

}llenarmanual;

struct llenarmatrizautomatica{

 int mat[3][3];
}matrizautomatica;

struct matriztranspuesta{
int matriz[3][3], col, reng, i=0, j=0;
}transpuesta;



struct determinantematriz{
	int matriz[2][2];
int i,j; 
int determinante;
}matrizdeterminate;

struct multicarmatrizescalar{
		
	int i=0;
int j=0;
int columnas=0;
int filas=0;
int numero;
}matrizescalar;

struct potenciamatriz{
	
}potmatriz;

struct sumardosmatrices{
	int m1[2][2],m2[2][2],m3[2][2];
}sumamatriz;

struct restarmatriz{
	int m1[2][2],m2[2][2],m3[2][2];
}restmatriz;

struct multiplicarmatriz{
	int m1[2][2],m2[2][2],m3[2][2];
}mulmatriz;


void menu();
void llenarmatrizmanual();
void llenarmatrizautomatica();
void matriztranspuesta();
void matrizdeterminante();
void multiplicarmatrizescalar();
void potenciamatriz();
void sumardosmatrices();
void restarmatriz();
void multiplicarmatriz();
void salir();
int main(){
	menu();
	system("pause");
	return 0;
}

void menu(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_INTENSITY);
 printf("\t------------------------------------------------------\n");
 printf("\t-                                                    -\n");
 printf("\t-            calculadora de matrices                 -\n");
 printf("\t-                                                    -\n");
 printf("\t-                                                    -\n");
 printf("\t-                                                    -\n"); 
 printf("\t-                                                    -\n");
 printf("\t-----------------------------------------------------\n\n");
 
	do{
		
		system("color A");
		
		printf("Menu Principal \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_INTENSITY);
		printf("1. llenar matriz manual\n");
		printf("2. llenar matriz automatica\n");
		printf("3. matriz transpuesta\n");
		printf("4. matriz determinante\n");
		printf("5. multiplicar matriz escalar\n");
		printf("6. potencia matriz\n");
		printf("7. Matriz A + Matriz B\n");
		printf("8. Matriz A - Matriz B\n");
		printf("9. Matriz A * Matriz B\n");
		printf("0. salir\n");
		printf("Ingrese una opcion: \n");
		scanf("%d", &opcion);
		switch(opcion){
		case 1: llenarmatrizmanual();
		break;
		case 2: llenarmatrizautomatica();
		break;
		case 3: matriztranspuesta();
		break;
		case 4: matrizdeterminante();
		break;
		case 5: multiplicarmatrizescalar();
		break;
		case 6: potenciamatriz();
		break;
		case 7: sumardosmatrices();
		break;
		case 8: restarmatriz();
		break;
		case 9: multiplicarmatriz();
		break;
		case 0: salir();
		break;
		
		default: printf("Opcion invalidada\n");
		}
	}while(opcion != 0);

}
void salir(){
}
void llenarmatrizmanual(){

int m1[3][3],f,c;
	printf("digite el numero de filas: ");
	scanf("%d",&f);
	printf("digite el numero de columnas: ");
	scanf("%d",&c);
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			 
			printf("[%d]",m1[i][j]);
			
		}
		printf(" \n");
	}
	
}
void llenarmatrizautomatica(){
	int mat[3][3];
	for (int i=0;i<3;i++)//para desplazarse por las columnas
    {
        for (int j=0;j<3;j++)//para desplazarse por las filas
        {
            mat[i][j]=rand();//Agrega numero aleatorio a la posicion ij de la matriz
            printf("\t%d",mat[i][j]);//imprime elemento de la matriz en pantalla
        }
      printf("\n\n");//para dejar espacios entre filas.
    }
   getche();
}

void matriztranspuesta(){
	int matriz[3][3], col, reng, i=0, j=0;
  printf("Cuantas columnas quieres ");
  scanf("%d", &col);
  printf("Cuantos renglones quieres ");
  scanf("%d", &reng);
  for(i = 0;i < reng;i++)/*RUTINA PARA LEER LOS DATOS*/
  {
      for(j = 0;j < col;j++){
          printf("ESCRIBE LOS VALORES [%d][%d]==>\t", i+1, j+1);
              scanf("%d", &matriz[i][j]);
      }
  }
  printf("\n\n\t\tMatriz original");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n");
  for(i = 0;i < reng;i++){
      printf("\n\t\t");
      for(j = 0;j < col;j++){
          printf("  %6d  ", matriz[i][j]);
          }
  }
  printf("\n\n\t\tMatriz transpuesta");/*IMPRIMIR MATRIZ TRANSPUESTA*/
  printf("\n\n");
  for(i = 0;i < col;i++){
      printf("\n\t\t");
      for(j = 0;j < reng;j++){
          printf("  %6d  ", matriz[j][i]);
          }
  }
  printf("\n\n\n");
    }

void matrizdeterminante(){
	int matriz[2][2];
int i,j; 
int determinante;
printf("Calculo del determinante de una matriz cuadrada\n");
for(i=0;i<2;i++)
{
	
for(j=0;j<2;j++)
{ printf("Introduce matriz[%d][%d]\n",i,j);
scanf("%d",&matriz[j]);
}
}
determinante=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
printf("El determinante es %d",determinante);
}
void multiplicarmatrizescalar(){
	
	int i=0;
int j=0;
int columnas=0;
int filas=0;
int numero;
 
printf("dame el numero a multiplicar en la matrizn");
scanf("%d",&numero);
 
printf("cuantas columnas quieres?");
scanf("%d",&columnas);
 
printf("cuantas filas quieres?");
scanf("%d",&filas);
 
int matriz[columnas][filas];
for(i=0;i<columnas;i++){
for(j=0;j<filas;j++){
printf("dame el valor para cada casilla [%d][%d]",i,j);
scanf("%d",&matriz[i][j]);
}         
}
printf("original");
for(i=0;i<columnas;i++){
printf("\n");
for(j=0;j<filas;j++){
	
printf("%d",matriz[i][j]);
}
}
printf("n");
int resultante[i][j];
 
printf("nmultiplicacion de la matriz por el numero:");
for(i=0;i<columnas;i++){
printf("\n");
for(j=0;j<filas;j++){
resultante[columnas][filas] = matriz[i][j]*numero;
printf("%d",resultante[columnas][filas]);
}         
}
 
printf("n");
system("pause");

}


void potenciamatriz(){
	
}

void sumardosmatrices(){
	int m1[2][2],m2[2][2],m3[2][2];
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 1:");
			scanf("%d",&m1[i][j]);
		}	
		
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 2:");
			scanf("%d",&m2[i][j]);
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		printf("[%d]",m3[i][j]);
		}
		printf("\n");	
	}
}

void restarmatriz(){
	int m1[2][2],m2[2][2],m3[2][2];
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 1:");
			scanf("%d",&m1[i][j]);
		}	
		
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 2:");
			scanf("%d",&m2[i][j]);
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m3[i][j]=m1[i][j]-m2[i][j];
		printf("[%d]",m3[i][j]);
		}
		printf("\n");	
	}
	
}
void multiplicarmatriz(){
	int m1[2][2],m2[2][2],m3[2][2];
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 1:");
			scanf("%d",&m1[i][j]);
		}	
		
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 2:");
			scanf("%d",&m2[i][j]);
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m3[i][j]=m1[i][j]*m2[i][j];
		printf("[%d]",m3[i][j]);
		}
		printf("\n");	
	}
}

