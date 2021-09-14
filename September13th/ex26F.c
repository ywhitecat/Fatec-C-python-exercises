#include <stdio.h>
#include <math.h>

/* André Cavalcante de Lima
26. Entrar via teclado com um valor qualquer.
Travar a digitação, no sentido de aceitar somente valores positivos. 
Após a digitação, exibir a tabuada do valor solicitado, no intervalo de um a dez

*/
void main() {

    int a;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i",&a);

    while(a<=0){
        printf("Erro !, apenas numero positivos maiores que 0 \n digite novamente: ");
    scanf("%i",&a);

    }
    for (int i=1 ; i <=10 ; i++)
    {
        printf("\n%i x %i = %i\n",a,i,a*i);
    }
    
}