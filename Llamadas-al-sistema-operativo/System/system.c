#include <stdio.h>
#include <process.h>

int system();

int main(int argc, char *argv[]) {
	
	/* Si tu archivo que vas a leer está en la misma carpeta que
	el ejecutable de tu codigo entonces no debes
	de poner alguna ruta. Si tu archivo de texto está en otra ruta
	entonces tienes que poner la ruta hacía el fichero
	donde está el archivo que quieres. */
	system("type hola-system.txt");
	
	getchar();/* Detendrá el programa hasta que el usuario presione una tecla. */
	
	system("cls"); /* Esto borra la pantalla después de haberla desplegado. */
	
	getchar();/* Detendrá el programa hasta que el usuario presione una tecla. */
	return 0;
}

