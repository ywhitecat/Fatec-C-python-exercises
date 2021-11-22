a = float(input("Digite primeiro valor: "))
b = float(input("Digite segundo valor: "))
c = float(input("Digite terceiro valor: "))

if (a>b):
    print ("o maior numero e ",a)   

elif (a>c):
    print ("o maior numero e ",a)

elif (b>a):
    print("o maior numero e ",b)

elif (b>c):
    print ("o maior numero e ",b)

elif (c>b):
    print ("o maior numero e ",c)

elif (c>a):
    print("o maior numero e ",c)

else:
    print("Todos sao iguais")
    
