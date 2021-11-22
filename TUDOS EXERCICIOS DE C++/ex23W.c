#include <stdio.h>
#include <math.h>
/* André Cavalcante de Lima
23. Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. 
Caso contrário solicitar novamente apenas o segundo valor.

*/

void main(){
    int a,b;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%i",&a);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%i",&b);
while (a>=b){
    printf("O segundo deve ser maior que o primeiro ! \n Digite novamente o segundo valor: ");
    scanf("%i",&b);
}
printf("\nObrigado e vai com deus\n");

}