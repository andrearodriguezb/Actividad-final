#include <stdio.h>

int main() {
  // Declaramos la matriz
  int matriz[3][3];
  int i, j;
  int columnas;

  // Llenamos la matriz de manera manual
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Ingrese el elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }printf("\n");

  // Imprimimos la matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  printf ("\n");

	int sumafila1=0;
  for (j = 0; j < 3; j++) {
    sumafila1 += matriz[0][j];
  }
  int sumafila2=0;
  for (j = 0; j < 3; j++) {
    sumafila2 += matriz[1][j];
  }
  int sumafila3=0;
  for (j = 0; j < 3; j++) {
    sumafila3 += matriz[2][j];
  }
  
  int sumacolumna1=0;
  for (i = 0; i < 3; i++) {
    sumacolumna1 += matriz[i][0];
	}
	int sumacolumna2=0;
  for (i = 0; i < 3; i++) {
    sumacolumna2 += matriz[i][1];
	}
	int sumacolumna3=0;
  for (i = 0; i < 3; i++) {
    sumacolumna3 += matriz[i][2];
	}
	
	int suma_diagonal_principal = 0;
  for (i = 0; i < 3; i++) {
    suma_diagonal_principal += matriz[i][i];
  }
  
  int suma_diagonal_secundaria = 0;
  for (j = 0; j < 3; j++) {
    suma_diagonal_secundaria += matriz[j][j];
  }
  
  printf("Suma de la fila 1: %d\n", sumafila1);
  printf("Suma de la fila 2: %d\n", sumafila2); 
  printf("Suma de la fila 3: %d\n", sumafila3); 

	printf("Suma de la columna 1: %d\n", sumacolumna1);
  printf("Suma de la columna 2: %d\n", sumacolumna2); 
  printf("Suma de la columna 3: %d\n", sumacolumna3); 

printf("Suma de la diagonal principal: %d\n", suma_diagonal_principal);
printf("Suma de la diagonal secundaria: %d\n", suma_diagonal_secundaria);

printf ("\n");

	if (sumafila1 == sumafila2 & sumafila1 == sumafila3 & sumacolumna1 == sumacolumna2 & sumacolumna1 == sumacolumna3 & suma_diagonal_principal == suma_diagonal_secundaria)
	{
		printf ("La matriz es magica!!!\n");
	}
  return 0;
}

