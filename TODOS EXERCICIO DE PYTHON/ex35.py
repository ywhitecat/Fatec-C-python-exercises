''' André Cavalcante de Lima
Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa 
 que deverá multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, 
 na respectiva posição.
'''
numeros = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)

m = int(input("Digite a constante multiplicativa: "))

for i in range(0, 20, 1):
 ##   numeros[i] = numeros[i]*m
    print( numeros[i], " X ", m, " = ", numeros[i]*m)
   
