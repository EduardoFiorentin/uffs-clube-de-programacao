#include <iostream> 

int main() {
    int h1, m1, h2, m2, mins; 
    while (true) {
        std::cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break; 
        if (h1 == h2) {
            if (m1 > m2) mins = (24*60+h2*60+m2)-(h1*60+m1);
            else if (m1 < m2) mins = m2 - m1;
        }
        else if (h1 > h2) {
            mins = (24*60+h2*60+m2)-(h1*60+m1); 
        }
        else mins = (h2*60 + m2)-(h1*60+m1); 
        std::cout << mins << std::endl; 
    }
    return 0; 
}