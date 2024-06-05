from funk import *
max = 11
def main():
    n = inputh("podaj n:")
    T = [[0,]*n]*n
    lost2(T,n,n)
    piszt2(T,n,n)
    x= inputh("podaj x:")
    Tx = T[x]
    Ty = []
    for i in range(n):
        Ty.append(T[i][x])
    T[x] = Ty
    for i in range(n):
        T[i][x] = Tx[i]
    piszt2(T,n,n)
if __name__ == "__main__":
    main()

