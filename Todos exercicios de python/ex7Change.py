##7 - entrar valor de 5 produtos e digitar o valor a ser devolvido de troco

p1 = float(input("Digite o valor do produto 1 "))
p2 = float(input("Digite o valor do produto 2 "))
p3 = float(input("Digite o valor do produto 3 "))
p4 = float(input("Digite o valor do produto 4 "))
p5 = float(input("Digite o valor do produto 5 "))
PaymentValue = float(input("Valor para pagamento "))


sum = p1+p2+p3+p4+p5
print(f"O total dos produtos e de R$ {sum:.2f}")

ChangeAmount = PaymentValue - sum
if (ChangeAmount < 0):
    print(" e o seu debito e de R$ ", ChangeAmount)
    
else: 
    print(" e o seu troco e de R$ ", ChangeAmount)
    
