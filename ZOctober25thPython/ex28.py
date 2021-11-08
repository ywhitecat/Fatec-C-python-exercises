import msvcrt

''' André Cavalcante de Lima
28. Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez.
 Entre as tabuadas, solicitar que o usuário pressione uma tecla.


'''

x=1
print("Pressione X para a primeira tabuada\n")
while 1:
    c=msvcrt.getch()
    if c =='x': 
        break
for i in range(1, 11, 1):
            
    print(i," x ", x," = ",x*i)

if (x>=20):
    print("\n");
    
else:
    print("\n Pressione enter para a proxima tabuada\n\n")

    
x=1+x
if (x ==21):

    print("Somente ate a tabuada do 20 meu bem\n Obrigado por usar\n")
    

