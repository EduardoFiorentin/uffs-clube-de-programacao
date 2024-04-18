#include <iostream> 

using namespace std; 

int main() {

    int size;
    int peaks; 
    while (true) {
        peaks = 0; 
        cin >> size; 
        if (size == 0) break; 

        int *values = new int[size + 2]; 

        for (int i = 0; i < size; i++) {
            cin >> values[i]; 
        }
        values[size] = values[0];
        values[size+1] = values[1];

        for (int p = 1 ; p < size+1; p++) {
            if (values[p] > values[p-1] && values[p] > values[p+1]) peaks++;
            else if (values[p] < values[p-1] && values[p] < values[p+1]) peaks++;
        }

        cout << peaks << endl; 
    }

    return 0; 
}


        // impressão de valores 
        // for (int i = 0 ; i < size+2 ; i++) {
        //     cout << values[i] << " "; 
        // }    