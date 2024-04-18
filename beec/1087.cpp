#include <iostream>

using namespace std; 

int main() {

    unsigned short int x1, x2, y1, y2;
    
    while (true) {

        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;

        if (!(x1 && x2 && y1 && y2)) break; 
    
        if (x1 == x2 && y1 == y2) cout << 0 << endl; 

        else if ((y1 == y2 || x1 == x2) || (abs(x2 - x1) == abs(y2 - y1))) cout << 1 << endl; 

        else cout << 2 << endl; 

    }
    return 0;
}