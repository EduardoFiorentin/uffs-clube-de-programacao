#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n;
    cin >> n; 
    while (n != 1) {
        cout << n << " "; 
        if (n % 2 == 0) n = n / 2;
        else n = (n * 3) + 1;
    }
    cout << "1"; 
}


// // v2
// int main() {
//     int n;
//     cin >> n; 
//     while (n != 1) {
//         cout << n << " "; 
//         if ((n % 10)%2 == 0) n = n / 2;
//         else n = (n * 3) + 1;
//     }
//     cout << "1"; 
// }