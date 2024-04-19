#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {

    while (true) {

        int lenA, lenB; 
        cin >> lenA;
        cin >> lenB; 

        if (lenA == 0 && lenB == 0) break; 

        vector<int> vectorA; 
        vector<int> vectorB;

        int aux;

        for (int i = 0; i < lenA; i++){
            cin >> aux; 
            vectorA.push_back(aux); 
        }
        for (int i = 0; i < lenB; i++) {
            cin >> aux; 
            vectorB.push_back(aux);
        } 
        
        int intersectionA = 0, intersectionB = 0; 
        int last = -1;  
        bool flag = true; // se false, não incrementa a intersecção 


        for (int elementA : vectorA) { 
            flag = true; 
            for (int elementB : vectorB) {

                if (last == elementA) {     // ? 
                    flag = false; 
                    break;
                }; 

                if (elementB > elementA) {
                    // intersectionA++;
                    break; 
                }
                
                if (elementA == elementB) {
                    flag = false; 
                    break; 
                }; 
            }
            if (flag) intersectionA++; 
            last = elementA; 
        }

        last = -1; 

        for (int elementB : vectorB) { 
            flag = true; 
            for (int elementA : vectorA) {

                if (last == elementB) {
                    flag = false; 
                    break;
                };  
                if (elementA > elementB) {
                    break; 
                }       
                if (elementB == elementA) {
                    flag = false; 
                    break; 
                }
            }
            if (flag) intersectionB++; 
            last = elementB; 
        }
        intersectionA < intersectionB ? cout << intersectionA << endl : cout << intersectionB << endl; 
    }
    return 0; 
}