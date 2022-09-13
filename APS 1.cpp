/*
APS 1 – Programação Estruturada
Professor: Sérgio Assunção Monteiro
Nome da disciplina: Programação Estruturada
Código da Turma: 931
Nome do aluno: Mayena Aragão Sarlo
Matrícula: 202200057
unidade: Meier V
*/

/*
Questão 01  
Desenvolver um programa em C que faça:
1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
3. Retornar maior elemento do item 2;
4. Colocar a solução no GITHUB (https://github.com/ErickMarllon).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define val 10

void entrada_dados(int x[]);
int ehPar(int num);
int somar_numeros_pares_recursivo(int qtd, int x[]);
void maior_numero( int x);


//	1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
void entrada_dados(int x[]){
int i;
	for(i=0;i<val;i++){
	x[i]=rand()%100;
	printf("%d ",x[i]);
	}
}

// Função para saber se o número é par;
int ehPar(int num){
	if(num%2==0){
	  return 1;
	}
	return 0;
}

// 2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
int somar_numeros_pares_recursivo(int qtd, int x[]){
int r;
	if(qtd==0){
	return ehPar(x[0])?x[0]:0;
	}
r = ehPar(x[qtd])?x[qtd]:0;
return r+somar_numeros_pares_recursivo(qtd-1,x);
}



int maior;
		
 int main(){
		srand(time(NULL));
		int v1[val],v2[val],v3[val],v4[val],v5[val];
		int soma_par;
		int ehPar(int num);
		
			
		printf(" GERANDO NUMEROS INTEIROS DE FORMA ALEATORIA \n\n");
		entrada_dados(v1);
			printf("\n\n");
				entrada_dados(v2);
					printf("\n\n");
						entrada_dados(v3);
							printf("\n\n");
								entrada_dados(v4);
									printf("\n\n");
										entrada_dados(v5);
		printf("\n\n===================================================================\n\n");
	 
/* 2. Utilizar uma função recursiva para somar apenas os pares de cada vetor */
		printf("SOMANDO NUMEROS PARES DE CADA VETOR\n\n");
		
		soma_par = somar_numeros_pares_recursivo(val-1, v1);
			printf("\nA soma dos pares eh: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(val-1, v2);
			printf("\nA soma dos pares eh: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(val-1, v3);
			printf("\nA soma dos pares eh: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(val-1, v4);
			printf("\nA soma dos pares eh: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(val-1, v5);
			printf("\nA soma dos pares eh: %i\n",soma_par);
		maior_numero(soma_par);
		
		printf("\n\n===================================================================\n\n");
		
		
/* 3. Retornar o maior par entre os vetores */
		printf("\nO MAIOR ELEMENTO PAR EH: %d\n", maior);
		printf("\n\n===================================================================\n\n");
}


// 3. Retornar maior elemento par;
void	maior_numero( int x){
int qtd;

	if(maior < x){
	maior = x;
	}
}





