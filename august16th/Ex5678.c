#include <stdio.h>
#include <math.h>

/*
Nome: André Cavalcante de Lima 
5. Entrar via teclado com o valor de uma temperatura em graus Celsius, calcular e exibir sua temperatura equivalente em Fahrenheit.
6. Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. Calcular e exibir o valor correspondente em Reais (R$).
7. Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.
8. Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²


*/


int main(int argc, char const *argv[])
{
int option;

printf("------------------------------------\n");
printf("-BEM VINDO AOS EXERCICIOS PROPOSTOS-\n");
printf("------------------------------------\n");
printf("--------EXERCICIOS 5,6,7,8----------\n");
printf("------------------------------------\n");
printf("Veja o exercicios abaixo: \n\n");
printf("5 - conversao de temperatura Celsius para Fahrenheit \n");
printf("6 - conversao cotacao do dolar em reais \n");
printf("7 - entrar valor de 5 produtos e digitar o valor a ser devolvido de troco \n");
printf("8 - calcular IMC de uma pessoa \n");

printf("\nDigite o numero da questao desejada e pressione enter \n");
scanf("%i",&option);

if (option == 5)
{
    printf("\n 5 - Conerter de celsius para fahrenheit (escalas de temperatura)\n");

    TemperatureConverter(0);
}
else if (option == 6)
{
    printf("\n 6 - Calcular valor em reais de certa quantia de dolar inserida, baseado na cotacao inserida\n");

    DollarConversion(0,0);
}
else if (option == 7)
{
    printf("\n 7 - Calcular troco/debito dos 5 produtos inseridos\n");

    changeEx();
}
else if (option == 8)
{
    printf("\n8 - Calcular o IMC\n");

    IMC(0,0);
}
else
{
    printf("Exercicio nao identificado. Por favor leia o que se pede\n");
    main(0,0);
}





system("pause");

    return 0;
}

void TemperatureConverter(float c){
float ans;
    printf("\n Insira a temperatura em unidade Celsius \n");
    scanf("%f",&c);
ans = (c*1.8)+32;

    printf("\n A conversao de %.2f graus celsius para Fahrenheit e %.2f graus \n",c,ans);
}

void DollarConversion(float DollarBRLPrice, float USDValue){
float ans;
printf("Qual a cotacao do dolar, em real ? \n");
scanf("%f", &DollarBRLPrice);
printf("Quantos dolares deseja converter em real ? \n");
scanf("%f", &USDValue);

ans=DollarBRLPrice*USDValue;

printf("Convertendo o valor com cotacao a %f e valor de conversao a %f \n",DollarBRLPrice,USDValue);
printf("Chego ao resultado final de [0;31m; %.2f reais\n",ans);




}

void changeEx(){
float p1,p2,p3,p4,p5,PaymentValue,ChangeAmount,sum;
printf("Digite o valor do produto 1 \n");
scanf("%f",&p1);
printf("Digite o valor do produto 2 \n");
scanf("%f",&p2);
printf("Digite o valor do produto 3 \n");
scanf("%f",&p3);
printf("Digite o valor do produto 4 \n");
scanf("%f",&p4);
printf("Digite o valor do produto 5 \n");
scanf("%f",&p5);
printf("Digite o valor para pagamento\n");
scanf("%f",&PaymentValue);
sum = p1+p2+p3+p4+p5;
printf("O total dos produtos e de R$ %.2f",sum);
ChangeAmount = PaymentValue - sum;
    if (ChangeAmount < 0){
        printf(" e o seu debito e de R$ %.2f \n",ChangeAmount);
    }
    else {
        printf(" e o seu troco e de R$ %.2f \n",ChangeAmount);
    }
}

void IMC(float height, float wheight){
float ans;
printf("Coloque seu peso em kg: \n");
scanf("%f",&wheight);
printf("Coloque sua altura em metros: \n");
scanf("%f",&height);
ans=wheight/pow(height,2);
printf("Seu IMC e de %.2f kg/m2 \n",ans);



}