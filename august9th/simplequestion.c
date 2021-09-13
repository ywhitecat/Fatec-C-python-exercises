/*
Write a program that prints the numbers from 1 to 100. 
But for multiples of three print 'Fizz' instead of the number 
and for multiples of five print 'Buzz.'
For numbers which are multiples of both three and five print 'Fizzbuzz.' 

1 
2 
Fizz 
4 
Buzz
*/

#include <stdio.h>

void main(){

for (int i=1; i<101;i++) {

    if (i % 3 ==0 && i %5==0){
        printf("FizzBuzz\n");
        continue;
    }
    else if (i % 3 ==0){

        printf("Fizz\n");
        continue;
    }
    else if (i % 5 == 0){
        printf("Buzz\n");
        continue;
    }
    else{
        printf("%d\n");          
    }

}



return 0;
}