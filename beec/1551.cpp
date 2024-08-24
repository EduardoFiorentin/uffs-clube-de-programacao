#include <iostream> 
#include <vector> 
#include <string>

using namespace std;

int main() {
    
    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', ','};

    int num, count; 
    string line; 
    cin >> num;
    cin.ignore();   

    for (int _ = 0; _ < num; _++) {
        vector<bool> arrived(130, 0); 
        getline(cin, line);
        count = 0; 

        for (char i: line) {
            if (!arrived[i] && i != ' ' && i != ',') count++; 
            arrived[i] = 1; 
        }

        if (count == 26) cout << "frase completa" << endl;
        else if (count >= 13) cout << "frase quase completa" << endl;
        else cout << "frase mal elaborada" << endl;

    }   

    return 0; 
}