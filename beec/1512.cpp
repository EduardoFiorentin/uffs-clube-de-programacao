#include <iostream> 
#include <vector> 

using namespace std;

int main() {
    long n, a, b, mult;
    while (true) {
        cin >> n >> a >> b; 
        if (!a && !b && !n) break;        
        for (int i = 1; i <= n; i++) {
            if (i % a == 0 || i % b == 0) mult++; 
        }

        cout << mult << endl; 
    }
}