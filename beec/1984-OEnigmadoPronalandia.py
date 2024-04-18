num = input() 
inv = ''
for i in range(len(num)):
    inv += num[-i-1]

print(inv.strip())