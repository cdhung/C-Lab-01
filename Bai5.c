#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Tinh the tich hinh tru
int main() {
	float h, R, Pi = 3.14;
	float V;
	printf("Nhap chieu cao h = ");
	scanf("%f",&h);
	printf("Nhap ban kinh R = ");
	scanf("%f",&R);
	
	V = Pi*pow(R,2)*h;
	printf("The tich hinh tru = %.2f",V);
	return 0;
}
