import os
import random as r
import math as m

def gotoxy(x, y):
    return f"\033[{y};{x}H"

print(f"{gotoxy(10,10)}lalala")
# os.system("cls")
#
# a = str(input("Enter a number: "))
# a = a[0].upper
# print(f"{gotoxy(1,1)}a:{a}")
#
# match a:
#     case "1":
#         print("1")
#     case "2":
#         print("2")
#     case "3":
#         print("3")
#     case _:
#         print("default")
#
# x = r.randint(0, 10)
# print(round(x))
input()
