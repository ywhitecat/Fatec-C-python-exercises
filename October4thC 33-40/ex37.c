/* André Cavalcante de Lima
37. Armazenar um máximo de 20 valores em um vetor. 
A quantidade de valores a serem armazenados será escolhida pelo usuário. 
Enviar mensagem de erro, caso a quantidade de valores escolhida esteja fora da faixa possível 
Solicitar a quantidade novamente. 
Após a digitação dos valores, criar uma rotina de consulta, 
onde o usuário digita um número e o programa exibe em qual posição do vetor este número está localizado. 
Se o número não for encontrado, enviar mensagem “Valor não encontrado!”. 
Perguntar ao usuário se deseja ou não fazer uma nova consulta, 
consistir a resposta e encerrar o programa em caso negativo.


*/
#include <stdio.h>

int main()
{
    int arraylimit;
    char repete;
    int conf;
    int position;
    int index;

	printf ("Digite o numero de posicoes do vetor: \n");
	scanf ("%i", &arraylimit);
	while ((arraylimit<1) || (arraylimit>20))
		{
			printf ("\nInvalido! Insira um numero de posicoes positivo e menor ou igual a 20:\n");
    		scanf ("%i", &arraylimit);
		}
  
  	int numbers[arraylimit];
  	conf=0;
  	repete='S';	//   ####GARANTE A PASSAGEM PELO PRIMEIRO CICLO!!!####
  // Looping para popular o vetor
  printf("\n\n Agora preencha as %i posicoes do vetor:\n", arraylimit);
  
  for(int i=0; i<arraylimit; i++)
 	 {
    scanf("%i", &numbers[i]);
	 }
 	
  // Looping para exibir os valores do vetor
  printf("\n\nOs numeros digitados foram:\n");
  for(int i=0; i<arraylimit; i++)
  {
      printf("%i; ", numbers[i]);
  }
while (repete=='S') 
{
	printf("\n\nEm qual indice se encontra o numero: ");
	scanf ("%i", &index);
  for(int i=0; i<arraylimit; i++)
  {
      if (numbers[i]==index)
      {
      	position=i;    	//A contagem se inicia em 0!!!
      	conf=1;
      	break;      	
	  }
  }
  	if (conf==1)
  	{
  		printf("\n\nO numero %d se encontra na posicao %i do vetor\n", index, position);
		repete='N';
	}
	else
	{
		printf("\n\nO numero %d nao se encontra no vetor!", index); 
		printf("\n\nDeseja encontrar um outro valor? (S-Sim) (N-Nao)\n"); 
		scanf ("%s", &repete);
		while (repete!='S' && repete!='N')
		{
			printf ("\nInvalido!\nDigite (S-Sim) (N-Nao): ");
			scanf ("%s", &repete);	
		}
	}  
}

}