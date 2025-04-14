from pprint import (pprint)
plik = open("slowa.txt",'r').read().splitlines()
#6.1
aaa = 0
for i in plik:
    s = i.split(' ')
    for j in s:
        if j[-1] == 'A':
            aaa += 1
print(f'a : {aaa}')
#6.2
bbb = 0
for i in plik:
    s = i.split(' ')
    try:
        s[1].index(s[0])
        bbb += 1
    except ValueError:
        pass
print('b: '+str(bbb))
#6.3
ccc = 0
for i in plik:
    s = i.split(' ')
    if sorted(list(s[0])) == sorted(list(s[1])):
        print(i)
        ccc += 1
print(f'c : {ccc}')