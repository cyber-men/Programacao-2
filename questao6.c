#include <stdio_ext.h>

/*Escreva uma função que receba 3 notas de	um	aluno e uma	 letra.	 Se	 a	
letra for A	a função retorna a média aritmética	das	notas do aluno,	se for P, 
a sua média ponderada (pesos: 5, 3 e 2)	e se for H, a sua média	
harmônica. */

int nota1, nota2, nota3;
char letra;
float resultado;

int result(int a, int b, int c, char carac);

int main(){
	printf("Digite as três notas: \n");
	scanf("%d %d %d" , &nota1, &nota2, &nota3);
	__fpurge(stdin); fflush(stdin);
	printf("Digite a letra correspondente: \n");
	scanf("%c" , &letra);
	resultado = result(nota1, nota2, nota3, letra);
	printf("O resultado final é: %.2f\n" , resultado);

	return 0;

} int result(int a, int b, int c, char carac){
	int aux = -1;	
	if (carac=='A' || carac=='a'){
		aux = a+b+c / 3;
	}if (carac=='P'|| carac=='p')
	{
		aux = (a*5 +a*3 +a*2) / (5+3+2); 
	}
	if (carac=='H'|| carac=='h')
	{
		aux = 3/ ((1/a) + (1/b) + (1/c));
	}
		return aux;
}