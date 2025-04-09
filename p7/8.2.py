plik = open("liczby.txt","r").read().split("\n")
from pprint import pprint
numbers = {"0":0,"1":1,"2":2,"3":3,"4":4,"5":5,"6":6,"7":7,"8":8,"9":9,"A":10,"B":11,"C":12,"D":13,"E":14,"F":15,}
def wartość(p,n):
    pot = 0
    suma = 0
    for i in reversed(n):
        suma = suma + numbers[i]*pow(p,pot)
        pot = pot + 1
    return suma
#4.1
o1 = 0
for i in plik:
    if i.count('0') > i.count('1'):
        o1 += 1
print(f"4.1:{o1}")
#4.2
o22=0
o28=0
for i in plik:
    if i[-1] == '0':
        o22 += 1
        if i[-2] == '0' and i[-3] == '0':
            o28 += 1
print(f"4.2 2:{o22} 8:{o28}")
#4.3
nums = []
for i in plik:
    nums.append(wartość(2,i))
print(f'4.3 max:{nums.index(max(nums))+1} min:{nums.index(min(nums))+1}')
