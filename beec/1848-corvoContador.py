# --* 1 
# -*- 2 
# -** 3 
# *-- 4 
# *-* 5 
# **- 6 
# *** 7


for i in range(3):
    value = 0
    inp = input()
    while (inp != 'caw caw'):
        value += int(inp.replace('-', "0").replace('*', '1'), 2)
        inp = input()
    print(value)