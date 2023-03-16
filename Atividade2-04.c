#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*scanf(”%d”, &idade); //Número inteiro
scanf(”%f”, &preco); //Número decimal
scanf(”%c”, &letra); //Número char
scanf("%s", &nome); //Textos (Strings)*/

main(void){
	char frase[50];
	printf("escreva uma frase: %s",&frase);
	fgets(frase,50,stdin);
	strlen("%s",&frase);
	
}