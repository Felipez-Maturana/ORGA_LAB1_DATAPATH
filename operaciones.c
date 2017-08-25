#include "cons.c"

int * get_adress(char * nameReg)
{
	if (strcmp(nameReg,"zero") == 0)
	{
		return zero;		
	}
	else if (strcmp(nameReg,"at") == 0)
	{
		return at;
	}
	else if (strcmp(nameReg,"v0") == 0)
	{
		return v0;
	}
	else if (strcmp(nameReg,"v1") == 0)
	{
		return v1;
	}
	else if (strcmp(nameReg,"a0") == 0)
	{
		return a0;
	}
	else if (strcmp(nameReg,"a1") == 0)
	{
		return a1;
	}
	else if (strcmp(nameReg,"a2") == 0)
	{
		return a2;
	}
	else if (strcmp(nameReg,"a3") == 0)
	{
		return a3;
	}
	else if (strcmp(nameReg,"t0") == 0)
	{
		return t0;
	}
	else if (strcmp(nameReg,"t1") == 0)
	{
		return t1;
	}
	else if (strcmp(nameReg,"t2") == 0)
	{
		return t2;
	}
	else if (strcmp(nameReg,"t3") == 0)
	{
		return t3;
	}
	else if (strcmp(nameReg,"t4") == 0)
	{
		return t4;
	}
	else if (strcmp(nameReg,"t5") == 0)
	{
		return t5;
	}
	else if (strcmp(nameReg,"t6") == 0)
	{
		return t6;
	}
	else if (strcmp(nameReg,"s0") == 0)
	{
		return s0;
	}else if (strcmp(nameReg,"s1") == 0)
	{
		return s1;
	}else if (strcmp(nameReg,"s2") == 0)
	{
		return s2;
	}else if (strcmp(nameReg,"s3") == 0)
	{
		return s3;
	}else if (strcmp(nameReg,"s4") == 0)
	{
		return s4;
	}else if (strcmp(nameReg,"s5") == 0)
	{
		return s5;
	}else if (strcmp(nameReg,"s6") == 0)
	{
		return s6;
	}else if (strcmp(nameReg,"s7") == 0)
	{
		return s7;
	}
	else if (strcmp(nameReg,"t8") == 0)
	{
		return t8;
	}
	else if (strcmp(nameReg,"t9") == 0)
	{
		return t9;
	}
	else if (strcmp(nameReg,"k0") == 0)
	{
		return k0;
	}
	else if (strcmp(nameReg,"k1") == 0)
	{
		return k1;
	}
	else if (strcmp(nameReg,"gp") == 0)
	{
		return gp;
	}
	else if (strcmp(nameReg,"sp") == 0)
	{
		return sp;
	}
	else if (strcmp(nameReg,"fp") == 0)
	{
		return fp;
	}
	else if (strcmp(nameReg,"ra") == 0)
	{
		return ra;
	}
	else
	{
		return NULL;
	}
}


int get_value(char * nameReg)
{
	if (strcmp(nameReg,"zero") == 0)
	{
		return * zero;		
	}
	else if (strcmp(nameReg,"at") == 0)
	{
		return * at;
	}
	else if (strcmp(nameReg,"v0") == 0)
	{
		return * v0;
	}
	else if (strcmp(nameReg,"v1") == 0)
	{
		return * v1;
	}
	else if (strcmp(nameReg,"a0") == 0)
	{
		return * a0;
	}
	else if (strcmp(nameReg,"a1") == 0)
	{
		return * a1;
	}
	else if (strcmp(nameReg,"a2") == 0)
	{
		return * a2;
	}
	else if (strcmp(nameReg,"a3") == 0)
	{
		return * a3;
	}
	else if (strcmp(nameReg,"t0") == 0)
	{
		return * t0;
	}
	else if (strcmp(nameReg,"t1") == 0)
	{
		return * t1;
	}
	else if (strcmp(nameReg,"t2") == 0)
	{
		return * t2;
	}
	else if (strcmp(nameReg,"t3") == 0)
	{
		return * t3;
	}
	else if (strcmp(nameReg,"t4") == 0)
	{
		return * t4;
	}
	else if (strcmp(nameReg,"t5") == 0)
	{
		return * t5;
	}
	else if (strcmp(nameReg,"t6") == 0)
	{
		return * t6;
	}
	else if (strcmp(nameReg,"s0") == 0)
	{
		return * s0;
	}else if (strcmp(nameReg,"s1") == 0)
	{
		return * s1;
	}else if (strcmp(nameReg,"s2") == 0)
	{
		return * s2;
	}else if (strcmp(nameReg,"s3") == 0)
	{
		return * s3;
	}else if (strcmp(nameReg,"s4") == 0)
	{
		return * s4;
	}else if (strcmp(nameReg,"s5") == 0)
	{
		return * s5;
	}else if (strcmp(nameReg,"s6") == 0)
	{
		return * s6;
	}else if (strcmp(nameReg,"s7") == 0)
	{
		return * s7;
	}
	else if (strcmp(nameReg,"t8") == 0)
	{
		return * t8;
	}
	else if (strcmp(nameReg,"t9") == 0)
	{
		return * t9;
	}
	else if (strcmp(nameReg,"k0") == 0)
	{
		return * k0;
	}
	else if (strcmp(nameReg,"k1") == 0)
	{
		return * k1;
	}
	else if (strcmp(nameReg,"gp") == 0)
	{
		return * gp;
	}
	else if (strcmp(nameReg,"sp") == 0)
	{
		return * sp;
	}
	else if (strcmp(nameReg,"fp") == 0)
	{
		return * fp;
	}
	else if (strcmp(nameReg,"ra") == 0)
	{
		return * ra;
	}
	else
	{
		return -1;
	}
}


void set_value(char * nameReg, int value)
{
	if (strcmp(nameReg,"zero") == 0)
	{
		 *zero= value;		
	}
	else if (strcmp(nameReg,"at") == 0)
	{
		 *at= value;
	}
	else if (strcmp(nameReg,"v0") == 0)
	{
		 *v0= value;
	}
	else if (strcmp(nameReg,"v1") == 0)
	{
		 *v1= value;
	}
	else if (strcmp(nameReg,"a0") == 0)
	{
		 *a0= value;
	}
	else if (strcmp(nameReg,"a1") == 0)
	{
		 *a1= value;
	}
	else if (strcmp(nameReg,"a2") == 0)
	{
		 *a2= value;
	}
	else if (strcmp(nameReg,"a3") == 0)
	{
		 *a3= value;
	}
	else if (strcmp(nameReg,"t0") == 0)
	{
		 *t0= value;
	}
	else if (strcmp(nameReg,"t1") == 0)
	{
		 *t1= value;
	}
	else if (strcmp(nameReg,"t2") == 0)
	{
		 *t2= value;
	}
	else if (strcmp(nameReg,"t3") == 0)
	{
		 *t3= value;
	}
	else if (strcmp(nameReg,"t4") == 0)
	{
		 *t4= value;
	}
	else if (strcmp(nameReg,"t5") == 0)
	{
		 *t5= value;
	}
	else if (strcmp(nameReg,"t6") == 0)
	{
		 *t6= value;
	}
	else if (strcmp(nameReg,"s0") == 0)
	{
		 *s0= value;
	}else if (strcmp(nameReg,"s1") == 0)
	{
		 *s1= value;
	}else if (strcmp(nameReg,"s2") == 0)
	{
		 *s2= value;
	}else if (strcmp(nameReg,"s3") == 0)
	{
		 *s3= value;
	}else if (strcmp(nameReg,"s4") == 0)
	{
		 *s4= value;
	}else if (strcmp(nameReg,"s5") == 0)
	{
		 *s5= value;
	}else if (strcmp(nameReg,"s6") == 0)
	{
		 *s6= value;
	}else if (strcmp(nameReg,"s7") == 0)
	{
		 *s7= value;
	}
	else if (strcmp(nameReg,"t8") == 0)
	{
		 *t8= value;
	}
	else if (strcmp(nameReg,"t9") == 0)
	{
		 *t9= value;
	}
	else if (strcmp(nameReg,"k0") == 0)
	{
		 *k0= value;
	}
	else if (strcmp(nameReg,"k1") == 0)
	{
		 *k1= value;
	}
	else if (strcmp(nameReg,"gp") == 0)
	{
		 *gp= value;
	}
	else if (strcmp(nameReg,"sp") == 0)
	{
		 *sp= value;
	}
	else if (strcmp(nameReg,"fp") == 0)
	{
		 *fp= value;
	}
	else if (strcmp(nameReg,"ra") == 0)
	{
		 *ra= value;
	}
	else
	{
		printf("ERROR, registro %s no encontrado!",nameReg);
		exit(1);
	}
}


void set_adress(char * nameReg, int * adress, int offset)
{
	offset=offset/4;
	if (strcmp(nameReg,"zero") == 0)
	{
		 zero= adress + offset;		
	}
	else if (strcmp(nameReg,"at") == 0)
	{
		 at= adress + offset;
	}
	else if (strcmp(nameReg,"v0") == 0)
	{
		 v0= adress + offset;
	}
	else if (strcmp(nameReg,"v1") == 0)
	{
		 v1= adress + offset;
	}
	else if (strcmp(nameReg,"a0") == 0)
	{
		 a0= adress + offset;
	}
	else if (strcmp(nameReg,"a1") == 0)
	{
		 a1= adress + offset;
	}
	else if (strcmp(nameReg,"a2") == 0)
	{
		 a2= adress + offset;
	}
	else if (strcmp(nameReg,"a3") == 0)
	{
		 a3= adress + offset;
	}
	else if (strcmp(nameReg,"t0") == 0)
	{
		 t0= adress + offset;
	}
	else if (strcmp(nameReg,"t1") == 0)
	{
		 t1= adress + offset;
	}
	else if (strcmp(nameReg,"t2") == 0)
	{
		 t2= adress + offset;
	}
	else if (strcmp(nameReg,"t3") == 0)
	{
		 t3= adress + offset;
	}
	else if (strcmp(nameReg,"t4") == 0)
	{
		 t4= adress + offset;
	}
	else if (strcmp(nameReg,"t5") == 0)
	{
		 t5= adress + offset;
	}
	else if (strcmp(nameReg,"t6") == 0)
	{
		 t6= adress + offset;
	}
	else if (strcmp(nameReg,"s0") == 0)
	{
		 s0= adress + offset;
	}else if (strcmp(nameReg,"s1") == 0)
	{
		 s1= adress + offset;
	}else if (strcmp(nameReg,"s2") == 0)
	{
		 s2= adress + offset;
	}else if (strcmp(nameReg,"s3") == 0)
	{
		 s3= adress + offset;
	}else if (strcmp(nameReg,"s4") == 0)
	{
		 s4= adress + offset;
	}else if (strcmp(nameReg,"s5") == 0)
	{
		 s5= adress + offset;
	}else if (strcmp(nameReg,"s6") == 0)
	{
		 s6= adress + offset;
	}else if (strcmp(nameReg,"s7") == 0)
	{
		 s7= adress + offset;
	}
	else if (strcmp(nameReg,"t8") == 0)
	{
		 t8= adress + offset;
	}
	else if (strcmp(nameReg,"t9") == 0)
	{
		 t9= adress + offset;
	}
	else if (strcmp(nameReg,"k0") == 0)
	{
		 k0= adress + offset;
	}
	else if (strcmp(nameReg,"k1") == 0)
	{
		 k1= adress + offset;
	}
	else if (strcmp(nameReg,"gp") == 0)
	{
		 gp= adress + offset;
	}
	else if (strcmp(nameReg,"sp") == 0)
	{
		 sp= adress + offset;
	}
	else if (strcmp(nameReg,"fp") == 0)
	{
		 fp= adress + offset;
	}
	else if (strcmp(nameReg,"ra") == 0)
	{
		 ra= adress + offset;
	}
	else
	{
		printf("ERROR, registro %s no encontrado!",nameReg);
		exit(1);
	}
}



int get_PC_etiqueta(char * nombreEtiqueta,etiqueta * etiquetas, int cantidad)
{
	int i=0;
	for(;i<cantidad;i++)
	{
		if( strcmp(etiquetas[i].nombre,nombreEtiqueta)==0)
		{
			return etiquetas[i].linea;
		} 
	}
	printf("No se ha encontrado la etiqueta %s\n",nombreEtiqueta);
	printf("El programa se cerrarA...\n");
	getchar();
	exit(1);
}

void print_register()
{
	printf("zero: %d\n", *zero);
	printf("at: %d\n", *at);
	printf("v0: %d\n", *v0);
	printf("v1: %d\n", *v1);
	printf("a0: %d\n", *a0);
	printf("a1: %d\n", *a1);
	printf("a2: %d\n", *a2);
	printf("a3: %d\n", *a3);
	printf("t0: %d\n", *t0);
	printf("t1: %d\n", *t1);
	printf("t2: %d\n", *t2);
	printf("t3: %d\n", *t3);
	printf("t4: %d\n", *t4);
	printf("t5: %d\n", *t5);
	printf("t6: %d\n", *t6);
	printf("t7: %d\n", *t7);
	printf("s0: %d\n", *s0);
	printf("s1: %d\n", *s1);
	printf("s2: %d\n", *s2);
	printf("s3: %d\n", *s3);
	printf("s4: %d\n", *s4);
	printf("s5: %d\n", *s5);
	printf("s6: %d\n", *s6);
	printf("s7: %d\n", *s7);
	printf("t8: %d\n", *t8);
	printf("t9: %d\n", *t9);
	printf("k0: %d\n", *k0);
	printf("k1: %d\n", *k1);
	printf("gp: %d\n", *gp);
	printf("sp: %d\n", *sp);
	printf("fp: %d\n", *fp);
	printf("ra: %d\n", *ra);
}

char ** addi(char * reg1, char * reg2, int value)
{
	int res = get_value(reg2) + value;
	set_value(reg1,res);
	PC+=1;
	
	char **lineasControl = (char**)malloc(9*sizeof(char*));
	lineasControl[0] = "1";//RegDst        
	lineasControl[1] = "0";//Jump
	lineasControl[2] = "0";//Branch
	lineasControl[3] = "0";//MemRead
	lineasControl[4] = "0";//MemToReg
	lineasControl[5] = "010";//ALUOp
	lineasControl[6] = "0";//MemWrite
	lineasControl[7] = "0";//ALUSrc
	lineasControl[8] = "1";//RegWrite
	//~ char *lineasControl[9] = { "1","0","0","0","010","0","0","1"};
	
	return lineasControl;
}

char ** subi(char * reg1, char * reg2, int value)
{
	int res = get_value(reg2) - value;
	set_value(reg1,res);
	PC+=1;
	
	char **lineasControl = (char**)malloc(9*sizeof(char*));
	lineasControl[0] = "1";//RegDst        
	lineasControl[1] = "0";//Jump
	lineasControl[2] = "0";//Branch
	lineasControl[3] = "0";//MemRead
	lineasControl[4] = "0";//MemToReg
	lineasControl[5] = "110";//ALUOp
	lineasControl[6] = "0";//MemWrite
	lineasControl[7] = "0";//ALUSrc
	lineasControl[8] = "1";//RegWrite
	
	return lineasControl;
}

void add(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) + get_value(reg3);
	set_value(reg1,res);
	PC+=1;
}

void sub(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) - get_value(reg3);
	set_value(reg1,res);
	PC+=1;
}

char ** mul(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) * get_value(reg3);
	set_value(reg1,res);
	PC+=1;
	
	char **lineasControl = (char**)malloc(9*sizeof(char*));
	lineasControl[0] = "1";//RegDst        
	lineasControl[1] = "0";//Jump
	lineasControl[2] = "0";//Branch
	lineasControl[3] = "0";//MemRead
	lineasControl[4] = "0";//MemToReg
	lineasControl[5] = "110";//ALUOp
	lineasControl[6] = "0";//MemWrite
	lineasControl[7] = "0";//ALUSrc
	lineasControl[8] = "1";//RegWrite
	
	return lineasControl;
}

void divi(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) / get_value(reg3);
	set_value(reg1,res);
	PC+=1;
}

//Salto condicional, saltarA a la direccion PC de la etiqueta en caso de que 
//reg1 < reg2, de lo contrario PC = PC + 1
void blt(char * reg1, char * reg2, char * etiqueta1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	int a = get_value(reg1);
	int b = get_value(reg2); 
	//~ printf(" %d < %d ??\n",a,b);
	if( a < b) 
	{
		printf("\\\\\\\\\\\%s %d > %s %d -> PC: %d\n",reg1,a,reg2,b,PC);
		PC = get_PC_etiqueta(etiqueta1, etiquetas, cantidadEtiquetas);
	}
	else
	{
		PC+=1;
	}
}

//Salto condicional, saltarA a la direccion PC de la etiqueta en caso de que 
//reg1 > reg2, de lo contrario PC = PC + 1
void bgt(char * reg1, char * reg2, char * etiqueta1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	int a = get_value(reg1);
	int b = get_value(reg2); 
	//~ printf(" %d > %d ??\n",a,b);
	if( a > b )
	{
		printf("\\\\\\\\\\\%s %d > %s %d -> PC: %d\n",reg1,a,reg2,b,PC);  
		PC = get_PC_etiqueta(etiqueta1, etiquetas, cantidadEtiquetas);
	}
	else
	{
		PC+=1;
	}
}

//Salto condicional, saltarA a la direccion PC de la etiqueta en caso de que 
//reg1 > reg2, de lo contrario PC = PC + 1
char ** beq(char * reg1, char * reg2, char * etiqueta1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	int a = get_value(reg1);
	int b = get_value(reg2); 
	//~ printf(" %d = %d ??\n",a,b);
	//~ printf("\\\\\\\\\\\%s %d == %s %d -> PC: %d\n",reg1,a,reg2,b,PC);
	
	char **lineasControl = (char**)malloc(9*sizeof(char*));
	lineasControl[0] = "X";//RegDst        
	lineasControl[1] = "0";//Jump
	lineasControl[2] = "1";//Branch
	lineasControl[3] = "0";//MemRead
	lineasControl[4] = "X";//MemToReg
	lineasControl[5] = "110";//ALUOp
	lineasControl[6] = "0";//MemWrite
	lineasControl[7] = "0";//ALUSrc
	lineasControl[8] = "0";//RegWrite
	
	
	
	if( a == b )
	{
		printf("\\\\\\\\\\\%s %d == %s %d -> PC: %d\n",reg1,a,reg2,b,PC);  
		PC = get_PC_etiqueta(etiqueta1, etiquetas, cantidadEtiquetas);
		return lineasControl;
	}
	else
	{
		PC+=1;
		return lineasControl;
	}
}





char ** j(char * etiqueta1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	//~ printf("inicio del salto incondicional %d", PC);
	//~ printf("buscando la etiqueta 
	PC = get_PC_etiqueta(etiqueta1, etiquetas, cantidadEtiquetas);
	//~ printf("fin del salto incondicional %d",PC);
	
	
	
	char **lineasControl = (char**)malloc(9*sizeof(char*));
	lineasControl[0] = "X";//RegDst        
	lineasControl[1] = "1";//Jump
	lineasControl[2] = "0";//Branch
	lineasControl[3] = "0";//MemRead
	lineasControl[4] = "X";//MemToReg
	lineasControl[5] = "110";//ALUOp
	lineasControl[6] = "0";//MemWrite
	lineasControl[7] = "0";//ALUSrc
	lineasControl[8] = "0";//RegWrite
	return lineasControl;
}

//la	$t0, var1
//copy RAM address of var1 (presumably a label defined in the program) into register $t0
void la(char * reg1, char * op3)
{
	printf("--------la %s %s\n",reg1, op3);
	int offset = 0;
	int largoNum=0;
	if(op3[0]!='(' )
	{
		while(op3[largoNum]!='(')
		{
			largoNum++;
		}
		char * tempo = calloc(sizeof(char),largoNum);
		strncpy(tempo,op3,largoNum);
		offset = atoi(tempo);
	}
	char * temp2= malloc(sizeof(char)*strlen(op3));
	 //~ = calloc(sizeof(char),strlen(op3);
	strcpy(temp2,op3);
	printf("--------la %s %d%s\n",reg1,offset, temp2); 
	//Se elimina el ($ 
	strncpy(temp2,&temp2[largoNum+2],strlen(temp2));
	temp2[strlen(temp2)-1]=0;
	
	
	
	//~ //POSIBLE ERROR, REVISAR BIEN
	//~ //Se elimina el ($ 
	//~ strncpy(op3,&op3[largoNum+2],strlen(op3));
	//~ op3[strlen(op3)-1]=0;
	
	printf("la setting offset = %d\n",offset);
	//importante
	//~ set_adress(reg1, get_adress(op3), offset );
	
	set_value(reg1, get_value(temp2));
	
	//~ print_register();
	//~ getchar();
	PC +=1;
}

//lw $s1,100($s2) => $s1 = Memory[$s2+100]
//or in other words
//lw	$t2, ($t0)
//load word at RAM address contained in $t0 into $t2
void lw(char * reg1, char * op3)
{
	printf("--------lw %s %s\n",reg1, op3); 
	//inicializando las variables
	int offset = 0;
	int largoNum=0;
	//Se verifica que el primer caracter no sea un espacio, de ser asI
	//Es que posee offset
	if(op3[0]!='(' )
	{
		while(op3[largoNum]!='(')
		{
			largoNum++;
		}
		char * tempo = calloc(sizeof(char),largoNum);
		strncpy(tempo,op3,largoNum);
		//Se obtiene el valor del offset
		offset = atoi(tempo);
	}
	
	char * temp2= malloc(sizeof(char)*strlen(op3));
	 //~ = calloc(sizeof(char),strlen(op3);
	strcpy(temp2,op3);
	
	//Se elimina el ($ 
	strncpy(temp2,&temp2[largoNum+2],strlen(temp2));
	temp2[strlen(temp2)-1]=0;
	printf("--------lw %s %d%s\n",reg1,offset, temp2);
	
	//~ //Se elimina el ($ 
	//~ strncpy(op3,&op3[largoNum+2],strlen(op3));
	//~ op3[strlen(op3)-1]=0;
	
	set_value(reg1, *(get_adress(temp2) + (offset/4)));
	
	//~ getchar();
	//Se da paso a la ejecuciOn de la siguiente linea de cOdigo
	PC +=1;
}


//sw $s1,100($s2) => Memory[$s2+100] = $s1
//or in other words
//sw	$t2, ($t0)
//store word in register $t2 into RAM at address contained in $t0
void sw(char * reg1, char * op3)
{
	//inicializando las variables
	int offset = 0;
	int largoNum=0;
	//Se verifica que el primer caracter no sea un espacio, de ser asI
	//Es que posee offset
	printf("--------sw %s %s\n",reg1, op3);
	if(op3[0]!='(' )
	{
		while(op3[largoNum]!='(')
		{
			largoNum++;
		}
		char * tempo = calloc(sizeof(char),largoNum);
		strncpy(tempo,op3,largoNum);
		//Se obtiene el valor del offset
		offset = atoi(tempo);
	}
	char * temp2= calloc(sizeof(char),strlen(op3));
	 //~ = calloc(sizeof(char),strlen(op3);
	strcpy(temp2,op3);
	
	//Se elimina el ($ 
	strncpy(temp2,&temp2[largoNum+2],strlen(temp2));
	temp2[strlen(temp2)-1]=0;
	printf("--------sw %s %d%s\n",reg1,offset, temp2); 
	
	printf("adress -%s: %p, offset |%d\n", temp2, get_adress(temp2), offset);
	printf("adress + offset/4 %p = |%d\n", (get_adress(temp2) + offset/4), *(get_adress(temp2) + offset/4) );
	//~ int * tempAdress = calloc(sizeof(int),1);
	//~ printf("asd1");
	//~ tempAdress =  get_adress(temp2) + offset/4;
	//~ printf("asd2");
	//~ *tempAdress = *(get_adress(reg1));
	//~ printf("asd3");
	//~ getchar();
	//~ printf("me cai? %d\n",PC);
	int offsetOPT = offset/4;
	printf("antes de caerme\n");
	printf("'%s', '%s'\n",reg1,temp2);
	printf("'%p', '%p'\n",get_adress(temp2),get_adress(temp2)+offsetOPT);
	printf("'%d', '%d'\n",*get_adress(temp2),*(get_adress(temp2)+offsetOPT));
	//~ print_register();	
	*(get_adress(temp2) + offsetOPT) = *(get_adress(reg1));
	printf("despues de caerme\n");
	
	
	
	
	
	//Se da paso a la ejecuciOn de la siguiente linea de cOdigo
	PC +=1;
}


//Salto incondicional
//JUMP AND LINK
//para llamadas de procedimientos,
//Guarda en $ra = PC + 4 (1 en nuestro caso, leer documentacion)
//Y Salta a linea de cOdigo de la etiqueta
void jal(char * etiqueta1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	//Se asigna el valor de retorno en el registro $ra
	set_value("ra", PC+1);
	//Se asigna el valor del PC de acuerdo a la etiqueta o registro
	// a la cual se realiza el salto incondicional
	PC = get_PC_etiqueta(etiqueta1, etiquetas, cantidadEtiquetas);
}


//Salto incondicional
//JUMP REGISTER
//For switch, es el retorno de un procedimiento
//Salta a linea de cOdigo de la etiqueta (gnrl en $ra)
void jr(char * reg1, etiqueta * etiquetas, int cantidadEtiquetas)
{
	//~ printf("inicio del salto incondicional %d", PC);
	//~ printf("buscando la etiqueta 
	PC = get_value(reg1);
	//~ printf("fin del salto incondicional %d",PC);
	
}
