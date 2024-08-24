#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string> 
using namespace std;

char solve(vector<vector<char>> &map, vector<vector<bool>> &visited, int dir_x, int dir_y, int pos_x, int pos_y, int rows, int cols) {

    if (pos_x < 0 || pos_x >= cols || pos_y < 0 || pos_y >= rows || visited[pos_y][pos_x]) return '!';
    cout << "(" << pos_x << ", " << pos_y << ")" << endl; 

    if (map[pos_y][pos_x] == '*') {
        return '*';
    } else if (map[pos_y][pos_x] == '>') {
        dir_x = 1;
        dir_y = 0;
    } else if (map[pos_y][pos_x] == '^') {
        dir_x = 0;
        dir_y = -1;  // Corrigido para -1 (movimento para cima)
    } else if (map[pos_y][pos_x] == '<') {
        dir_x = -1;
        dir_y = 0;
    } else if (map[pos_y][pos_x] == 'v') {
        dir_x = 0;
        dir_y = 1;
    }

    pos_x += dir_x;
    pos_y += dir_y;

    visited[pos_y][pos_x] = true;

    return solve(map, visited, dir_x, dir_y, pos_x, pos_y, rows, cols);
}

int main() {

    int rows, cols;
    cin >> rows >> cols;
    // cin.ignore();   
    vector<vector<char>> map(rows, vector<char>(cols));
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    // Leitura do mapa
    for (int i = 0; i < rows; i++) {
        string line;
        getline(cin, line);  // Lê uma linha inteira do mapa

        for (int j = 0; j < cols; j++) {
            map[i][j] = line[j];  // Atribui cada caractere da linha para a matriz map
        }
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << map[i][j]; 
        }
        cout << endl; 
    }

    unsigned dir_x = 0, dir_y = 0, pos_x = 0, pos_y = 0;
    cout << solve(map, visited, dir_x, dir_y, pos_x, pos_y, rows, cols) << endl;

    return 0;
}
