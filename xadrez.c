#include <stdio.h>


int main (){


int i, numero, peca;
   
i = 1 ;

printf("digite qual peça voce quer mover\n");
printf("[1] torre\n");
printf("[2] bispo\n");
printf("[3] rainha\n");
scanf("%d", &peca);



switch (peca)
{
case 1 :
printf ("Torre: \n" ); 

for (i = 1; i <= 5; i++)
{
  printf ("Direita\n" ); 
}
printf("Torre moveu-se 5 vezes para direita\n");
    break;
case 2 :
  printf("Bispo\n");

  while (i <= 5)

  {
     printf("Cima, direita\n");
     i++;
  }
  printf("O bispo se moveu 5 vezes na diagonal\n");
  break;
case 3 :

printf("Rainha: \n");
do
{
 
printf("Esquerda\n");
i++;
} while (i <= 8);

printf("A rainha moveu-se 8 vezes para esqueda \n");
  break;
  default:
printf("opçao invalida\n");
    break;
}






}