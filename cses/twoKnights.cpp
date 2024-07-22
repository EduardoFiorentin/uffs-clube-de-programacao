#include <iostream>
 
long calc(long n) {
    return (n*n*(n * n - 1) - 8 - 24 - (n - 4)*16 - 16 - 24 * (n - 4) - 8 * (n - 4)*(n - 4))/2;
}
 
using namespace std;
int main() {
    long n; 
    cin >> n; 
    for (int i = 1; i <= n; i++) {
        cout << calc(i) << "\n"; 
    }
}