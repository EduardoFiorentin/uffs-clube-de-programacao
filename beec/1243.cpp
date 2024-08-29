#include <iostream>
#include <stdio.h>
#include <string>
#include <regex> 

using namespace std; 

int main() {
 
    string line, word;
    smatch match;
    double sum_length = 0, avarage = 0; 
    int num_words; 
    regex word_regex(R"(\b[a-zA-Z]+\.?\b)");

    cin.ignore();


    while (getline(cin, line)) {
        // cout << line << endl; 


        auto words_begin = sregex_iterator(line.begin(), line.end(), word_regex);
        auto words_end = sregex_iterator(); 
        num_words = 0; 

        for (auto i = words_begin; i != words_end; ++i) {
            match = *i;
            word = match.str();
            
             
            // cout << word << word.size() << endl; 

            sum_length += word.size(); 
            num_words++; 

        }

        if (num_words == 0) cout << 250 << endl;
        else cout << sum_length / num_words << endl; 
    }

}