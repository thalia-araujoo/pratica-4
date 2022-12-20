#include <stdio.h>
#include <locale.h>

//crie uma função que receba um numero e retorna verdeiro ou caso contrario retorne falso

//funçao
//char trabalha com caractere
char* isNegative(int n){
	if(n>=0){
		return "Falso";
	}
		return "Verdadeiro";
}

	
int main (){
	setlocale(LC_ALL, "Portuquese_Brazil");
	int num;
	printf("Digite um numero:\n ");
	scanf("%d", &num);
	
	char* b = isNegative(num);
	
	printf("O número é negative? %s", b);
	
	return 0;
}
