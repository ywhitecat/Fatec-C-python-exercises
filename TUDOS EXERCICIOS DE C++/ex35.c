/* André Cavalcante de Lima
35. Armazenar vinte valores em um vetor. 
Após a digitação,
 entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor 
 e armazenar o resultado no próprio vetor, na respectiva posição.

*/
int main(int argc, char const *argv[])
{
    // Declarando o vetor com 20 posições
  int n[20]; 
  int c;
    // Looping para popular o vetor
  printf("Digite os 20 numeros:\n");
  for(int i=0; i<20; i++){
      scanf("%i", &n[i]);
}
  // Solicita entrada da constante de multiplicação 
  printf("Digite a consante de multiplicacao: ");
  scanf("%i", &c); 

  // Looping para multiplicar os valores do vetor
  printf("Os numeros digitados foram: ");
  for(int i=0; i<20; i++){
      n[i]= n[i]*c; 
      printf("%i \n", n[i]);
     
  }




    return 0;
}