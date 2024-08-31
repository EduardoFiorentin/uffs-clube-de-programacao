#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int num_words, max_num_lines_per_page, max_char_per_line;

    while (cin >> num_words >> max_num_lines_per_page >> max_char_per_line) {
        cin.ignore();
        string line;
        getline(cin, line); 

        int lines = 1;
        int pages = 1; 
        int line_size = 0; 


        istringstream words(line);  // separa string por palavras 
        string word;

        while (words >> word) {
            int word_size = word.length();

            if (line_size + word_size > max_char_per_line) {
                lines++;
                line_size = 0;
                if (lines > max_num_lines_per_page) {
                    pages++;
                    lines = 1;
                }
            }

            line_size += word_size;

            if (line_size + 1 <= max_char_per_line) {
                line_size++;
            }
        }

        cout << pages << endl;
    }

    return 0;
}
