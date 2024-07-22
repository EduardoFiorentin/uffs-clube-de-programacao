#include <iostream>
#include <iomanip>
#include <math.h>
#define MOD 1000000007
int main() {
    long long n, res; 
    long long base = 2; 
    std::cin >> n; 
    res = 1; 
    while (n > 0) {
    if (n % 2 == 1) {
        res = (res * base) % MOD;
    }
    base = (base * base) % MOD;
    n /= 2;
    }
    std::cout << res << "\n";
    
}