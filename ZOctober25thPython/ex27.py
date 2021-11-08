''' André Cavalcante de Lima
 Entrar via teclado com um valor (X) qualquer. 
 Travar a digitação, no sentido de aceitar somente valores positivos. 
 Solicitar o intervalo que o programa que deverá calcular a tabuada do valor digitado, 
 sendo que o segundo valor (B), deverá ser maior que o primeiro (A), 
 caso contrário, digitar novamente somente o segundo. 
 Após a validação dos dados,
exibir a tabuada do valor digitado,
no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.

'''


x = int(input("Digite um numero inteiro positivo: "))

while(x<=0):
    x = int(input("Somente numero postivos\n Digite novamente: "))


    

interval = int(input(f"Qual o inicio do intervalo de tabuada deseja calcular para "))
interval2 = int(input(f"Qual o final do intervalo de tabuada deseja calcular para "))

while(interval>interval2):
    interval2 = int(input("O intervalo final deve ser maior que o inicial\n\n Digite novamente: "))

    

for i in range(interval,interval2+1,1):
    print(x, " x ", i ," = ", x*i)
    



