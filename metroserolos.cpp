#include<stdio.h>
#define QM 50
int main (){
	int metros, restoDivisao, valorDivisao;
	printf("Quantos metros quer? ");
	scanf("%d", &metros);
	valorDivisao = metros / QM;
	restoDivisao = metros % QM;
	printf("%d rolo", valorDivisao);
	printf(" e %d metros", restoDivisao);
	
	 
	 
}
