#include <stdio.h>
#include <math.h>
/* André Cavalcante de Lima
 Criar uma rotina de entrada que aceite somente um valor positivo.

*/

void main(){
    int i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i",&i);

    while(i<=0){
        printf("Erro !, apenas numero positivos maiores que 0 \n digite novamente: ");
    scanf("%i",&i);

    }

    printf("\nobrigado e vai com deus\n");

}