/*
 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 int main() {
	 
	 int a = 3;
	 float b = 4.3;
	 void *pa;
	 	 
	 /* void pointers 
	  * can point to any address 
	  * but cannot access the same 
	  * in order to access the content 
	  * conversion must be applied */
	  
	 pa = &a;	 
	 /* printf("a = %d\n", *pa); */  /* error: invalid use of void expression */ 
	 printf("a = %d\n", *(int *)pa);	
	  
	 pa = &b;
	 printf("b = %f\n", *(float *)pa);
	 
	 
	 
	 unsigned short *pb = (short *) 1000; /* unsigned short *pb = (short *) &tmp; */
	 pb = pb + 1;
	 printf("New Value of pb : %u \n",pb);
	 
	 unsigned int *pc = (int *) 2000;
	 pc = pc + 1;
	 printf("New Value of pc : %u \n", pc);
	 
	 float *pd = (float *) 3000;
	 pd = pd + 1;
	 printf("New Value of pd : %d \n",pd);
	 
	 double *pe = (double *) 4000;
	 pe = pe + 1;
	 printf("New Value of pe : %d \n",pe);
	 
	 return 0;
 }
