#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n, flag;
    cin >> n; 

    int *pos = (int*) calloc(n+1, sizeof(int)); 

    for (int i = 0; i < n - 1 ; i++) {
        cin >> flag; 
        pos[flag] = 1;  
    }
    flag = 1; 
    while (pos[flag] != 0) flag++; 
    cout << flag << "\n"; 

}
