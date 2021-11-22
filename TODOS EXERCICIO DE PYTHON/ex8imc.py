##8 - calcular IMC de uma pessoa


wheight = float(input("Coloque seu peso em kg: "))
height = float(input("Coloque sua altura em metros: "))

ans=wheight/height**2
print(f"Seu IMC e de {ans:.2f} kg/m2 \n")