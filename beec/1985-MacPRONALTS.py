dic = {
    "1001": 1.5,
    "1002": 2.5,
    "1003": 3.5,
    "1004": 4.5,
    "1005": 5.5
}

num = int(input())
preco = 0
for inp in range(num): 
    prod = list(map(int, input().split()))
    preco += dic[f'{prod[0]}'] * dic[f'{prod[1]}']

print(f"{preco:.2f}")
    