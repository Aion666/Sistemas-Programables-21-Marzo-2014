/*	Sistemas programables
	Alumno: Santos Gonzalez Miguel Angel
	7-8 am
*/

#include <stdio.h>
#include <conio.h>
main(){
	double f1=1, f2=1, f;
	int n, cont;
	printf("Dame el valor n: ");
	scanf("%d",&n);
	
	for(cont=1; cont<=n; ++cont){
		if(cont<3){ 
			f=1;
		printf("\nF%-3ld= %.0Lf", cont, f); }
		else{
			f= f2+f1;
			printf("\nF%-3ld= %.0f + %.0f= %.0f", cont, f2, f1, f);
			f1=f2;
			f2=f; 
		}
		
	}
	getch();
} 
