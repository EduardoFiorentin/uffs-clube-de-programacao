#include <iostream> 

using namespace std;

int main() {

    int num = -1;
    int x, y;

    while (true) {
        
        cin >> num;
        if (num == 0) break; 

        for (int i = 0; i < num; i++) {
            cin >> x;
            cin >> y; 

            if (x == 0 || y == 0) {
                cout << "divisa" << endl; 
            }

            else {
                if (x > 0) {
                    if (y > 0) {
                        cout << "NE" << endl; 
                    }
                    else {
                        cout << "SE" << endl; 
                    }
                }
                else {
                    if (y > 0) {
                        cout << "NO" << endl; 
                    }
                    else {
                        cout << "SO" << endl; 
                    }
                }
            }
        }

    }

    return 0; 
}