/* André Cavalcante de Lima
35. Armazenar vinte valores em um vetor. 
Após a digitação,
 entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor 
 e armazenar o resultado no próprio vetor, na respectiva posição.

*/
int main()
{

  int number[20]; 
  int constant;
 
  printf("Digite os 20 numeros:\n");
  for(int i=0; i<20; i++){
      scanf("%i", &number[i]);
}

  printf("Digite a consante de multiplicacao: ");
  scanf("%i", &constant); 

 
  printf("Os numeros multiplicados pela constante sao: ");
  for(int i=0; i<20; i++){
      number[i]= number[i]*constant; 
      printf("%i \n", number[i]);
     
  }

}