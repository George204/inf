n = int(input("podaj n:"))
w = []
i = 1
while n!=1:
    i+=1
    if n%i==0:
        w.append(i)
        n = n//i
        i = 1
print(f"czynniki:{w}\nliczba czynników:{len(w)}\nsuma:{sum(w)}")