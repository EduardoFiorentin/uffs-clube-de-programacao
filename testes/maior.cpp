#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> vec; // vetor de exemplo

    // 1, 3, 5, 7, 9, 11, 13

    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);


    int x = 5; // valor externo

    // Ordene o vetor, se não estiver ordenado
    std::sort(vec.begin(), vec.end());

    // Encontre o primeiro elemento que é estritamente maior que x
    auto it = std::upper_bound(vec.begin(), vec.end(), x);

    // Verifique se há um elemento válido que não exceda x
    
    if (it == vec.begin()) {
        // se todos os elementos forem maiores do que x 
        std::cout << "Todos os elementos sao maiores que " << x << std::endl;

    } else {
        long index = distance(vec.begin(), it);
        
        std::cout << "O maior valor que nao excede " << x << " eh " << vec.at(index - 1) << std::endl;
        cout << "Posicao: " << index - 1 << endl; 
    }

    return 0;
}