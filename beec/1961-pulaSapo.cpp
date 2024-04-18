// diferença entre um cano e o proximo <= ao pulo do sapo e >= -1*altura do pulo
#include <iostream> 

using namespace std; 

int main() {

    unsigned short int P, N; 
    bool loose = false; 
    cin >> P; cin >> N; 
    int mapa[N]; 

    for (int i = 0; i < N; i++) 
    {
        cin >> mapa[i]; 
    } 


    for (int i = 0; i < N - 1; i++) 
    {
        if ((mapa[i+1] - mapa[i] >= 0 && mapa[i+1] - mapa[i] > P) || 
            (mapa[i+1] - mapa[i] < 0 && mapa[i+1] - mapa[i] < -P)) 
        {
            loose = true; 
            cout << "GAME OVER" << endl; 
            break; 
        }
    }
    if (!loose) cout << "YOU WIN" << endl; 

    // for (int i = 0; i < N; i++) {
    //     cout << mapa[i] << ' '; 
    // }
    // cout << endl; 

    return 0; 
}