#include <stdio.h>
#include <math.h>
int main (){
    float p1,p2,ans;
    printf("Nota p1 : ");
    scanf("%f",&p1);
    printf("\n\nNota p2 : ");
    scanf("%f",&p2);
    ans = (p1+2*p2)/3;

    if (ans >= 5){
        printf("\nAprovado\n Voce tirou %.2f\n",ans);
    }
    else {
        printf("\nReprovado\n Voce tirou %.2f\n",ans);
    }
}