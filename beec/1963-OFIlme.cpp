#include <iostream> 

using namespace std;

int main() {

    double A, B; 
    cin >> A; cin >> B; 

    cout.precision(2);
    cout << fixed << 100 * B / A - 100 << "%" << endl; 

    return 0; 
}