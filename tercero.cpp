/*	Sistemas programables
	Alumno: Santos Gonzalez Miguel Angel
	7-8 am
*/

#include <stdio.h>
int main (){
	int b;
	printf("introduzca un numero\n");
	scanf("%d",& b);
	for(int j=0;j<b;j++){
		for(int i=0;i<=j;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
