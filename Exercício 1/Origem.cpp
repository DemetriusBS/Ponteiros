#include <stdio.h>
#include<stdlib.h>

int main() {

	char a = 'Z', *pa; //Declarando a vari�vel e o ponteiro do tipo char
	int b = 0, * pb; //Declarando a vari�vel e o ponteiro do tipo int
	float c = 00.00, * pc; //Declarando a vari�vel e o ponteiro do tipo float

	pa = &a; //Associando a vari�vel a ao ponteiro de a
	pb = &b; //Associando a vari�vel b ao ponteiro de b
	pc = &c; //Associando a vari�vel c ao ponteiro de c

	printf("Valores contidos nas variaveis antes da modificacao: \n\n");

	printf("Valor na variavel a antes da modificacao: %c \n", *pa); /*Exibindo o valor
       contido em a antes da modifica��o indireta usando ponteiro.
	*/
	printf("Valor na variavel b antes da modificacao: %d \n", *pb); /*Exibindo o valor
       contido em b antes da modifica��o indireta usando ponteiro.
	*/
	printf("Valor na variavel c antes da modificacao: %.2f \n", *pc); /*Exibindo o valor
       contido em c antes da modifica��o indireta usando ponteiro.
	*/

	*pa = 'D';//*Modificando a vari�vel a indiretamente utilizando ponteiro
	*pb = 93;//*Modificando a vari�vel b indiretamente utilizando ponteiro
	*pc = 66.93;//*Modificando a vari�vel c indiretamente utilizando ponteiro

	printf("\n\n"); //Quebra de linha

	printf("Valores contidos nas variaveis apos a modificacao: \n\n");

	printf("Valor na variavel a depois da modificacao: %c \n", *pa); /*Exibi��o do 
	   valor de a ap�s a modifica��o indireta utilizando o ponteiro.
	*/
	printf("Valor na variavel b depois da modificacao: %d \n", *pb); /*Exibi��o do
	   valor de b ap�s a modifica��o indireta utilizando o ponteiro.
	*/
	printf("Valor na variavel c depois da modificacao: %.2f \n", *pc); /*Exibi��o do
	   valor de c ap�s a modifica��o indireta utilizando o ponteiro.
	*/

	system("pause");
	return 0;
}