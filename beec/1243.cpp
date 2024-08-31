// #include <iostream>
// #include <string>
// #include <regex>

// using namespace std;

// int solve(string &line) {
//     regex word_regex(R"(\b[a-zA-Z]+\.?\b)");
//     auto words_begin = sregex_iterator(line.begin(), line.end(), word_regex);
//     auto words_end = sregex_iterator();
//     int word_count = 0;
//     int total_len = 0;

//     for (sregex_iterator i = words_begin; i != words_end; i++) {
//         smatch match = *i;
//         string word = match.str();
//         if (word.back() == '.') {
//             word.pop_back();
//         }
//         total_len += word.length();
//         word_count++;
//     }

//     if (word_count == 0) {
//         return 250; 
//     }

//     int av_len = total_len / word_count;

//     if (av_len <= 3) {
//         return 250;
//     } else if (av_len <= 5) {
//         return 500;
//     } else {
//         return 1000;
//     }
// }

// int main() {
//     string line;

//     while (getline(cin, line)) {
//         int dif = solve(line);
//         cout << dif << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int solve(string line) {
    int word_count = 0, total_len = 0;
    bool has_dot = false, invalid_word = false; 

    istringstream words(line);  
    string word; 



    while (words >> word) {


        invalid_word = false; 
        has_dot = false; 

        for (char lettr: word) {

            if (lettr == '.') {
                
                if (!has_dot) has_dot = true; 
                else {
                    invalid_word = true;
                    break; 
                }

            }

            if (!((lettr >= 'a' && lettr <= 'z') || (lettr >= 'A' && lettr <= 'Z')) && lettr != '.') {
                invalid_word = true; 
                break; 
            }
        }

        if (has_dot && word.size() == 1) invalid_word = true; 

        if (!invalid_word) {
            word_count++;

            total_len += word.size(); 
            if (has_dot) total_len--; 
        }
    }

    if (word_count == 0) {
        return 250;
    }

    int av_len = total_len / word_count;

    if (av_len <= 3) {
        return 250;
    } 
    else if (av_len <= 5) {
        return 500;
    } 
    else {
        return 1000;
    }
}

int main() {
    string line;

    while (getline(cin, line)) {
        int difficulty = solve(line);
        cout << difficulty << endl;
    }

    return 0;
}
