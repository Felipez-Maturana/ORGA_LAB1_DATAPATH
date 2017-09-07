#include "structs.h"
#include <stdio.h>
#include "operaciones.c"

void compararSalida(lista * lineasControl, char ** lineasControlReal, int linea)
{
	int i=0;
	lista L1 = crearLista();
	for (i = 0; i < 9; i++)
	{
		printf("%s==%s?",lineasControl[linea].arreglo[i].cadena,lineasControlReal[i]);
		if(strcmp(lineasControl[linea].arreglo[i].cadena,lineasControlReal[i])==0)
		{
			//~ L1 = insertar(L1,i,i,lineasControlReal[i]);
			
			L1 = insertar(L1,i,i,"-");
			//~ L1 = insertar(L1,i,i,"asdf");
			
		}
		else if(strcmp(lineasControl[linea].arreglo[i].cadena,"X")==0)
		{
			//~ L1 = insertar(L1,i,i,lineasControl[linea].arreglo[i].cadena);
			
			L1 = insertar(L1,i,i,"-");
			
			//~ L1 = insertar(L1,i,i,"asdfg");
		}
		else
		{
			L1 = insertar(L1,i,i,lineasControlReal[i]);
			//~ L1 = insertar(L1,i,i,"asd");
		}
	}

	printf("%s %s %s %s %s %s %s %s %s\n",L1.arreglo[0].cadena,L1.arreglo[1].cadena,L1.arreglo[2].cadena,L1.arreglo[3].cadena,L1.arreglo[4].cadena,L1.arreglo[5].cadena,L1.arreglo[6].cadena,L1.arreglo[7].cadena,L1.arreglo[8].cadena);
	
	
	//~ printf("lineas de control real\n");
	//~ for (i = 0; i < 9; i++)
	//~ {
		//~ printf("%s",lineasControlReal[i]); 
	//~ }
	//~ printf("\n");
	
	
	
	
	
	
	//~ L1 = insertar(L1,1,1,"");
	//~ L1 = insertar(L1,2,2,"");
	//~ L1 = insertar(L1,3,3,"");
	//~ L1 = insertar(L1,4,4,"");
	//~ L1 = insertar(L1,5,5,"");
	//~ L1 = insertar(L1,6,6,"");
	//~ L1 = insertar(L1,7,7,"");
	//~ L1 = insertar(L1,8,8,"");
}

//Funcion que se encarga de mostrar las cadenas de texto de los 
//elementos de la estructura lista
void mostrarCadenas(lista L1)
{
	int i=0;
	while(i<L1.fin)
	{
		printf("-%s-",L1.arreglo[i].cadena);
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
			if(strlen(ListaEnlazada[i].arreglo[j].cadena)>=6)
			{
				printf("%s|",ListaEnlazada[i].arreglo[j].cadena);
			}
			else
			{
				printf("%s\t|",ListaEnlazada[i].arreglo[j].cadena);
			}
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





void ejecutarPrograma(lista * instrucciones, int cantidadInstrucciones, etiqueta * etiquetas, int cantidadEtiquetas, lista * lineasControlEntrada)
{
	//~ mostrarListaEnlazada(instrucciones,cantidadInstrucciones);
	//~ mostrarEtiquetas(etiquetas,cantidadEtiquetas);
	FILE * Salida;
	if( (Salida = fopen("SalidaSalida.csv", "w")) == NULL)
	{
		printf("Error! No se puede escribir");
		exit(1);
	}
	
	char ** lineaControlActual = (char**)malloc(9*sizeof(char*));
	lista instruccionesUsadas = crearLista();
	int posicion;
	int linea = 1;
	while( PC < cantidadInstrucciones )
	{
		
		
		/////BEGIN DEBUG MODE//////
		printf("PC: %d\n",PC);
		mostrarCadenas(instrucciones[PC]);
		//////END DEBUG MODE///////
		
		posicion = buscarSTR(instruccionesUsadas, instrucciones[PC].arreglo[0].cadena);
		if(posicion == -1)
		{
			instruccionesUsadas = append(instruccionesUsadas,0,instrucciones[PC].arreglo[0].cadena);
		}
		posicion = buscarSTR(instruccionesUsadas, instrucciones[PC].arreglo[0].cadena)+1;
		
		if(strcmp(instrucciones[PC].arreglo[0].cadena, "addi") == 0)
		{
			lineaControlActual = addi(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, atoi(instrucciones[PC].arreglo[3].cadena));
			compararSalida(lineasControlEntrada, lineaControlActual,posicion); 
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "subi") == 0)
		{
			lineaControlActual = subi(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, atoi(instrucciones[PC].arreglo[3].cadena) );
			compararSalida(lineasControlEntrada, lineaControlActual,posicion); 
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
			lineaControlActual = mul(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena);
			compararSalida(lineasControlEntrada, lineaControlActual,posicion); 
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
			lineaControlActual = beq(instrucciones[PC].arreglo[1].cadena, instrucciones[PC].arreglo[2].cadena, instrucciones[PC].arreglo[3].cadena, etiquetas, cantidadEtiquetas);
			compararSalida(lineasControlEntrada, lineaControlActual,posicion); 
		}
		else if(strcmp(instrucciones[PC].arreglo[0].cadena, "j")== 0)
		{
			lineaControlActual = j(instrucciones[PC].arreglo[1].cadena, etiquetas, cantidadEtiquetas);
			compararSalida(lineasControlEntrada, lineaControlActual,posicion); 
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
		linea +=1;
	} 	
}

lista * lineasDeControl()
{
	FILE * LControl;
	if( (LControl = fopen("lineasControl2.txt", "r")) == NULL)
	{
		printf("Error! Archivo de lineas de control no existe");
		exit(1);
	}
	//Se declara la lista enlazada que contendrA las lineas de control recibidas por pantalla.
	lista * lineasControl;
	lineasControl = (lista *) calloc(sizeof(lista),40);	
	
	//Se declaran la lista de caracteres que contendran los valores correspondientes
	//a la columna en el archivo de entrada
	char * RegDst = calloc(sizeof(char),6);
	char * Jump = calloc(sizeof(char),6);
	char * Branch = calloc(sizeof(char),6);
	char * MemRead = calloc(sizeof(char),7);
	char * MemToReg = calloc(sizeof(char),8);
	char * ALUOp = calloc(sizeof(char),6);
	char * MemWrite = calloc(sizeof(char),8);
	char * ALUSrc = calloc(sizeof(char),6);
	char * RegWrite = calloc(sizeof(char),7);
	
	//Se declara la lista de largo 9, correspondiente 
	//La cual contendrA en cada posicion los 'strings' declarados
	//Anteriormente
	lista L1 = crearLista();
	L1 = insertar(L1,0,0,"");
	L1 = insertar(L1,1,1,"");
	L1 = insertar(L1,2,2,"");
	L1 = insertar(L1,3,3,"");
	L1 = insertar(L1,4,4,"");
	L1 = insertar(L1,5,5,"");
	L1 = insertar(L1,6,6,"");
	L1 = insertar(L1,7,7,"");
	L1 = insertar(L1,8,8,"");

	
	
	int i=0;
	//Se lee el archivo de entrada hasta la ultima linea
	while(fscanf(LControl,"%s %s %s %s %s %s %s %s %s",RegDst,Jump,Branch,MemRead,MemToReg,ALUOp,MemWrite,ALUSrc,RegWrite) != EOF)
	{
		//Se declaran variables temporales para los strings
		char * m1 = malloc(sizeof(char) * strlen(RegDst));
		char * m2 = malloc(sizeof(char) * strlen(Jump));
		char * m3 = malloc(sizeof(char) * strlen(Branch));
		char * m4 = malloc(sizeof(char) * strlen(MemRead));
		char * m5 = malloc(sizeof(char) * strlen(MemToReg));
		char * m6 = malloc(sizeof(char) * strlen(ALUOp));
		char * m7 = malloc(sizeof(char) * strlen(MemWrite));
		char * m8 = malloc(sizeof(char) * strlen(ALUSrc));
		char * m9 = malloc(sizeof(char) * strlen(RegWrite));
		//Se copia el valor contenido en la columna correspondiente
		//en los strings temporales
		strcpy(m1,RegDst);
		strcpy(m2,Jump);
		strcpy(m3,Branch);
		strcpy(m4,MemRead);
		strcpy(m5,MemToReg);
		strcpy(m6,ALUOp);
		strcpy(m7,MemWrite);
		strcpy(m8,ALUSrc);
		strcpy(m9,RegWrite);
		
		//Se asigna la posicion correspondiente.
		L1.linea = i;
		L1.arreglo[0].cadena = m1;
		L1.arreglo[1].cadena = m2;
		L1.arreglo[2].cadena = m3;
		L1.arreglo[3].cadena = m4;
		L1.arreglo[4].cadena = m5;
		L1.arreglo[5].cadena = m6;
		L1.arreglo[6].cadena = m7;
		L1.arreglo[7].cadena = m8;
		L1.arreglo[8].cadena = m9;
		//Se agrega la nueva lista a nuestra lista de listas
		lineasControl[i] = L1;
		i+=1;
	}
	mostrarListaEnlazada(lineasControl,i);
	//se retorna la lista de lista
	return lineasControl;
	
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

	
	//Obtener lineas de control desde el archivo de entrada
	lista * lineasControlEntrada = lineasDeControl();
	
	//Ejecucion del programa
	ejecutarPrograma(instrucciones, *CantidadListas,etiquetas, *CantidadEtiquetas, lineasControlEntrada);
	
	
	
	print_register();
	getchar();
}
