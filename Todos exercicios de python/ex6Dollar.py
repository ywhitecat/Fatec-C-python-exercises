##6 - conversao cotacao do dolar em reais

DollarBRLPrice = float(input("Qual a cotacao do dolar, em real ? \n"))

USDValue = float(input("Quantos dolares deseja converter em real ? \n"))


ans=DollarBRLPrice*USDValue;

print(f"Convertendo o valor com cotacao a {DollarBRLPrice:.2f} e valor de conversao a {USDValue:.2f} e valor final de {ans:.2f} reais")
