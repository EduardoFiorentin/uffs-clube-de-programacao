#include <iostream>

using namespace std;

int main() {

    int n = -2; 
    cout << abs(n) << endl; 

    return 0;
}


int printVector(int* vector , int size) {
    std::cout << std::endl; 
    for (int i = 0; i < size; i++) std::cout << " " << vector[i]; 
    std::cout << std::endl; 
}
