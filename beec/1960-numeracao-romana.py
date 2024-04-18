def decimal_para_romano(numero):
    valores = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    romanos = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
    numero_romano = ''
    i = 0
    while numero > 0:
        for _ in range(numero // valores[i]):
            numero_romano += romanos[i]
            numero -= valores[i]
        i += 1
    return numero_romano
print(decimal_para_romano(int(input())))

