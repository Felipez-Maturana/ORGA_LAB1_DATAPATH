#include "cons.h"

int get_value(char * nameReg)
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
		return -1;
	}
}

void set_value(char * nameReg, int value)
{
	if (strcmp(nameReg,"zero") == 0)
	{
		 zero= value;		
	}
	else if (strcmp(nameReg,"at") == 0)
	{
		 at= value;
	}
	else if (strcmp(nameReg,"v0") == 0)
	{
		 v0= value;
	}
	else if (strcmp(nameReg,"v1") == 0)
	{
		 v1= value;
	}
	else if (strcmp(nameReg,"a0") == 0)
	{
		 a0= value;
	}
	else if (strcmp(nameReg,"a1") == 0)
	{
		 a1= value;
	}
	else if (strcmp(nameReg,"a2") == 0)
	{
		 a2= value;
	}
	else if (strcmp(nameReg,"a3") == 0)
	{
		 a3= value;
	}
	else if (strcmp(nameReg,"t0") == 0)
	{
		 t0= value;
	}
	else if (strcmp(nameReg,"t1") == 0)
	{
		 t1= value;
	}
	else if (strcmp(nameReg,"t2") == 0)
	{
		 t2= value;
	}
	else if (strcmp(nameReg,"t3") == 0)
	{
		 t3= value;
	}
	else if (strcmp(nameReg,"t4") == 0)
	{
		 t4= value;
	}
	else if (strcmp(nameReg,"t5") == 0)
	{
		 t5= value;
	}
	else if (strcmp(nameReg,"t6") == 0)
	{
		 t6= value;
	}
	else if (strcmp(nameReg,"s0") == 0)
	{
		 s0= value;
	}else if (strcmp(nameReg,"s1") == 0)
	{
		 s1= value;
	}else if (strcmp(nameReg,"s2") == 0)
	{
		 s2= value;
	}else if (strcmp(nameReg,"s3") == 0)
	{
		 s3= value;
	}else if (strcmp(nameReg,"s4") == 0)
	{
		 s4= value;
	}else if (strcmp(nameReg,"s5") == 0)
	{
		 s5= value;
	}else if (strcmp(nameReg,"s6") == 0)
	{
		 s6= value;
	}else if (strcmp(nameReg,"s7") == 0)
	{
		 s7= value;
	}
	else if (strcmp(nameReg,"t8") == 0)
	{
		 t8= value;
	}
	else if (strcmp(nameReg,"t9") == 0)
	{
		 t9= value;
	}
	else if (strcmp(nameReg,"k0") == 0)
	{
		 k0= value;
	}
	else if (strcmp(nameReg,"k1") == 0)
	{
		 k1= value;
	}
	else if (strcmp(nameReg,"gp") == 0)
	{
		 gp= value;
	}
	else if (strcmp(nameReg,"sp") == 0)
	{
		 sp= value;
	}
	else if (strcmp(nameReg,"fp") == 0)
	{
		 fp= value;
	}
	else if (strcmp(nameReg,"ra") == 0)
	{
		 ra= value;
	}
	else
	{
		printf("ERROR, registro %s no encontrado!",nameReg);
		exit(1);
	}
}


void addi(char * reg1, char * reg2, int value)
{
	int res = get_value(reg2) + value;
	set_value(reg1,res);
	PC+=1;
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

void mul(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) * get_value(reg3);
	set_value(reg1,res);
	PC+=1;
}

void divi(char * reg1, char * reg2, char * reg3)
{
	int res = get_value(reg2) / get_value(reg3);
	set_value(reg1,res);
	PC+=1;
}


