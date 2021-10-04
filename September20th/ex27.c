/* André Cavalcante de Lima
 Entrar via teclado com um valor (X) qualquer. 
 Travar a digitação, no sentido de aceitar somente valores positivos. 
 Solicitar o intervalo que o programa que deverá calcular a tabuada do valor digitado, 
 sendo que o segundo valor (B), deverá ser maior que o primeiro (A), 
 caso contrário, digitar novamente somente o segundo. 
 Após a validação dos dados,
exibir a tabuada do valor digitado,
no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.

*/
int main(int argc, char const *argv[])
{
    int x;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &x);

    while(x<=0){
    printf("Somente numero postivos\n Digite novamente: ");
    scanf("%i", &x);

    }

    int interval;
    int interval2;

    printf("Qual o inicio do intervalo de tabuada deseja calcular para %i ?  ",x);
    scanf("%i", &interval);
    printf("Qual o final do intervalo de tabuada deseja calcular para %i ?  ",x);
    scanf("%i", &interval2);

    while(interval>interval2){
        printf("O intervalo final deve ser maior que o inicial\n\n Digite novamente: ");
        scanf("%i", &interval2);
    }

    for(int i=interval; i<=interval2;i++){
        printf("%i x %i = %i\n",x,i,x*i);
    }

    return 0;
}
