/*
 * 
 * 
 */
 #include <stdio.h>
 #include <limits.h> /* INT_MAX / INT_MIN */
 int main() {
	
	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;
	
	float e = 1.1231231;
	double f = 1.1231231;
	long double g = 1.1231231;
	
	
	printf("short %d, int %d, long %d, long long %d\n\n", 
		sizeof(a), 
		sizeof(b), 
		sizeof(c), 
		sizeof(d));
	
	printf("size of: float %d, double %d, long double %d\n", 
		sizeof(e),
		sizeof(f),
		sizeof(g));
	
	
	return 0;
}
