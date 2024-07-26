#include <iostream> 
#include <set> 
#include <algorithm>

using namespace std; 

int main() {
    long n, ref; 
    set<long> vec; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ref; 
        vec.insert(ref); 
    }

    cout << vec.size();
}