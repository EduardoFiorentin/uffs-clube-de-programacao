#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n, begOdd, begEven; 
    cin >> n; 
    if (n == 1) cout << "1" << "\n"; 
    else if (n == 4) cout << "2 4 1 3" << "\n";
    else if (n < 4) cout << "NO SOLUTION" << "\n"; 
    else {
        begOdd = (n % 2) == 0 ? n - 1 : n;
        begEven = (n % 2) == 0 ? n : n - 1;

        for (int i = begEven; i > 0; i-=2) 
            cout << i << " "; 
        
        for (int i = begOdd; i > 0; i-=2) 
            cout << i << " ";
    }
}

