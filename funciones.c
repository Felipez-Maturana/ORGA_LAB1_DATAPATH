#include "structs.h"
#include <stdio.h>
#include "operaciones.c"


//Funcion que se encarga de mostrar las cadenas de texto de los 
//elementos de la estructura lista
void mostrarCadenas(lista L1)
{
	int i=0;
	while(i<L1.fin)
	{
		printf("%s ",L1.arreglo[i].cadena);
		i++;
	}
	printf("\n");
}

//Funcion que permite mostrar por pantalla una lista de la estructura
//etiqueta
void mostrarEtiquetas(etiqueta * etiquetas, int cantidad)
{
	int i=0;
	for(;i<cantidad;i++)
	{
		printf("%d: |%s| PC: %d\n",i,etiquetas[i].nombre,etiquetas[i].linea);
	}
}

//Funcion que apila listas enlazadas
lista * appendLista(lista L1, lista * ListaEnlazada, int * CantidadElementos)
{
	//Se aumenta en uno la cantidad de elementos que posee esa lista
	* CantidadElementos = *CantidadElementos + 1; 
	//Se asigna mAs memoria a la lista enlazada que contendrA las listas

	ListaEnlazada = (lista *) realloc(ListaEnlazada,*CantidadElementos*sizeof(lista));
	
	//Se asigna en la posicion indicada, la lista L1
	ListaEnlazada[*CantidadElementos-1] = L1 ;
	return ListaEnlazada;
}

void appendList(lista * L1,lista ** ListaEnlazada, int * CantidadElementos)
{
	* CantidadElementos = *CantidadElementos + 1; 
	*ListaEnlazada = (lista *) realloc(*ListaEnlazada,*CantidadElementos*sizeof(lista));
	
	*ListaEnlazada[*CantidadElementos-1] = *L1;
}

void copy_lista(lista * L1, lista * L2)
{
	L2->cabeza = L1-> cabeza;
	L2->fin = L1-> fin;
	
	L2->arreglo->cadena = L1->arreglo->cadena;
}

//Funcion que se encarga de mostrar las cadenas de una lista de lista
void mostrarListaEnlazada(lista * ListaEnlazada, int CantidadElementos)
{
	int i;
	int j;
	for(i=0;i<CantidadElementos;i++)
	{
		//~ printf("PC: %d \t|",ListaEnlazada[i].linea);
		for (j = 0; j < ListaEnlazada[i].fin ; j++)
		{
			printf("%s|\t",ListaEnlazada[i].arreglo[j].cadena); 
		}
		printf("\n");
	}
}


//Funcion que se encarga de mostrar las cadenas de una lista de lista
//en un archivo FILE dado en el argumento
void imprimirArchivoCSV(FILE * salida,lista * ListaEnlazada, int CantidadElementos)
{
	int i;
	int j;
	for(i=0;i<CantidadElementos;i++)
	{
		for (j = 0; j < ListaEnlazada[i].fin ; j++)
		{
			fprintf(salida,"%d,%d,%s\n", i,j,ListaEnlazada[i].arreglo[j].cadena); 
		}
	}
}

//Funcion que determina el comportamiento de una instruccion dada
//Cantidad de operadores que se deben esperar:
//addi $t, $s, imm => return 3.
//add add $d, $s, $t => return 3.
//div $s, $t => return 2
//j target => return 1
//label: => return 0

int tipoInstruccion(char * instruccion)
{
	if (strcmp(instruccion, "add") == 0 || 
		strcmp(instruccion, "addi") == 0 ||
		strcmp(instruccion, "subi") == 0 || 
		strcmp(instruccion, "beq") == 0 || 
		strcmp(instruccion, "bne") == 0 || 
		strcmp(instruccion, "sll") == 0 || 
		strcmp(instruccion, "slt") == 0 || 
		strcmp(instruccion, "sub") == 0 ||
		strcmp(instruccion, "div") == 0 ||
		strcmp(instruccion, "mul") == 0 ||
		strcmp(instruccion, "bgt") == 0 ||
		strcmp(instruccion, "blt") == 0)
	{
		return 3;
	}
	else if (strcmp(instruccion, "lw") == 0 || 
			 strcmp(instruccion, "sw") == 0 || 
			 strcmp(instruccion, "la") == 0)
	{
		return 2;
	}
	else if (strcmp(instruccion, "j") == 0 || 
			 strcmp(instruccion, "jal") == 0 || 
			 strcmp(instruccion, "jr") == 0
			 ) 
	{
		return 1;
	}
	else if (strchr(instruccion, ':'))
	{
		return 0;
	}
	else
	{
		return -1;
	}
}





void ejecutarPrograma(lista * instrucciones, int cantidadInstrucciones, etiqueta * etiquetas, int cantidadEtiquetas)
{
	//~ mostrarListaEnlazada(instrucciones,cantidadInstrucciones);
	//~ mostrarEtiquetas(etiquetas,cantidadEtiquetas);
	
	
	while( PC < cantidadInstrucciones )
	{
		
		/////BEGIN DEBUG MODE//////
		printf("PC: %d\n",PC);
		mostrarCadenas(instrucciones[PC]);
		
		//////END DEBUG MODE///////
		if(strcmp(instrucciones[PC].arreglo[0].cadena, "addi") == 0)
		{
			addi(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, atoi(instrucciones[PC].arreglo[3].cadena) );
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "subi") == 0)
		{
			subi(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, atoi(instrucciones[PC].arreglo[3].cadena) );
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "add")== 0)
		{
			add(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "sub")== 0)
		{
			sub(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "mul")== 0)
		{
			mul(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "div")== 0)
		{
			divi(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "blt")== 0)
		{
			blt(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "bgt")== 0)
		{
			bgt(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "beq")== 0)
		{
			beq(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "j")== 0)
		{
			j(instrucciones[PC].arreglo[1].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "jal")== 0)
		{
			jal(instrucciones[PC].arreglo[1].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "jr")== 0)
		{
			jr(instrucciones[PC].arreglo[1].cadena, etiquetas, cantidadEtiquetas);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "la")== 0)
		{
			la(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "lw")== 0)
		{
			lw(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena);
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "sw")== 0)
		{
			sw(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena);
		}
		else
		{
			printf("INSTRUCCION NO ENCONTRADA %s",instrucciones[PC].arreglo[0].cadena);
		}
	} 	
}


void Archivo()
{
	//~ int numLinea = 0;
	
	
	//Inicializando lista enlazada
	lista * instrucciones;
	instrucciones = (lista *) calloc(sizeof(lista),40);	

	//Inicializando etiquetas;
	etiqueta * etiquetas;
	etiquetas = (etiqueta *)calloc(sizeof(etiqueta),10);
	
	
    int * CantidadListas = calloc(sizeof(int),1);
	int * CantidadEtiquetas = calloc(sizeof(int),1);
	
	FILE * entrada;
	if( (entrada = fopen("mipsEjemplo2.asm", "r")) == NULL)
	{
		printf("Error! Archivo no existe");
		exit(1);
	}
	
	char * op1 = calloc(sizeof(char),10);
	char * op2 = calloc(sizeof(char),10);
	char * op3 = calloc(sizeof(char),10);
	char * op4 = calloc(sizeof(char),10);
	
	lista L1 = crearLista();
	L1 = insertar(L1,0,0,"");
	L1 = insertar(L1,1,1,"");
	lista L2 = crearLista();
	L2 = insertar(L2,0,0,"");
	L2 = insertar(L2,1,1,"");
	L2 = insertar(L2,2,2,"");
	lista L3 = crearLista();
	L3 = insertar(L3,0,0,"");
	L3 = insertar(L3,1,1,"");
	L3 = insertar(L3,2,2,"");
	L3 = insertar(L3,3,3,"");
	
	//~ lista L4 = crearLista();
	
	while(fscanf(entrada,"%s",op1) != EOF)
	{
		//~ printf("%s\n",op1);
		if(tipoInstruccion(op1)==-1)
		{
			mostrarListaEnlazada(instrucciones,*CantidadListas);
			printf("ERROR 404: La instruccion |%s| no se encuentra\n", op1);
			exit(2);
		}
		else if(tipoInstruccion(op1)==3)
		{
			fscanf(entrada,"%s %s %s",op2,op3,op4);
			if(strchr(op2,'$'))
			{
				strncpy(op2,&op2[1],strlen(op2));
			}
			if(strchr(op3,'$'))
			{
				strncpy(op3,&op3[1],strlen(op3));				
			}
			if(strchr(op4,'$'))
			{
				strncpy(op4,&op4[1],strlen(op4));				
			}
			op2[strlen(op2)-1]=0;
			op3[strlen(op3)-1]=0;
			
	
			
			char * m1 = malloc(sizeof(char) * strlen(op1));
			strcpy(m1,op1);
			char * m2 = malloc(sizeof(char) * strlen(op2));
			strcpy(m2,op2);
			char * m3 = malloc(sizeof(char) * strlen(op3));
			strcpy(m3,op3);
			char * m4 = malloc(sizeof(char) * strlen(op4));
			strcpy(m4,op4);
			
			L3.linea = *CantidadListas;
			L3.arreglo[0].cadena = m1;
			L3.arreglo[1].cadena = m2;
			L3.arreglo[2].cadena = m3;
			L3.arreglo[3].cadena = m4;
		
			instrucciones[*CantidadListas] = L3;
			*CantidadListas+=1;	
		}
		else if(tipoInstruccion(op1)==2)
		{
			fscanf(entrada,"%s %s",op2,op3);
			if(strchr(op2,'$'))
			{
				strncpy(op2,&op2[1],strlen(op2));
			}
			//Se elimina la ','
			op2[strlen(op2)-1]=0;
			
			char * m1 = malloc(sizeof(char) * strlen(op1));
			strcpy(m1,op1);
			char * m2 = malloc(sizeof(char) * strlen(op2));
			strcpy(m2,op2);
			char * m3 = malloc(sizeof(char) * strlen(op3));
			strcpy(m3,op3);
			
			L2.linea = *CantidadListas;
			L2.arreglo[0].cadena = m1;
			L2.arreglo[1].cadena = m2;
			L2.arreglo[2].cadena = m3;
		
			instrucciones[*CantidadListas] = L2;
			*CantidadListas+=1;
			
		}
		else if(tipoInstruccion(op1)==1)
		{
			fscanf(entrada,"%s",op2);
			if(strchr(op2,'$'))
			{
				strncpy(op2,&op2[1],strlen(op2));			
			}
			
			char * m1 = malloc(sizeof(char) * strlen(op1));
			strcpy(m1,op1);
			char * m2 = malloc(sizeof(char) * strlen(op2));
			strcpy(m2,op2);
			L1.arreglo[0].cadena = m1;
			L1.arreglo[1].cadena = m2;
			L1.linea = *CantidadListas;
			instrucciones[*CantidadListas] = L1;
			*CantidadListas+=1;	
				
		}
		//LABELS
		else if (tipoInstruccion(op1)==0)
		{
				char * temp = calloc(sizeof(char),strlen(op1));
				strcpy(temp,op1);
				//Se borra el ultimo caracter (:)
				temp[strlen(temp)-1]=0;
				etiquetas[*CantidadEtiquetas].nombre = temp;
				etiquetas[*CantidadEtiquetas].linea = *CantidadListas;
				*CantidadEtiquetas+=1;	
		}
	} //FIN DE LECTURA ARCHIVO 
	
	mostrarListaEnlazada(instrucciones,*CantidadListas);
	mostrarEtiquetas(etiquetas,*CantidadEtiquetas);
	fclose(entrada);


	//Ejecucion del programa
	//~ ejecutarPrograma(instrucciones, *CantidadListas,etiquetas, *CantidadEtiquetas);
	
	
	print_register();
	getchar();
}
