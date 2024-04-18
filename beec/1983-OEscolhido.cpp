#include <iostream> 

using namespace std; 

int main() {

    int rep, A;
    int maiorA = -1; 
    double N;
    double maiorN = -1; 
    cin >> rep; 

    for (int i = 0 ; i < rep ; i++)
    {
        cin >> A; cin >> N; 
        if (N > maiorN) {
            maiorN = N;
            maiorA = A; 
        }
    }
    if (maiorN < 8) cout << "Minimum note not reached" << endl;
    else cout << maiorA << endl; 
    return 0; 
}