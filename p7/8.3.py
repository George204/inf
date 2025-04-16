from math import log
n = int(input('podaj liczbe:'))
p = int(input('podaj system liczbow:'))
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
naj = int(log(n,p))+1
out = ''
print(naj)
for i in reversed(range(naj)):
    for j in reversed(range(p)):
        if j*pow(p,i)<n:
            n -= j*pow(p,i)<n
            out = out+numbers[j]
print(out)
