#include <stdio.h>
/* André Cavalcante de Lima
31. Exibir os vinte primeiros valores da série de Bergamaschi.
 A série: 1, 1, 1, 3, 5, 9, 17, ...

*/

int main()
{
      float a=-1, b=1, c= 1;

      printf("Sequencia dos 20 primeiro do Bergamaschi e: \n");
  
      for(int i=0 ; i<20 ; i++){  
         int r = a+b+c;
          c=b;
          b=a;
          a=r;
                
     printf("%i\n",r);
      }  
    
   return 0;
}