"""5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
Eu ja avia resolvido um exercicio parecido em uma competição. Então resolvi utilizar python para resolver esse problema.
"""

def inverter_string(s):
    s= list(s)
    tamanho= len(s)
    for i in range(tamanho//2):
        s[i], s[tamanho-i-1] = s[tamanho-i-1],s[i]
    return ''.join(s)

string = input("Digitar string para inverter = ")
invertida=inverter_string(string)
print("string invertida", invertida)
