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

	
	//~ char ** asd = addi("t1", "t2", 2);
	//~ int i=0;
	//~ for (i = 0; i < 8; i++)
	//~ {
		//~ printf("%d %s\n",i,asd[i]);
	//~ }
	
	
	//~ Archivo();
	//~ getchar();
	//~ exit(0);	
	
	
	lista prueba = crearLista();
	prueba = append(prueba, 0, "addi");
	prueba = append(prueba, 0, "sub");
	prueba = append(prueba, 0, "mul");
	
	printf("%d",buscarSTR(prueba, "sakdjas"));
	
	mostrarCadenas(prueba);
	
	//~ *( get_adress("s5") + 1) = 3;
	
	//~ printf("%p %d\n",get_adress("s5")+1,*(s5 + 1));  
	//~ *( get_adress("sp") + 2) = 20;
	
	//~ printf("%p %d\n",get_adress("s5"),*(get_adress("s5")));  
	
	
	
    return 0;
}
 
