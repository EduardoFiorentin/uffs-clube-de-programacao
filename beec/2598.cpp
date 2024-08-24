#include <iostream> 
#include <vector> 
#include <math.h>

using namespace std;

int main() {

    long double num, kms, lr; 

    cin >> num; 

    for (int i = 0; i < num; i++) {
        cin >> kms >> lr; 
        cout << ceil(kms / lr) << endl; 
    }   
    
}