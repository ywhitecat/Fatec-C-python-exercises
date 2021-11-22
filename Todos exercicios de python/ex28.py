import msvcrt
from goto import with_goto

''' André Cavalcante de Lima
28. Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez.
 Entre as tabuadas, solicitar que o usuário pressione uma tecla.


'''


##print("Pressione x e enter  para a primeira tabuada\n")

while True:
    y =str(input("Pressione x e enter  para a primeira tabuada\n"))
    if y == "x":
        x=1
        for i in range(1, 11, 1):
                            
            print(i," x ", x," = ",x*i)
    x=1+x
        
    if (x ==21):

        print("Somente ate a tabuada do 20 meu bem\n Obrigado por usar\n")
            
                

