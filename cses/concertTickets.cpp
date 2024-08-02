#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
    long n, m, ref, index;
    cin >> n >> m;
    vector<long> tickets, costumers; 

    for (int i = 0; i < n; i++) {
        cin >> ref; 
        tickets.push_back(ref);
    }
    sort(tickets.begin(), tickets.end());
    
    for (int i = 0; i < m; i++) {

        cin >> ref;

        vector<long>::iterator it = upper_bound(tickets.begin(), tickets.end(), ref);
        
        if (it == tickets.begin()) {
            cout << -1 << endl; 
        } 
        else {
            index = distance(tickets.begin(), it);
            cout << tickets.at(index - 1) << endl; 
            tickets.erase(tickets.begin() + (index - 1));
        }
    }   
}