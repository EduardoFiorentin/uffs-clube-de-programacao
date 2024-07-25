#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>

using namespace std;

// struct P {
//     int x, y;
//     bool operator<(const P &p) {
//         if (x != p.x) return x < p.x;
//         else return y < p.y;
//     }
// };

// void printVectorOfPairs(const std::vector<std::pair<int, int>>& vec) {
//     for (const auto& p : vec) {
//         std::cout << "(" << p.first << ", " << p.second << ")\n";
//     }
// }

bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {

    // vector<int> v = {4,2,5,3,5,8,3};
    
    // for (int i = 0; i < v.size(); i++) cout << v.at(i) << " "; 

    // cout << "\n"; 

    // sort(v.rbegin(), v.rend());

    // for (int i = 0; i < v.size(); i++) cout << v.at(i) << " "; 

    // ordenação de arrays 
    // int n = 7; // array size
    // int a[] = {4,2,5,3,5,8,3};

    // for (int i = 0; i < n; i++) cout << a[i] << " ";
    // cout << "\n"; 

    // sort(a,a+n);
    
    // for (int i = 0; i < n; i++) cout << a[i] << " ";

    // oredenação de strings 
    // string a = "monkey";

    // cout << a << endl;
    // sort(a.begin(), a.end()); 

    // cout << a;

    // vector<pair<int, int>> pairs;

    // pairs.push_back({1, 5});
    // pairs.push_back({2, 3});
    // pairs.push_back({2, 1});
    // pairs.push_back({0, 13});

    // printVectorOfPairs(pairs);
    // cout << endl;

    // sort(pairs.begin(), pairs.end());

    // printVectorOfPairs(pairs);



    // P a{2, 2};
    // P b{3, 3}; 

    // vector<P> vec = {b, a};

    // cout << "1: (" << vec.at(0).x << " " << vec.at(0).y << ")" << "(" << vec.at(1).x << " " << vec.at(1).y << ")";
    // sort(vec.begin(), vec.end());
    // cout << "2: (" << vec.at(0).x << " " << vec.at(0).y << ")" << "(" << vec.at(1).x << " " << vec.at(1).y << ")";

    vector<string> vec; 
    vec.push_back("bbb");
    vec.push_back("aaa");
    vec.push_back("bb");
    vec.push_back("c");

    sort(vec.begin(), vec.end(), comp);

    for (const auto& p : vec) {
        std::cout << p << " ";
    }
}

