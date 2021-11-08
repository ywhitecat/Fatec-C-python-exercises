/* André Cavalcante de Lima
33. Armazenar dez números na memória do computador.
Exibir os valores na ordem inversa à da digitação.

*/
int main(int argc, char const *argv[]){
    int numeros[10];

    printf("Digite 10 numeros ai: \n ");
    for(int i=0; i<=10; i++){
        scanf("%i", &numeros[i]);

    }
    printf("\nOs numeros digitados foram : \n\n");
    for(int i=10; i>=0; i--){

        printf("%i \n", numeros[i]);

    }
    return 0;
}