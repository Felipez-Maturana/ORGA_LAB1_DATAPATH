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
	int * zero;
	int * at;
	int * v0;
	int * v1;
	int * a0;
	int * a1;
	int * a2;
	int * a3;
	int * t0;
	int * t1;
	int * t2;
	int * t3;
	int * t4;
	int * t5;
	int * t6;
	int * t7;
	int * s0;
	int * s1;
	int * s2;
	int * s3;
	int * s4;
	int * s5;
	int * s6;
	int * s7;
	int * t8;
	int * t9;
	int * k0;
	int * k1;
	int * gp;
	int * sp;
	int * fp;
	int * ra;
  int jump;
  int jal;
  int jr;
  int RegWrite;
  int ALUSrc;
	int ALUOp;

  int RegDst;

	int * RegRegDst;

  int Branch;
  int MemWrite;
  int MemRead;
  int MemToReg;
  int PCsrc;
	int * rs;
	int * rt;
	int * rd;

	char * RegRS;
	char * RegRT;
	char * RegRD;
	char * INM;
	char * LABEL;


} buffer;

typedef struct c
{
	char * IF;
	int PCIF;
	char * IFRegRS;
	char * IFRegRT;
	char * IFRegRD;
	char * IFINM;
	char * IFLABEL;
	lista IFinstruccion;

	char * ID;
	int PCID;
	char * IDRegRS;
	char * IDRegRT;
	char * IDRegRD;
	char * IDINM;
	char * IDLABEL;
	lista IDinstruccion;

	char * EX;
	int PCEX;
	char * EXRegRS;
	char * EXRegRT;
	char * EXRegRD;
	char * EXINM;
	char * EXLABEL;
	lista EXinstruccion;

	char * MEM;
	int PCMEM;
	char * MEMRegRS;
	char * MEMRegRT;
	char * MEMRegRD;
	char * MEMINM;
	char * MEMLABEL;
	lista MEMinstruccion;

	char * WB;
	int PCWB;
	lista WBinstruccion;

	char * WBRegRS;
	char * WBRegRT;
	char * WBRegRD;
	char * WBINM;
	char * WBLABEL;


} ccycle;

#endif
