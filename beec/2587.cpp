// #include <iostream> 
// #include <vector> 
// #include <string>

// using namespace std;

// int main() {
    
//     int num, count, prev; 
//     string line, op1, op2; 
//     cin >> num;
//     cin.ignore();   

//     for (int _ = 0; _ < num; _++) {

//         getline(cin, op1); 
//         getline(cin, op2); 
//         getline(cin, line); 

//         prev = 0; 

//         vector<int> line_vec; 

//         for (int i = 0; i < line.size(); i++) {
//             if (line[i] == '_') line_vec.push_back(i); 
//         }

//         for (int i = 0; i < op1.size(); i++) {
//             for (int j = 0; j < op2.size(); j++) {
//                 if (op1[i] == op2[j] && i != j) {
//                     prev = 1;
//                     break; 
//                 }
//             }
//         }

//         if (prev) cout << "Y" << endl;
//         else cout << "N" << endl;

//     }

//     return 0; 
// }


#include <iostream> 
#include <stdlib.h>
#include <string> 

using namespace std; 

int solve() {
    return 1;
}

int main() {

    string line; 
    int i, num_words, max_num_lines_per_page, max_char_per_line, lines, pages, chr_size, last_space, line_size; 

    while (cin >> num_words >> max_num_lines_per_page >> max_char_per_line) {

        cout << num_words << " " << max_num_lines_per_page << " " << max_char_per_line << endl; 

        cin.ignore();
        getline(cin, line); 
        chr_size = 0; 
        lines = 1;
        pages = 1; 
        last_space = -1; 
        line_size = 0; 
        i = 0; 

        while ( i < line.size() ) {
            chr_size++; 

            if (line[i] == ' ') {
                if (last_space == -1) last_space = i; 
                
                // logica de tratamento
                if ((line_size + chr_size) <= max_char_per_line) {

                    // ainda pode continuar colocando caracteres na mesma linha
                    last_space = i; 
                    
                }   
                else {
                    // precisa voltar pro ultimo espaço e quebrar linha alí
                    chr_size -= (i - last_space + 1); 
                    i = last_space; 

                    // ver se suporta mais linhas nesta página
                    if ((lines + 1) <= max_num_lines_per_page) {
                    
                        lines++; 
                        chr_size = 0;

                    }
                    else {
                        pages++; 
                        lines = 0; 
                        chr_size = 0; 

                    }
                }

            }
            i++; 
        }

        cout << pages << endl; 

    }

    return 0; 
}
