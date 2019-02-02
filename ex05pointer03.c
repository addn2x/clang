/*
 * */
 
 #include <stdio.h>
 
int main() {
	
	/* pointer to constant object */
	int variable = 5;
	int *const ptv = &variable; /* address can be set through initialization only */
	printf("value = %d\n", *ptv);
	*ptv = 22; /* OK */
	printf("value = %d\n", *ptv);
	/* ++pe01;  pe += 1 *//* ERROR */
	

	/* constant pointers or 
		read-only pointers */	
	int a = 2;
	int const b = 100;
	int const *ptb;

	/*	int const b = 100, *ptb;	*/
	
	ptb = &b; /* OK */
	a = 2 * *ptb; /* OK */	
	/* *ptb = 77; */ /* Error */

	int var = 11;
	int *ptvar = &var;
	int const varc = 13;
	int const *ptc;

	*ptvar = 77; /* OK */
	ptc = ptvar; /* OK: implicitly converts ptr from 
					"pointer to int" to
					"pointer to const int" */
	
	/* *ptc = 32; */ /* Error: read-only pointer */
	/* ptvar = &varc; */ /* Error: can't implicitly convert 
					from "pointer to int"
					to "pointer to const int" */
	ptvar = (int *)&varc; /* OK: Explicit convert */
	/* *ptvar = 22; */ /* possible run-time error, 
					if a compiler has placed the constant object 
					(varc) in a read-only section in memory */

	return 0;
}
