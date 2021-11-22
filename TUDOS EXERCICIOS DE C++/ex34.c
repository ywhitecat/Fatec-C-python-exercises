/* André Cavalcante de Lima
34. Armazenar dez valores na memória do computador.
Após a digitação dos valores, criar uma rotina para ler os valores e achar e exibir o maior deles.

*/
int main(){
    int numeros[10];

    printf("Digite 10 numeros ai: \n ");
    for(int i=0; i<=10; i++){
        scanf("%i", &numeros[i]);

    }
        int largest;
    for (int i=1; i<largest; i++)
    {
        if(numeros[0]< numeros[i]){
        
            numeros[0]=numeros[i];
        }
        printf("o maior numero = %i",largest);
    }


}
