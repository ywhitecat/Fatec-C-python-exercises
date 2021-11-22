''' André Cavalcante de Lima
33. Armazenar dez números na memória do computador.
Exibir os valores na ordem inversa à da digitação.

'''

numeros=[]

for i in range(0,10,1):
    x = int(input("Digite 10 numeros ai: \n "))
    numeros.append(x)

    
print("\nOs numeros digitados foram : \n\n")
for i in range(9, -1, -1):
    
    print(numeros[i])

