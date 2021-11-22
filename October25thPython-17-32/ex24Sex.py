

''' André Cavalcante de Lima
24. Entrar via teclado com o sexo de determinado usuário, 
aceitar somente “F” ou “M” como respostas válidas.

'''



print("F para feminino e M para masculino\n");

sexo = str(input("Entre o seu sexo: "))


  
while(( sexo!= "F") and (sexo != "M")):

    sexo = str(input("\napenas F ou M e resposta valida \n Digite novamente o seu sexo: "))
    

if(sexo == "M"):

    print("\nVoce e homem\n")
        
    
elif (sexo == "F"):

    print("\nVoce e mulher\n")
    
    

   
