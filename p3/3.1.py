import math as m

def rk(a,b,c):
    delta = pow(b,2)-(4*a*c)
    if delta == 0:
        print(f"x={(-1*b)/(2*a)}")
    elif delta > 0:
        x1 = (-b-m.sqrt(delta))/(2*a)
        x2 = (-b+m.sqrt(delta))/(2*a)
        print(f"x1={x1}x2={x2}")
    else:
        print("brak rozwi1zan")

def rl(a,b):
    if a == 0:
        if b==0:
            print("rownanie tozszamosciowe")
        else:
            print("rownanie sprzeczne")
    else:
        print(f"x={-b/a}")
        
def inputh(n):
    x = int(input(f"podaj {n}:"))
    return x

a = inputh('a')
b = inputh('b')
c = inputh('c') 
d = inputh('d')
c -=d
if a == 0:
    rl(b,c)
else:
    rk(a,b,c)