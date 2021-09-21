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
    while (1){
    for(int i=1; i<=10; i++){
        printf("%i x %i = %i \n",i,x,x*i);

    }
    printf("\n Pressione enter para a proxima tabuada\n\n");
    getch();
    x++;
    if (x ==21){
        printf("Somente ate a tabuada do 20\n Obrigado por usar\n");
        break;
    }
    }
    return 0;
}
