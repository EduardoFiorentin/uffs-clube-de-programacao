#include <iostream> 

using namespace std;

int main() {
    int numFarms; 
    int sumSheep = 0;
    cin >> numFarms; 
    
    int farms[numFarms]; 
    int farmsStoleControll[numFarms]; 

    for (int i = 0 ; i < numFarms; i++) {
        cin >> farms[i];
        sumSheep += farms[i];
        farmsStoleControll[i] = 0; 
    }

    int stolenSheep = 0;
    int stolenFarms = 0;
    int thiefPosition = 0; 

    while (true) {
        // cout << farms[thiefPosition] << "  " << thiefPosition << endl;
        if (farms[thiefPosition] != 0) {

            // se tem carneiro, rouba 
            stolenSheep++; 
            if (farmsStoleControll[thiefPosition] == 0) {
                farmsStoleControll[thiefPosition] = 1; 
                stolenFarms++; 
            }

            // confere se dá pra continuar: 
                // se o numero de carneiros no local for par
                    // parte pra fasenda anterior (-1) -> indice n pode ser 0
            if (farms[thiefPosition] % 2 == 0 && thiefPosition > 0) {
                farms[thiefPosition]--;    
                thiefPosition--;

                // se for impar 
                    // parte pra proxima casa - indice n pode ser o último (numFarms - 1)
            } else if (farms[thiefPosition] % 2 != 0 && thiefPosition < (numFarms - 1)) {
                farms[thiefPosition]--;    
                thiefPosition++;
            } else break;      
        } else break; 

    }
    cout << stolenFarms << " " << sumSheep - stolenSheep << endl;
    return 0; 
}

