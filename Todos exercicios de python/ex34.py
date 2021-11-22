
numeros=[]

print("Digite 10 numeros ai: \n ")
for i in range(0, 10,1):
    x = int(input("poe 10 numeros ai pro tio"))
    numeros.append(x)

    

for i in range(0, 10, 1):
    if numeros[0]<numeros[i]:
        numeros[0]=numeros[i]

print("O maior numero digitado foi:", numeros[0])



