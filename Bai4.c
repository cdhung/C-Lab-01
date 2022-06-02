#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float h, c, S;
	printf("Nhap chieu cao h va day c:\n");
	scanf("%f%f",&h,&c);
	
	S = h*c/2;
	printf("Dien tich tam giac = %.1f",S);
	return 0;
}
