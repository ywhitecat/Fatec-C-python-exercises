'''/* André Cavalcante de Lima
32. Calcular e exibir a soma dos “N” primeiros valores da seqüência abaixo. 
O valor “N” será digitado, deverá ser positivo, mas menor que cem. 
Caso o valor não satisfaça a restrição, enviar mensagem de erro e solicitar o valor novamente.
A seqüência: 2, 5, 10, 17, 26, ....


*/'''

n=0
i=0
a=0
n = int(input("Digite valor N, deve ser positivo menor que cem: "))

while (n<=0 or n >=100):
    
    n = int(input("Erro!!, valor N dever ser positivo e menor que cem \n\n Digite novamente:"))
    

for i in range (i+2,n, 1):
    print("",i);

