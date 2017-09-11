#include "2EnlazadasCursor.c"
#include "funciones.h"
#include "structs.h"
#include "cons.h"
#include <string.h>	
#include "funciones.c"
#include "cons.c"

int main()
{  
	zero = calloc(sizeof(int),1);
	at = calloc(sizeof(int),1);
	v0 = calloc(sizeof(int),1);
	v1 = calloc(sizeof(int),1);
	a0 = calloc(sizeof(int),1);
	a1 = calloc(sizeof(int),1);
	a2 = calloc(sizeof(int),1);
	a3 = calloc(sizeof(int),1);
	t0 = calloc(sizeof(int),1);
	t1 = calloc(sizeof(int),1);
	t2 = calloc(sizeof(int),1);
	t3 = calloc(sizeof(int),1);
	t4 = calloc(sizeof(int),1);
	t5 = calloc(sizeof(int),1);
	t6 = calloc(sizeof(int),1);
	t7 = calloc(sizeof(int),1);
	s0 = calloc(sizeof(int),1);
	s1 = calloc(sizeof(int),1);
	s2 = calloc(sizeof(int),1);
	s3 = calloc(sizeof(int),1);
	s4 = calloc(sizeof(int),1);
	s5 = calloc(sizeof(int),1);
	s6 = calloc(sizeof(int),1);
	s7 = calloc(sizeof(int),1);
	t8 = calloc(sizeof(int),1);
	t9 = calloc(sizeof(int),1);
	k0 = calloc(sizeof(int),1);
	k1 = calloc(sizeof(int),1);
	gp = calloc(sizeof(int),1);
	sp = calloc(sizeof(int),1);
	fp = calloc(sizeof(int),1);
	ra = calloc(sizeof(int),1);

	
	char * nombreArchivoEntradaLControl = calloc(sizeof(char),40);
	char * nombreArchivoEntradaInstrucciones = calloc(sizeof(char),40);
	char * nombreArchivoSalida = calloc(sizeof(char),40);
	
	printf("Ingrese el nombre del archivo (con extensiOn) de entrada que posee las lineas de control\n");
	scanf("%s",nombreArchivoEntradaLControl);
	
	printf("Ingrese el nombre del archivo (con extensiOn) de entrada  que posee las instrucciones del programa\n");
	scanf("%s",nombreArchivoEntradaInstrucciones);
	
	printf("Ingrese el nombre del archivo (con extension, preferencia .txt) de salida\n");
	scanf("%s",nombreArchivoSalida);
	
	
	
	
	Archivo(nombreArchivoEntradaLControl, nombreArchivoEntradaInstrucciones, nombreArchivoSalida);
	//~ getchar();
	exit(0);	
		
    return 0;
}
 
