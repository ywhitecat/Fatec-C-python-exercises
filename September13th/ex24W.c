
#include <ctype.h>
#include <stdio.h>
#include <math.h>
/* André Cavalcante de Lima
24. Entrar via teclado com o sexo de determinado usuário, 
aceitar somente “F” ou “M” como respostas válidas.

*/

void main(){
    char sexo;
    printf("F para feminino e M para masculino\n");

    printf("Entre o seu sexo: ");
    scanf("%s",&sexo);

  
    while((toupper(sexo) != 'F') && (toupper(sexo) != 'M')){
        printf("\napenas F ou M e resposta valida \n Digite novamente o seu sexo: ");
        scanf("%s",&sexo);

    }
    if(sexo == 'M'){
        printf("\nVoce e homem\n");
        
    }
    else if (sexo == 'F'){
        printf("\nVoce e mulher\n");
    }
    

   
}