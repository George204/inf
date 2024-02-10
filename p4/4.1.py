from funk import *
max = 5

def main():
    re = True
    while re == True:
        size = inputh("Ile elemntuw chcesz podac")
        tab = [0,]*size
        czytajt(tab,size)
        piszt(tab,size)
        print(f"Twoje liczby odwrotnie to :",end="")
        for i in reversed(tab):
            print(f"{i},", end="")
        print()
        re = jeszcze()

if __name__ == "__main__":
    main()






