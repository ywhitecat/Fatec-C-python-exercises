/* André Cavalcante de Lima
33. Armazenar dez números na memória do computador.
Exibir os valores na ordem inversa à da digitação.

*/




int main()
{

    int numbers[10];

  
  printf("Digite 10 numeros: ");
  for(int i=0; i<10; i++){
      scanf("%i", &numbers[i]);
  }

  
  printf("Os numeros digitados na ordem inversa foram:\n ");
  for(int i=10; i>=0; i--){
      printf("%i \n", numbers[i]);
  }
// ta saindo o 10 primeiro????

    return 0;
}