#include <iostream>
#include <set>
#include <algorithm>
using namespace std; 
int main() {
    long n, m, ref, index;
    cin >> n >> m;
    multiset<long> tickets, costumers; 
 
    for (int i = 0; i < n; i++) {
        cin >> ref; 
        tickets.insert(ref);
    }
    
    for (int i = 0; i < m; i++) {
 
        cin >> ref;
 
        multiset<long>::iterator it = tickets.upper_bound(ref);
        
        if (it == tickets.begin()) {
            cout << -1 << endl; 
        } 
        else {
            it--; 
            cout << *it << endl; 
            tickets.erase(it); 
        }
    }   
}