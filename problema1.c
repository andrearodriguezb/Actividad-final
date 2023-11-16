#include <stdio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 7

int main() {
 
  int matriz[FILAS][COLUMNAS];
  int i, j;

  // Llenamos la matriz de manera aleatoria
  for (i = 0; i < FILAS; i++) {
    for (j = 0; j < COLUMNAS; j++) {
      matriz[i][j] = rand() % 9;
    }
  }

  // Imprimimos la matriz
  for (i = 0; i < FILAS; i++) {
    for (j = 0; j < COLUMNAS; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // Calculamos la suma de la diagonal principal
  int suma_diagonal_principal = 0;
  for (i = 0; i < FILAS; i++) {
    suma_diagonal_principal += matriz[i][i];
  }

  // Calculamos la suma de la primera fila
  int suma_primera_fila = 0;
  for (i = 0; i < COLUMNAS; i++) {
    suma_primera_fila += matriz[0][i];
  }

  // Calculamos la suma de la última columna
  int suma_ultima_columna = 0;
  for (i = 0; i < FILAS; i++) {
    suma_ultima_columna += matriz[i][COLUMNAS - 1];
  }

  // Calculamos la suma de las filas pares
  int sumafila1=0;
  for (j = 0; j < COLUMNAS; j++) {
    sumafila1 += matriz[0][j];
  }
   int sumafila3=0;
  for (j = 0; j < COLUMNAS; j++) {
    sumafila3 += matriz[2][j];
  }
   int sumafila5=0;
  for (j = 0; j < COLUMNAS; j++) {
    sumafila5 += matriz[4][j];
  }
  int suma_filas_pares = 0;
  for (i = 0; i < FILAS; i++) {
    if (i % 2 == 0) {
      for (j = 0; j < COLUMNAS; j++) {
        suma_filas_pares += matriz[i][j];
      }
    }
  }

  // Calculamos la suma de las columnas impares
	int sumacolumna2=0;
  for (i = 0; i < FILAS; i++) {
    sumacolumna2 += matriz[i][1];
}
	int sumacolumna4=0;
  for (i = 0; i < FILAS; i++) {
    sumacolumna4 += matriz[i][3];
}
    int sumacolumna6=0;
  for (i = 0; i < FILAS; i++) {
    sumacolumna6 += matriz[i][5];
}
  
  int suma_columnas_impares = 0;
  for (j = 0; j < COLUMNAS; j++) {
    if (j % 2 == 1) {
      for (i = 0; i < FILAS; i++) {
        suma_columnas_impares += matriz[i][j];
      }
    }
  }

  // Calculamos la suma del triangular superior y la diagonal principal
  int suma_triangular_superior = 0;
  for (i = 0; i < FILAS; i++) {
    for (j = 0; j <= i; j++) {
      suma_triangular_superior += matriz[i][j];
    }
  }

  // Calculamos la suma del triangular inferior y la diagonal principal
  int suma_triangular_inferior = 0;
  for (i = 0; i < FILAS; i++) {
    for (j = i; j < COLUMNAS; j++) {
      suma_triangular_inferior += matriz[i][j];
    }
  }

	printf("\n");


	printf("Suma de la diagonal principal: %d\n", suma_diagonal_principal);
	printf("Suma de la fila 1: %d\n", suma_primera_fila);
	printf("Suma de la columna 7: %d\n", suma_ultima_columna);
	printf("-----------\n");
	
	printf("Suma de la fila 1: %d\n", sumafila1); 
	printf("Suma de la fila 3: %d\n", sumafila3); 
	printf("Suma de la fila 5: %d\n", sumafila5); 
	printf("Suma de las filas pares: %d\n", suma_filas_pares);
	printf("-----------\n");
	
	printf("Suma de la columna 2: %d\n", sumacolumna2); 
	printf("Suma de la columna 4: %d\n", sumacolumna4); 
	printf("Suma de la columna 6: %d\n", sumacolumna6); 
	printf("Suma de las columnas impares: %d\n", suma_columnas_impares);
	printf("-----------\n");
	
	printf("Suma de la diagonal: %d\n", suma_diagonal_principal);
	printf("Triangular superior: %d\n", suma_triangular_superior);
	printf("-----------\n");
	
	printf("Suma de la diagonal: %d\n", suma_diagonal_principal);
	printf("Triangular inferior: %d\n", suma_triangular_inferior);

  return 0;
}

