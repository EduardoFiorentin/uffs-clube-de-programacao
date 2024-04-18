dic = {
    "pedra":{
        "pedra": "3"
        ,
        "papel": "1"
        ,
        "ataque": "2"
    },
    "papel":{
        "pedra": "2"
        ,
        "papel": "0"
        ,
        "ataque": "2"
    },
    "ataque":{
        "pedra": "1"
        ,
        "papel": "1"
        ,
        "ataque": "-1"
    }
}
winner = {
    "-1": "Aniquilacao mutua",
    "0": "Ambos venceram",
    "1": "Jogador 1 venceu",
    "2": "Jogador 2 venceu",
    "3": "Sem ganhador"
}

num = int(input())

for i in range(num):
    a = input()
    b = input()
    print(winner[dic[a][b]])
    


# 3 - sem ganhador
# 2 - jog 2
# 1 - jog 1 
# 0 - ambos vencem
# -1 - aniquilação

# Ataque Aéreo vs. Pedra: Neste caso, o jogador com o Ataque Aéreo derrota o jogador com a Pedra, por razões óbvias.
# Pedra vs. Papel: Neste caso, o jogador com a Pedra derrota o com Papel, porque a Pedra machuca muito mais.
# Papel vs. Ataque Aéreo: Aqui o Ataque Aéreo ganha, porque Ataque Aéreo sempre ganha e o Papel é patético.
# Papel vs. Papel: Nesta variação, ambos os jogadores ganham, porque o Papel é inútil e ninguém que enfrenta o Papel pode perder.
# Pedra vs. Pedra: Para este caso não há ganhador, porque depende do que os jogadores decidem fazer com a Pedra e normalmente não fazem nada.
# Ataque Aéreo vs. Ataque Aéreo: Quando isto acontece, todos os jogadores perdem, devido a Aniquilação Mútua.