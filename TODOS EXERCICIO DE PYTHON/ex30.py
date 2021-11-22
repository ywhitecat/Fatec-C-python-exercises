'''André Cavalcante de Lima
30. Exibir os trinta primeiros valores da série de Fibonacci. 
A série: 1, 1, 2, 3, 5, 8, ...

'''



a=0
b=1
sum=0

print("sequencia dos 30 primeiro do fibonacci e: \n 1")
for i in range (0, 29,1):
    sum=a + b
    a=b
    b=sum      
                
    print("",sum)
      
    