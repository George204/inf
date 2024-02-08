
def sprawdz(k,g1,g2,o1,o2):
    if(g1>k):
        o1 = 2
    if(g2>k):
        o2 = 2
    if(o1==0 and g1 > g2):
        o2 = 1
    if(o2==0 and g2 > g1):
        o1 = 1
    if(o1 == 0 and o2 == 0):
        o1,o2 = 3,3
    return o1,o2

plik = open("c:\code\p\p3\sprawdz.py","w")
plik.write("def sprawdz(k,g1,g2,o1,o2):\n")
plik.write("    n = (k-1)*49**2+(g1-1)*49+(g2-1)\n")
plik.write("    match n:\n")
for k in range(0,49):
    for g1 in range(0,49):
        for g2 in range(0,49):
            n = k*49**2+g1*49+g2
            o1,o2 = 0,0
            o1,o2 = sprawdz(k,g1,g2,o1,o2)
            plik.write(f"        case {n}:\n            return {o1},{o2}\n")
plik.close()
