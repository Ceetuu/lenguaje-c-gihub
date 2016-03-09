#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *texto;
	texto = getenv("path");
	printf("%s\n\n",getenv("path"));
	if(texto!=NULL){
		printf("La ruta es: %s\n\n", texto);
	}
	_putenv("path=c:\\Ejecutable");
	texto=getenv("path");
	printf("Nuevo path: %s", texto);
	getchar();
	
	return 0;
}

