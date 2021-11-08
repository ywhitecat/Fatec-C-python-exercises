
'''André Cavalcante de Lima
18. Entrar com o peso, o sexo e a altura de uma determinada pessoa. 
Após a digitação, exibir se esta pessoa
está ou não com seu peso ideal. Fórmula: peso/altura².

Consultar tabela do exercio para referencia


'''


sexo = str(input('F para feminino ou M para Masculino:'))
height = float(input('Sua altura em metro: '))
wheight = float(input('Seu peso em Kg: '))


imc = wheight/(height*height)


if (sexo == 'F' or sexo == 'f'):
    print("Sexo: feminino")
    print(f"Seu IMC e  ", imc);
elif (sexo == 'M' or sexo=='m'):
    print("Sexo masculino")
    print(f"Seu IMC e ",imc)
    

