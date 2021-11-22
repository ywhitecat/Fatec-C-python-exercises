#include <stdio.h>
#include <math.h>

/* André Cavalcante de Lima
13. Calcular e exibir a área de um retângulo, 
a partir dos valores da base e altura que serão digitados. 
Se a área for maior que 100, exibir a mensagem “Terreno grande”, caso contrário, exibir a mensagem “Terreno pequeno”.

14. Entrar via teclado com três valores distintos. Exibir o maior deles.

15. Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².


16. A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. 
Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, todos os lados iguais. Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior que o outro, isto, para os três lados.

*/

void main (){
int option;
printf("\n-------------------------------------\n");
printf("-BEM VINDO AOS EXERCICIOS PROPOSTOS--\n");
printf("-------------------------------------\n");
printf("--------EXERCICIOS 13,14,15,16-------\n");
printf("-------------------------------------\n");
printf("-Aula de 21/08-----------------------\n\n");

printf("Veja o exercicios abaixo: \n\n");
printf("13. Calcular e exibir a area de um retângulo, a partir dos valores da base e altura que serao digitados.\n") ;
printf("Se a area for maior que 100, exibir a mensagem Terreno grande, caso contrário, exibir a mensagem Terreno pequeno \n\n");

printf("14. Entrar via teclado com tres valores distintos. Exibir o maior deles. \n\n");

printf("15. Entrar com o peso e a altura de uma determinada pessoa.\n ");
printf("Apos a digitação, exibir se esta pessoa está ou nao com seu peso ideal. Formula: peso/altura^2. \n\n");

printf("16. A partir de tres valores que serao digitados, verificar se formam ou nao um triângulo.\n ");
printf("Em caso positivo, exibir sua classificacao: Isosceles, escaleno ou equilatero.\n"); 
printf("Um triangulo escaleno possui todos os lados diferentes, o isosceles, dois lados iguais e o equilatero, todos os lados iguais.\n"); 
printf("Para existir triangulo e necessario que a soma de dois lados quaisquer seja maior que o outro, isto, para os tres lados. \n\n");

printf("Digite o numero do exercicio desejado: ");
scanf("%i", &option);
  if (option == 13){
      terrain(0,0);
  }
  else if (option == 14){
      fourteenthEx(0,0,0);
  }
  else if (option == 15){
      fifteenth();
  }
  else if (option ==16){
      sixteenth(0,0,0);
  }
  
  
  else{
      printf("\n\nCondicao nao atendida\n\n Por favor coloque o numero da questao desejada\n");
      main();
  }
  
    return 0;
}

void terrain(float base, float height){
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("\nDigite a altura: ");
    scanf("%f", &height);
    float area = base * height;
    printf("A area e igual a %.2f",area);
if (area>100){
    printf("\nLogo o terreno e grande");
}
else{
    printf("\nLogo o terreno e pequeno");
}

}

void fourteenthEx (float a, float b , float c){
    printf("\nDigite o primeiro valor: ");
    scanf("%f", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%f", &c);

if (a>b){
    printf ("o maior numero e %.2f",a);   
}
if (a>c){
    printf ("o maior numero e %.2f",a);
}
if (b>a){
    printf ("o maior numero e %.2f",b);
}
if (b>c){
    printf ("o maior numero e %.2f",b);
}
if (c>b){
    printf ("o maior numero e %.2f",c);
}
if (c>a){
    printf ("o maior numero e %.2f",c);
}
else    {
    printf ("\nTodos sao iguais");
    }
}

void fifteenth (){
    float height, wheight, imc;
    printf ("\nColoque o seu peso: ");
    scanf ("%f", &wheight);
    printf ("\nColoque o sua altura: ");
    scanf ("%f", &height);

    imc = wheight/pow(height,2)*10000;
printf ("\nIMC = %.2f\n",imc);

if (imc<25 && imc>20){
    printf ("\nesta no peso ideal \n");

}
else if (imc < 20){
    printf ("\npeso abaixo do ideal\n ");
}

else {
    printf ("\nesta acima do peso ideal \n");

}
}

void sixteenth(int a, int b, int c){
    printf ("\nApenas Valores inteiro por favor ");
    
    printf ("\nprimeiro valor: ");
    scanf("%i", &a);
    printf ("\nsegundo  valor: ");
    scanf("%i", &b);
    printf ("\nterceiro valor: ");
    scanf("%i", &c);
if ((a+b)>c &&(a+c)>b && (c+b)>a){
    if ((a != b) && (a!=c)){
        printf ("\nEsse triangulo so pode ser escaleno");
    }
    else if ((a == b) && (a==c)){
        printf ("\nEsse triangulo so pode ser equilatero");

    }
    else{
        printf ("\nEsse triangulo so pode ser isosceles");
        
    }
   
}
else{
    printf ("\nisso nao e um trianglo \npois a soma de dois lados qualquer tem que ser maior que um outro lado");
}

}
