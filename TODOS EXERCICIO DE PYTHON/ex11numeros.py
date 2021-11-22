##11. Entrar com dois valores quaisquer. 
# Exibir o maior deles, se existir, 
# caso contrario, enviar mensagem avisando que os numeros sao identicos.

a=float(input("Digite primeiro valor: "))
b=float(input("Digite segundo valor: "))

 
if (a==b):
    print("Esses sao os mesmos numeros")

elif (a>b):
    print("o maior numero e ",a)

else:
    print("o maior numero e ",b)



