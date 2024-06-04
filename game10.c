#include <stdio.h>

int main(void){
	int N,D,A,botao=1,i;
	
	
	scanf("%d" ,&N);
	scanf("%d" ,&D);
	scanf("%d" ,&A);
	
	while(A != D){
			A ++;
			botao++;
			if(A == N){
				A = 1;
			}
	}

	
	printf("%d", botao);

	return 0;
	
}
