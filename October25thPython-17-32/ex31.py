'''/* André Cavalcante de Lima
31. Exibir os vinte primeiros valores da série de Bergamaschi.
 A série: 1, 1, 1, 3, 5, 9, 17, ...

*/'''



a=-1
b=1
c= 1

print("Sequencia dos 20 primeiro do Bergamaschi e: \n");
  
for i in range(0 , 20, 1):
    r = a+b+c
    c=b
    b=a
    a=r
                
    print("",r);
        
    
