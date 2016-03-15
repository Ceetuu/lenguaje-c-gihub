#include <stdio.h>
#include <time.h>
/* Esto nos va a dar el seed de tiempo proveniente del ordenador. */

#include <stdlib.h>

/* Arreglo con caracteres aleatorios. */

/* El objetivo es crear una matriz con caracteres 20 x 10. */
void matriz(char ma[][10]){
	int i,j;
	
	srand(time(NULL));
	/* Este es el seed para la generación de número aleatorios */
	
	for(i=0;i<20;i++){/* Cada iteración  se accede a una fila determinada. */
		for(j=0;j<10;j++){/* Cada iteración se accede a una columna determinada */
			
			ma[i][j] = rand() %26 + 'a'; /* Las letras en la posición (i,j) serán aleatorias. */
			
			/* EXPLICACIÓN DE FUNCIÓN RAND PARA GENERAR CARACTERES */
			/* La función 'rand()' con módulo 26 va a generar caracteres 
			en un intervalo de 26 distintos caracteres, iniciando por la letra 
			'a'. Viendolo de cierta manera accedemos a los caracteres por medio
			de código ASCII, y al sumarle la letra 'a' le estás sumando el valor
			de 'a' en código ASCII. El módulo 26 va a sacar números del 0 al 25,
			'a' en código ASCII vale 97 y la 'z' vale '122', por lo tanto,
			si con la función rand módulo 26 te sale un 0 entonces al sumarle 
			la letra 'a' (97) te va a dar 97, quedándose en la letra 'a', y si
			con la función rand módulo 26 te sale un 25 entonces al sumárselo
			a la letra 'a' (97) te va a dar 122, siendo este valor en código
			ASCII la letra 'z'. */
		}
	}
}
void printMa(char ma[][10]){
	int i,j;
	
	for(i=0;i<20;i++){
		/* Con este for accedes a una determinada fila en tu arreglo. */
		
		for(j=0;j<10;j++){
			/* Con este for accedes a una determinada fila en tu arreglo. */
			
			printf("%4c",ma[i][j]);
			/* Imprimes el arreglo en la fila 'i' y la columna 'j'. */
		}
		printf("\n");
		/* Este salto de línea lo va a dar al terminar con la fila 'i'.
		Haciendo que la interfaz sea más organizada. */
	}
}

int main() {
	char ma[20][10]={0};
	/* Genero una matriz con 20 filas y 10 columnas. */
	
	matriz(ma);
	/* Mando a llamar la función 'matriz()'. Le pasamos como parámetro el 
	arreglo 'ma'. */
	
	printMa(ma);
	/* Mando a llamar la función 'printMa()'. Le pasamos como parámetro
	el arreglo 'ma'. */
	
	return 0;
}
