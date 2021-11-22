#include <stdio.h>
#include <math.h>
''' André Cavalcante de Lima
19. A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do tempo de percurso
(t em s). Calcular e exibir a velocidade final de automóvel em km/h. Exibir mensagem de acordo com a
tabela:
Consultar tabela do exercicio

Fórmula para o cálculo da velocidade em m/s: V = v0 + a. t
'''


acceleration =float(input("Digite a aceleracao do veiculo(m/s2) : "))
initialvelocity =float(input("Digite a velocidade inicial(m/s) :  "))
timeroute =float(input("Digite o tempo de percurso(s) : "))





velocity = initialvelocity + acceleration*timeroute
ConvertedVelocity = velocity/3.6

print("A velocidade final do veiculo e ",ConvertedVelocity, " km/h")

if (ConvertedVelocity <= 40):
    print ("Veiculo muito lento")

elif (ConvertedVelocity > 40 and ConvertedVelocity <= 60):
    print ("Velocidade permitida")

elif (ConvertedVelocity > 60 and ConvertedVelocity <=80):
    print ("Velocidade de cruzeiro")

elif (ConvertedVelocity > 80 and ConvertedVelocity<=120):
    print ("Veiculo rápido")

else:
    print ("Veiculo muito rapido")




