#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float t, USD, VND;
	
	printf("Nhap USD = ");
	scanf("%f",&USD);
	printf("Nhap ty gia VND/USD = ");
	scanf("%f",&t);
	
	VND = USD * t; 
	printf("%.2f USD = %.2f VND", USD, VND);
	return 0;
}
