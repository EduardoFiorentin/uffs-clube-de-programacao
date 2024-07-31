#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
    long n, x, num=0;
    cin >> n >> x;
    vector<long> weights(n); 

    for (int i = 0; i < n; i++) {
        cin >> weights[i]; 
    }

    sort(weights.begin(), weights.end()); 

    long i = 0, j = n-1;

    while (i < j) {
        if (weights[j] + weights[i] <= x) {
            i++;
            j--; 
        }
        else j--;
        num++;

        if (i == j) num++; 
    }

    cout << num << endl;
}