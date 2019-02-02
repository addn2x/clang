/*
 * switch, case, break
 */
 
 #include <stdio.h>
 
 int main() {
	 
	 short a = 4;
	 
	 /*
	 switch (a) {
		 case 1: printf("one \n");
		 case 2: printf("two \n");
		 case 3: printf("three \n");
		 case 4: printf("four \n");
		 case 5: printf("five \n");
		 default : printf("larger than five \n");
	 }
	 */
	 
	 switch (a) {
		 case 1: {
			 printf("one \n");
		 }
		 break; /* break statement only within loop or switch */
		 case 2: {
			 printf("two \n");
		 }
		 break;
		 case 3: {
			 printf("three \n");
		 }
		 break;
		 case 4: {
			 printf("four \n");
		 }
		 break;
		 case 5: {
			 printf("five \n");
		 }
		 break;
		 default : {
			 printf("larger than five \n");
		 }
		 break; /* not an error, but not needed for last case */
	 }
	 
	 return 0;
 } 
