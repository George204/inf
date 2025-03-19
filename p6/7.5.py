def koduj(haslo, klucz):
    re = ""
    klucz = klucz * int(len(haslo) / len(klucz) + 1)
    for i in range(len(haslo)):
        n = ord(haslo[i]) + ord(klucz[i]) - 64
        if n > 90:
            n = n - 26
        re += chr(n)
    return re

def dekoduj(haslo, klucz):
    re = ""
    klucz = klucz * int(len(haslo) / len(klucz) + 1)
    for i in range(len(haslo)):
        n = ord(haslo[i]) - (ord(klucz[i]) - 64)
        if n < 65:
            n = n + 26
        re += chr(n)
    return re

hasla = open("tj.txt", 'r').read().split('\n')[:-1]
klucze = open("klucze1.txt",'r').read().split('\n')[:-1]
wyniki = open('wyniki4a.txt','w')
[wyniki.write(koduj(hasla[i],klucze[i])+'\n') for i in range(len(hasla))]
sz = open('sz.txt','r').read().split('\n')[:-1]
klucze = open('klucze2.txt','r').read().split('\n')[:-1]
wyniki = open('wyniki4b.txt','w')
[wyniki.write(dekoduj(sz[i],klucze[i])+'\n') for i in range(len(sz))]
