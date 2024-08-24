#include <iostream> 
#include <vector> 
#include <string>

using namespace std;

int main() {
    
    int num, count, prev; 
    string line, op1, op2; 
    cin >> num;
    cin.ignore();   

    for (int _ = 0; _ < num; _++) {

        getline(cin, op1); 
        getline(cin, op2); 
        getline(cin, line); 

        prev = 0; 

        vector<int> line_vec; 

        for (int i = 0; i < line.size(); i++) {
            if (line[i] == '_') line_vec.push_back(i); 
        }

        for (int i = 0; i < op1.size(); i++) {
            for (int j = 0; j < op2.size(); j++) {
                if (op1[i] == op2[j] && i != j) {
                    prev = 1;
                    break; 
                }
            }
        }

        if (prev) cout << "Y" << endl;
        else cout << "N" << endl;

    }

    return 0; 
}