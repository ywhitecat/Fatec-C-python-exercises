
wheight = float(input("Coloque o seu peso: "))
height = float(input("Coloque o sua altura: "))





imc = wheight/(height**2)*10000;
print(f"IMC = {imc:.2f}")

if (imc<25 and imc>20):
    print ("esta no peso ideal ");


elif (imc < 20):
    print ("peso abaixo do ideal ")

else: 
    print ("esta acima do peso ideal ")



