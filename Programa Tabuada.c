#include<stdio.h> // inclusão de biblioteca//
main() // função principal //
{
int n,numero; // declaração de variáveis//
system("cls");system("title tabuada");system("color 2b"); //colocando titulo e alterando a cor de fundo e da fonte padrão.//
printf("Qual tabuada deseja consultar?\n\n"); // imprime em tela a pergunta .//
scanf("%d",&numero); // captura o valor digitado.//
printf("\n");
n = 1; //atribui um valor inicial para n.//
while (n<=10) //contador
{
printf("\t%d x %d = %d\n",numero,n,numero*n); // imprime em tela a tabuada.//
n = n + 1; // incremento para n.//
}
printf("\n");
printf("programa criado por: Henrique Augusto");
putchar('\n');
system("PAUSE");
return 0;
}
