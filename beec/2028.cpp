#include <iostream> 

using namespace std;

int main() {
    int caso = 0;
    int X;
    while (cin >> X) {
        caso++;
        int n = X;
        int ctrl = 0; 
        int sum = (X == 0) ? 1 : (((X + 1)*X)/2 + 1); 
        printf("Caso %d: %d %s\n", caso, sum, sum == 1 ? "numero" : "numeros");
        while (ctrl <= n) {
            for (int i = 0 ; i < ctrl || i == 0; i++) {
                if ((i == 0 && ctrl == 0)) cout << ""; 
                else cout << " "; 
                cout << ctrl; 
            }
            ctrl++; 
        }
        cout << endl << endl; 
    }
    return 0; 
}