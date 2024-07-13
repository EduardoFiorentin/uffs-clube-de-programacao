#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n, flag, sum_op = 0;
    cin >> n; 

    long *arr = (long*) calloc(n+1, sizeof(long)); 

    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i]; 
        if (arr[i] < arr[i-1]) {
            flag = abs(arr[i] - arr[i-1]);
            arr[i]+= flag;
            sum_op += flag; 
        }
    }
    cout << sum_op << "\n"; 
}
