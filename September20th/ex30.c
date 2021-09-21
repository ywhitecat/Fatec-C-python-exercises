/* André Cavalcante de Lima
30. Exibir os trinta primeiros valores da série de Fibonacci. 
A série: 1, 1, 2, 3, 5, 8, ...

*/

int main(int argc, char const *argv[])
{
    for(int i=0;i<=30;i++){
        int sum = i-1;
        int ans = sum+i;
        printf("%i",ans);
    }
    return 0;
}
