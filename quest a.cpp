#include <stdio.h>
#include <locale.h>

//função
int somar(int n1, int n2){
	return n1 + n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int resultado, x, y;
	
	printf("Informe o primeiro número:\n ");
	scanf("%d", &x);
	
	printf("Informe o segundo número:\n ");
	scanf("%d", &y);
	
	resultado = somar(x,y);
	
	printf("O resultado da soma é: %d", resultado);
	
	
	return 0;
}
