/* André Cavalcante de Lima
30. Exibir os trinta primeiros valores da série de Fibonacci. 
A série: 1, 1, 2, 3, 5, 8, ...

*/

int main()
{
      int a=0, b=1,sum=0;

      printf("sequencia dos 30 primeiro do fibonacci e: \n1\n");
  
      for(int i=0 ; i<29 ; i++){  
        sum=a + b;
        a=b;
        b=sum;       
                
     printf("%i\n",sum);
      }  
    
   return 0;
}