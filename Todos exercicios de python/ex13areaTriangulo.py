##13. Calcular e exibir a area de um retângulo,
#  a partir dos valores da base e altura que serao digitados.
##Se a area for maior que 100, exibir a mensagem Terreno grande, caso contrário, 
# exibir a mensagem Terreno pequeno

base = float(input("Digite a base: "))
height = float(input("Digite a altura: "))

area = base * height;
print("A area e ",area)
if (area>100):
    print("\n O terreno e grande")

else:
    print("O terreno e pequeno")
