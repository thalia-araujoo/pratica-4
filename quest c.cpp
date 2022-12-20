#include <stdio.h>
#include <locale.h>

//Escreva uma função quer recebe um numero com parametro e retorma o fatorial desse numero
//qnd se trabalha com fatorial é bom ser inteiro no caso, int.
//criação da função

int fatorial(int n){
	int fat = 1;   //vou usar multiplicação entt começo com um fat = 1
	for(int i = n; i>1; i--){
		fat = fat * i;  //fatorial é decrecente entt vai ser fatorial atual  vezes o proximo q é usado a variavcel i.
	}
	return fat;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
//começo criando a variavel  para guardar esse numero, e mais uma para guardar o resultado.
	int num, resultado;

	printf("Informe um número:\n ");
	scanf("%d", &num);
//pego o resultado q guarda a função chamada com a saida do numero q é informado	
	resultado = fatorial(num);
	
	printf("O fatorial é %d", resultado);
	
	return 0;
}
