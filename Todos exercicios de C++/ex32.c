/* André Cavalcante de Lima
32. Calcular e exibir a soma dos “N” primeiros valores da seqüência abaixo. 
O valor “N” será digitado, deverá ser positivo, mas menor que cem. 
Caso o valor não satisfaça a restrição, enviar mensagem de erro e solicitar o valor novamente.
A seqüência: 2, 5, 10, 17, 26, ....


*/
int main(){
    int n,i,a=0;
    printf("Digite valor N, deve ser positivo menor que cem: ");
    scanf("%i",&n);

    while (n<=0 || n >=100)
    {
        printf("Erro!!, valor N dever ser positivo e menor que cem \n\n Digite novamente:");
        scanf("%i",&n);
    }
    for (i = i+2; i < n; i++);
    {
   

        printf("%i, ",i);

    }
    
    return 0;

}