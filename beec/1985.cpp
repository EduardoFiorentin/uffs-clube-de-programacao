#include <iostream> 

using namespace std; 

int main() {

    int num; cin >> num;
    int product, qtd; 
    double sum = 0; 

    for (int i = 0 ; i < num ; i++) {
        cin >> product; 
        cin >> qtd;
        sum += ((product % 10)+ 0.50) * qtd;
    }

    printf("%.2f", sum); 

    return 0; 
}