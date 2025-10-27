#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace std::chrono;

int main() {
    string fileName = "codes.txt";

    vector<string> v;
    list<string> l;
    set<string> s;

    cout << setw(10) << "Operation" 
         << setw(10) << "Vector"
         << setw(10) << "List" 
         << setw(10) << "Set" << endl;

    auto start = 
    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
