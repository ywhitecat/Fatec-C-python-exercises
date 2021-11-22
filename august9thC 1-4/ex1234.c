#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
printf("Digite para rodar programa:\n");
printf("1 para calcular area do retangulo\n");
printf("2 para calcular area do quadrado\n");
printf("3 para calcular area do triangulo\n");
printf("4 para calcular area do media aritmetica de 4 valores\n");
scanf("%i", &option);


if (option ==1){
    retangulo();
}
else if (option ==2){
    quadrado();

}
else if (option ==3){
    triangulo();
}
else if (option ==4){
    media();
}
else {
    printf("Condicao nao pode ser cumprida\n\n Siga o que se pede\n\n");
    main();
}



    return 0;
}

void retangulo(){

  // primeiro exercicio
int base,altura,area;
    printf("Exercicio de base e altura de um retagulo, calcular a area \n");
    printf("Coloque o tambanho da base ");
    scanf("%i", &base);
    printf("Coloque o tambanho da altura ");
    scanf("%i", &altura);


    area = base*altura;
    printf("A area do retangulo e: %i",area);


}

void quadrado(){
    // segundo Exercicio
int lado,area;
    printf("Exercicio para calcular area do quadrado\n");
    printf("Qual e a aresta(lado) do quadrado? ");
    scanf("%i", &lado);

area = lado*lado;

    printf("A area do quadrado e: %i",area);

}

void triangulo(){
    //programa da base do triangulo -> terceiro exercicio
int base, altura, area;
    printf("Exercicio de area do triangulo\n");
    printf("Base do triangulo: ");
    scanf("%i", &base);
    printf("altura do triangulo: ");
    scanf("%i",&altura);
area = (base*altura)/2;

    printf("A area do triangulo e: %i",area);

}

void media(){
    //programa da media aritmetica -> quarto exercicio
int n1,n2,n3,n4,media;
    printf("Exercicio de media aritmetica\n");
    printf("Coloque quatro valores para calcular: \n");
    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Segundo valor: ");
    scanf("%i", &n2);
    printf("Terceiro valor: ");
    scanf("%i", &n3);
    printf("Quarto valor: ");
    scanf("%i", &n4);
media = (n1 + n2 + n3 + n4)/4;

    printf("A media aritmetica desses valores e igual %i",media);



}