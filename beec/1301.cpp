#include <iostream> 
#include <vector> 

using namespace std;

int main() {

    int n; // numero de valores de entrada 
    int k; // numero de comandos apos a entrada 
    int aux; 

    int* vector; // vetor de valores 
    char opt; // qual o comando a ser executado no vetor 
    int prod; // produto dos elementos especificados 
    int pos_i, pos_f; // posição dos elementos para multiplicar

    int pos_mod, val_mod; // posição e o valor a serem modifcados 

    while (cin >> n >> k) {
        // cin >> n;
        // cin >> k; 
        // cout << "N: " << n << "K: " << k; 

        vector = (int*) malloc(sizeof(int)*n);

        // coletar valores do vetor
        for (int i = 0; i < n; i++) {
            cin >> aux;
            vector[i] = aux;
        }

        // iniciar operações 
        for (int i = 0 ; i < k; i++) {
            cin >> opt; 
            if (opt == 'C') {
                cin >> pos_mod; 
                cin >> val_mod;
                vector[pos_mod - 1] = val_mod;
            }
            else {
                cin >> pos_i;
                cin >> pos_f; 
                prod = 1; 

                for (int j = pos_i-1; j <= pos_f-1; j++) {
                    if (vector[j] == 0) {
                        prod = 0;
                        break;
                    }
                    if (vector[j] < 0) prod = -prod; 
                } 

                if (prod < 0) cout << "-";
                else if (prod == 0) cout << "0";
                else cout << "+";
            }
            // printVector(vector, n);
        }
        cout << endl; 
        free(vector); 
    }

    return 0;
}