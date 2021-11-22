

''' André Cavalcante de Lima
26. Entrar via teclado com um valor qualquer.
Travar a digitação, no sentido de aceitar somente valores positivos. 
Após a digitação, exibir a tabuada do valor solicitado, no intervalo de um a dez

'''


a = int(input("Digite um numero inteiro positivo: "))


while(a<=0):
    a = int(input("Erro !, apenas numero positivos maiores que 0 \n digite novamente: "))


    
for i in range(1, 11 ,1):
    
    print(a," x ",i," = ",a*i)
    
    
