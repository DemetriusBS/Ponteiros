#include <stdio.h>
#include<stdlib.h>

int main() {

	char a = 'Z', *pa; //Declarando a variável e o ponteiro do tipo char
	int b = 0, * pb; //Declarando a variável e o ponteiro do tipo int
	float c = 00.00, * pc; //Declarando a variável e o ponteiro do tipo float

	pa = &a; //Associando a variável a ao ponteiro de a
	pb = &b; //Associando a variável b ao ponteiro de b
	pc = &c; //Associando a variável c ao ponteiro de c

	printf("Valores contidos nas variaveis antes da modificacao: \n\n");

	printf("Valor na variavel a antes da modificacao: %c \n", *pa); /*Exibindo o valor
       contido em a antes da modificação indireta usando ponteiro.
	*/
	printf("Valor na variavel b antes da modificacao: %d \n", *pb); /*Exibindo o valor
       contido em b antes da modificação indireta usando ponteiro.
	*/
	printf("Valor na variavel c antes da modificacao: %.2f \n", *pc); /*Exibindo o valor
       contido em c antes da modificação indireta usando ponteiro.
	*/

	*pa = 'D';//*Modificando a variável a indiretamente utilizando ponteiro
	*pb = 93;//*Modificando a variável b indiretamente utilizando ponteiro
	*pc = 66.93;//*Modificando a variável c indiretamente utilizando ponteiro

	printf("\n\n"); //Quebra de linha

	printf("Valores contidos nas variaveis apos a modificacao: \n\n");

	printf("Valor na variavel a depois da modificacao: %c \n", *pa); /*Exibição do 
	   valor de a após a modificação indireta utilizando o ponteiro.
	*/
	printf("Valor na variavel b depois da modificacao: %d \n", *pb); /*Exibição do
	   valor de b após a modificação indireta utilizando o ponteiro.
	*/
	printf("Valor na variavel c depois da modificacao: %.2f \n", *pc); /*Exibição do
	   valor de c após a modificação indireta utilizando o ponteiro.
	*/

	system("pause");
	return 0;
}