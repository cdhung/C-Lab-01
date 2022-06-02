#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int N;
	printf("Nhap vao so nguyen N = ");
	scanf("%d",&N);
	
	if(N == 0)
		printf("N = 0");
	else if(N > 0)
		printf("%d la so nguyen duong",N);
		else
			printf("%d la so nguyen am",N);
	return 0;
}
