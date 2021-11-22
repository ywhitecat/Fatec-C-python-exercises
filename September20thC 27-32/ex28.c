#include <stdio.h>
#include <math.h>
#include <conio.h>
//using namespace std;

/* André Cavalcante de Lima
28. Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez.
 Entre as tabuadas, solicitar que o usuário pressione uma tecla.


*/
int main(int argc, char const *argv[])
{
    int x=1;
    printf("Pressione enter para a primeira tabuada\n");
    while (1){
        getch();
    for(int i=1; i<=10; i++){
        printf("%i x %i = %i \n",i,x,x*i);

    }
    if (x>=20){ //perfumaria
        printf("\n");
    }
    else{
        printf("\n Pressione enter para a proxima tabuada\n\n");

    }
    x++;
    if (x ==21){
        printf("Somente ate a tabuada do 20 meu bem\n Obrigado por usar\n");
        break;
    }
    }
    return 0;
}
