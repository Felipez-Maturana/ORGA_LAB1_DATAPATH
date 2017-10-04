#ifndef _STRUCTS_H_
#define _STRUCTS_H_
#define MAX_ARR 300
typedef struct s {
	char * cadena;
    int elemento;
    int siguiente;
} nodo;

typedef struct t {
    nodo arreglo[MAX_ARR];
    int linea;
    int cabeza;
    int fin;
} lista;


typedef struct e
{
	char * nombre;
	int linea;

} etiqueta;

typedef struct b
{
	char * nombre;
	char * instruccion;
  int PC;
  int zero;
  int at;
  int v0;
  int v1;
  int a0;
  int a1;
  int a2;
  int a3;
  int t0;
  int t1;
  int t2;
  int t3;
  int t4;
  int t5;
  int t6;
  int t7;
  int s0;
  int s1;
  int s2;
  int s3;
  int s4;
  int s5;
  int s6;
  int s7;
  int t8;
  int t9;
  int k0;
  int k1;
  int gp;
  int sp;
  int fp;
  int ra;
  int jump;
  int jal;
  int jr;
  int RegWrite;
  int ALUSrc;
  int ALUOp;
  int RegDst;
  int Branch;
  int MemWrite;
  int MemRead;
  int MemToReg;
  int PCsrc;
} buffer;

typedef struct c
{
	char * IF;
	char * ID;
	char * EX;
	char * MEM;
	char * WB;
} ccycle;

#endif
