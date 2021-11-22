/* André Cavalcante de Lima
36. Armazenar vinte valores na memória. Após a digitação, 
entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor 
e armazenar o resultado em outro vetor, porém em posições equivalentes. 
Exibir os vetores na tela.

*/

int main()
{

  int number[20];
  int number1[20]; 
  int constant;

  printf("Digite os 20 numeros:\n");
  for(int i=0; i<20; i++){
      scanf("%i", &number[i]);
}

  printf("Digite a consante de multiplicacao: ");
  scanf("%i", &constant); 


  printf("Os numeros digitados foram: ");
  for(int i=0; i<20; i++){
      number1[i]= number[i]*constant; 
      printf("%i \n", number1[i]);
     
  }

}