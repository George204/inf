from re import sub
plik = open('text.txt',"r").read()
open('wyniki4.1.txt','w').write(plik.upper())
open('wyniki4.2.txt','w').write(sub("[0-9]","#",plik))
rev = open('wyniki4.3.txt','w')
[rev.write(line[::-1] + "\n") for line in plik.split("\n")]
rev = open('wyniki4.4.txt','w')
[[[rev.write(word[::-1]+" ") for word in line.split(" ")] and rev.write("\n")] for line in plik.split("\n")]
