#include <stdio.h>
#include <math.h>
/*

9. Entrar via teclado, com dois valores distintos. Exibir o maior deles.

10. Entrar via teclado, com dois valores distintos. Exibir o menor deles.

11. Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, enviar mensagem avisando que os números são idênticos.

12. Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. Se a área for maior que 100, exibir a mensagem “Terreno grande”.

*/

void main (){
int option;
printf("------------------------------------\n");
printf("-BEM VINDO AOS EXERCICIOS PROPOSTOS-\n");
printf("------------------------------------\n");
printf("--------EXERCICIOS 9,10,11,12-------\n");
printf("------------------------------------\n");
printf("-Aula de 21/08----------------------\n\n");

printf("Veja o exercicios abaixo: \n\n");
printf("9. Entrar via teclado, com dois valores distintos. Exibir o maior deles. \n\n");
printf("10. Entrar via teclado, com dois valores distintos. Exibir o menor deles. \n\n");
printf("11. Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrario, enviar mensagem avisando que os numeros sao identicos. \n\n");
printf("12. Calcular e exibir a area de um retângulo, a partir dos valores da base e altura que serao digitados. Se a area for maior que 100, exibir a mensagem de Terreno grande. \n\n");

printf("Digite o numero do exercicio desejado: ");
scanf("%i", &option);
  if (option == 9){
      MaxDistinctValues(0,0);
  }
  else if (option == 10){
      MinDistinctValues(0,0);
  }
  else if (option == 11){
      ThirdExercise(0,0);
  }
  else if (option == 12){
      terrain(0,0);
  }
  
  else{
      printf("Condicao nao atendida\n Por favor coloque o numero da questao desejada");
      main();
  }
  
    return 0;
}

void MaxDistinctValues(float a, float b){

    printf("Digite primeiro valor: ");
    scanf("%f", &a);
    printf("\nDigite segundo valor: ");
    scanf("%f", &b);
if (a>b){
    printf("O maior numero e %.2f",a);
}
else{
    printf("O maior numero e %.2f",b);
}
}

void MinDistinctValues (float a, float b)
{
    printf("Digite primeiro valor: ");
    scanf("%f", &a);
    printf("\nDigite segundo valor: ");
    scanf("%f", &b);
if (a<b){
    printf("O menor numero e %.2f",a);
}
else{
    printf("O menor numero e %.2f",b);
}
}

void ThirdExercise(float a, float b){
    printf("Digite primeiro valor: ");
    scanf("%f", &a);
    printf("\nDigite segundo valor: ");
    scanf("%f", &b);
if (a==b){
    printf("Esses sao os mesmos numeros");
}
else if (a>b){
    printf("o maior numero e %.2f",a);
}
else {
    printf("o maior numero e %.2f",b);

}

}
void terrain(float base, float height){
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("\nDigite a altura: ");
    scanf("%f", &height);
    float area = base * height;
if (area>100){
    printf("\n O terreno e grande");
}
else{
    printf("O terreno e pequeno");
}

}