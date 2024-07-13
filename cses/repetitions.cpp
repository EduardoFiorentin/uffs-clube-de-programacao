#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str; 
    cin >> str; 
    int size_substr, max_substr = 0;
    char last_char = str[0]; 
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == last_char) size_substr++; 
        else {
            if (size_substr > max_substr) max_substr = size_substr; 
            size_substr = 1;
            last_char = str[i]; 
        }
    }
    if (size_substr > max_substr) max_substr = size_substr;
    cout << max_substr << "\n";
}
