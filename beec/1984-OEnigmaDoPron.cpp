#include <iostream>

using namespace std; 

int main() {

    string num; cin >> num; 
    for (int i = ((sizeof num) - 1); i >= 0 ; i--)
    {
        cout << num[i]; 
    }
    cout << endl; 

    return 0;
}