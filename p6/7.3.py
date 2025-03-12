from math import sqrt, ceil
text = '1234567890 '
d = len(text)
s = pow(ceil(sqrt(d)),2)
l = int(sqrt(s))
text = text + '_'*(s-len(text))
szyfr = ''
for i in range(l):
    for j in range(l):
        szyfr = szyfr + text[l*j+i]

print(f's = {s}\ntext = {text}\nszyfr = {szyfr}')