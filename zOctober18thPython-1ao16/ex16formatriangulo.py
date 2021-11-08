print("Apenas Valores inteiro por favor ")
    
a=float(input("primeiro valor: "))
b=float(input("segundo valor: "))
c=float(input("terceiro valor: "))

if ((a+b)>c and (a+c)>b and (c+b)>a):
    if ((a != b) and (a!=c)):
        print ("Esse triangulo so pode ser escaleno")
    
    elif ((a == b) and (a==c)):
        print ("Esse triangulo so pode ser equilatero")

    
    else:
        print ("Esse triangulo so pode ser isosceles")
        
    
   

else:
    print ("isso nao e um trianglo \npois a soma de dois lados qualquer tem que ser maior que um outro lado")

