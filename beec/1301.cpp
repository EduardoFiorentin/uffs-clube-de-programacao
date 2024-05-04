#include <iostream> 
#include <vector> 

using namespace std;

int main() {

    int n; // numero de valores de entrada 
    int k; // numero de comandos apos a entrada 
    int aux; 

    vector<int> vector; // vetor de valores 
    char opt; // qual o comando a ser executado no vetor 
    int prod; // produto dos elementos especificados 
    int pos_i, pos_f; // posição dos elementos para multiplicar

    int pos_mod, val_mod; // posição e o valor a serem modifcados 

    while (!cin.eof()) {
        cin >> n;
        cin >> k; 

        // coletar valores do vetor
        for (int i = 0; i < n; i++) {
            cin >> aux;
            vector.push_back(aux);
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
                    prod *= vector[j]; 
                } 

                if (prod < 0) cout << "-";
                else if (prod == 0) cout << "0";
                else cout << "+";
            }
        }
        cout << endl; 
    }

    return 0;
}