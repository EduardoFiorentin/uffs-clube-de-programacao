#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    
    std::vector<int> applicants(n);
    std::vector<int> apartments(m);
    
    for (int i = 0; i < n; i++) {
        std::cin >> applicants[i];
    }
    
    for (int i = 0; i < m; i++) {
        std::cin >> apartments[i];
    }
    
    std::sort(applicants.begin(), applicants.end());
    std::sort(apartments.begin(), apartments.end());
    
    int i = 0, j = 0;
    int count = 0;
    
    while (i < n && j < m) {
        if (apartments[j] < applicants[i] - k) {
            j++;
        } else if (apartments[j] > applicants[i] + k) {
            i++;
        } else {
            count++;
            i++;
            j++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}



// 20 21 31 35 39 41 49 74 86 90 -- tamanho que aplics querem

// 4 7 14 24 24 60 82 82 85 95 -- tamanhos aps disponiveis  