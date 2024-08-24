#include <iostream>
#include <vector>
#include <string> 

using namespace std;

char solve(vector<vector<char>> &map_grid, vector<vector<bool>> &visited, int dir_x, int dir_y, int pos_x, int pos_y, int rows, int cols) {
    if (pos_x < 0 || pos_x >= rows || pos_y < 0 || pos_y >= cols || visited[pos_y][pos_x]) {
        return '!';
    }

    if (map_grid[pos_y][pos_x] == '*') {
        return '*';
    }
    if (map_grid[pos_y][pos_x] == '>') {
        dir_x = 1;
        dir_y = 0;
    } else if (map_grid[pos_y][pos_x] == '^') {
        dir_x = 0;
        dir_y = -1;
    } else if (map_grid[pos_y][pos_x] == '<') {
        dir_x = -1;
        dir_y = 0;
    } else if (map_grid[pos_y][pos_x] == 'v') {
        dir_x = 0;
        dir_y = 1;
    }

    visited[pos_y][pos_x] = true;
    pos_x += dir_x;
    pos_y += dir_y;

    return solve(map_grid, visited, dir_x, dir_y, pos_x, pos_y, rows, cols);
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    cin.ignore();

    vector<vector<char>> map_grid(cols, vector<char>(rows));
    for (int i = 0; i < cols; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < rows; j++) {
            map_grid[i][j] = line[j];
        }
    }

    vector<vector<bool>> visited(cols, vector<bool>(rows, false));

    int dir_x = 1, dir_y = 0;
    int pos_x = 0, pos_y = 0;

    char result = solve(map_grid, visited, dir_x, dir_y, pos_x, pos_y, rows, cols);
    cout << result << endl;

    return 0;
}
