#include <stdio.h>
#include <process.h>

int system();

int main(int argc, char *argv[]) {
	
	/* Si tu archivo que vas a leer est� en la misma carpeta que
	el ejecutable de tu codigo entonces no debes
	de poner alguna ruta. Si tu archivo de texto est� en otra ruta
	entonces tienes que poner la ruta hac�a el fichero
	donde est� el archivo que quieres. */
	system("type hola-system.txt");
	
	getchar();/* Detendr� el programa hasta que el usuario presione una tecla. */
	
	system("cls"); /* Esto borra la pantalla despu�s de haberla desplegado. */
	
	getchar();/* Detendr� el programa hasta que el usuario presione una tecla. */
	return 0;
}

