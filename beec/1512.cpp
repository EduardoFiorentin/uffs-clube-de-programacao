#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        long N, A, B;
        cin >> N >> A >> B;
        
        if (N == 0 && A == 0 && B == 0)
            break;
        
        long ctA = N / A;
        long ctB = N / B;
        long lcmAB = std::lcm(A, B);
        long common = N / lcmAB;
        
        long totalPainted = ctA + ctB - common;
        
        cout << totalPainted << endl;
    }
    
    return 0;
}