#include <stdio.h>

int main(void){

/* Variáveis */

char artigo [256];
int codigo;
float preco;

/* Inputs e Outputs */

printf("100 - Cachorro Quente \n");
printf("101 - Hambúrguer \n");
printf("102 - Cheesebúrguer \n");
printf("103 - Omolete \n");
printf("104 - Francesinha \n\n");

printf("Insira o código. \n");
scanf("%d", &codigo);

/* Condições */

switch (codigo)
{
case 100:
    preco = 2.50;
    printf("\n\n\n");
    printf("Artigo escolhido: Cachorro Quente. \n");
    printf("Total a pagar: %.2f € \n", preco);
    break;
case 101:
    preco = 3.50;
    printf("\n\n\n");
    printf("Artigo escolhido: Hambúrguer. \n");
    printf("Total a pagar: %.2f € \n", preco);
    break;
case 102:
    preco = 4.00;
    printf("\n\n\n");
    printf("Artigo escolhido: Cheesebúrguer. \n");
    printf("Total a pagar: %.2f € \n", preco);
    break;    
case 103:
    preco = 3.75;
    printf("\n\n\n");
    printf("Artigo escolhido: Omolete. \n");
    printf("Total a pagar: %.2f € \n", preco);
    break;
case 104:
    preco = 7.50;
    printf("\n\n\n");
    printf("Artigo escolhido: Francesinha. \n");
    printf("Total a pagar: %.2f € \n", preco);
    break;    
default:
    printf("\n\n\n");
    printf("Código não existente. \n");
    break;
}
}