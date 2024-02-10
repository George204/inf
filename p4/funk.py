import sys, tty, termios

#def getch():
#    from msvcrt import getch
#    return getch()

def getch(char_width=1):
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(fd)
        ch = sys.stdin.read(char_width)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return ch

def inputh(g):
    k = False
    x = 0
    while True:
        try:
            x = int(input(g))
            k = True
        except ValueError:
            print("wariosc nieprawidlowa")
        if k:
            break 
    return x

def getin():
    wart ='z'
    while wart != 't' and wart != 'n':
        wart = getch().lower()
    return wart

def jeszcze():
    print("jeszcze raz? (T/n)")
    if getin() != 't':
        return False
    return True
