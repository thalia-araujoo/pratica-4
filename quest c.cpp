#include <stdio.h>
#include <locale.h>

//Escreva uma fun��o quer recebe um numero com parametro e retorma o fatorial desse numero
//qnd se trabalha com fatorial � bom ser inteiro no caso, int.
//cria��o da fun��o

int fatorial(int n){
	int fat = 1;   //vou usar multiplica��o entt come�o com um fat = 1
	for(int i = n; i>1; i--){
		fat = fat * i;  //fatorial � decrecente entt vai ser fatorial atual  vezes o proximo q � usado a variavcel i.
	}
	return fat;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
//come�o criando a variavel  para guardar esse numero, e mais uma para guardar o resultado.
	int num, resultado;

	printf("Informe um n�mero:\n ");
	scanf("%d", &num);
//pego o resultado q guarda a fun��o chamada com a saida do numero q � informado	
	resultado = fatorial(num);
	
	printf("O fatorial � %d", resultado);
	
	return 0;
}
