#include <stdio.h>
#include <math.h>

/* André Cavalcante de Lima
25. Exibir a tabuada do número cinco no intervalo de um a dez

*/

void main() {

    int i=5;

    for (int number=1; number<=10;number++) {
        printf("\n%i x %i = %i\n",i,number,number*i);
    }
}