from sprawdz import sprawdz

def sprawdz2(k,g1,g2,o1,o2):
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


def main():
    for i in range(1,50):
        for j in range(1,50):
            for k in range(1,50):
                o1,o2 = 0,0
                if sprawdz(i,j,k,o1,o2) != sprawdz2(i,j,k,o1,o2):
                    print(f"error {i},{j},{k}")
                    break       
    o1,o2 = 0,0 
    if sprawdz(10,9,8,o1,o2) != (0,1):
        print(f"error 10,9,8")
    o1,o2 = 0,0
    if sprawdz(10,9,9,o1,o2) != (3,3):
        print(f"error 10,9,9")
    o1,o2 = 0,0
    if sprawdz(10,11,11,o1,o2) != (2,2):
        print(f"error 10,11,11")
    o1,o2 = 0,0
    if sprawdz(10,9,11,o1,o2) != (0,2):
        print(f"error 10,9,11")
    o1,o2 = 0,0
    if sprawdz(10,11,9,o1,o2) != (2,0):
        print(f"error 10,11,9")
    o1,o2 = 0,0
    if sprawdz(10,8,9,o1,o2) != (1,0):
        print(f"error 10,8,9")
    print("konice")
if __name__ == "__main__":
    main()