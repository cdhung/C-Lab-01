#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Tinh dien tich chu vi hinh tron
int main() {
	float R, S, P;
	float Pi = 3.14;
	
	printf("Nhap ban kinh R = ");
	scanf("%f", &R);
	
	S = Pi*pow(R,2);
	P = Pi*R*2;
	
	printf("Dien tich = %.1f\n",S);
	printf("Chu vi = %.1f",P);
	return 0;
}
