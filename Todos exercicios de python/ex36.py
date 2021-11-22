''' André Cavalcante de Lima
36. Armazenar vinte valores na memória. Após a digitação, 
entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor 
e armazenar o resultado em outro vetor, porém em posições equivalentes. 
Exibir os vetores na tela.

'''

array = []
array2 = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    array.append(x)

const = int(input("Digite a constante multiplicadora: "))

for i in range(0, 20, 1):
    array[i] = array[i]*const
    array2.append(array[i])
    print(array2[i])
    print(array[i], " X ", const, " = ", array2[i] * const)
