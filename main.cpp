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

    // first race: READING
    auto start = high_resolution_clock::now();
    ifstream f1(fileName); string code;
    while(f1 >> code) v.push_back(code);
    f1.close();
    auto end = high_resolution_clock::now();
    long long v_read = duration_cast<microseconds>(end - start).count();

    start = high_resolution_clock::now();
    ifstream f2(fileName);
    while(f2 >> code) l.push_back(code);
    f2.close();
    end = high_resolution_clock::now();
    long long l_read = duration_cast<microseconds>(end - start).count();

    start = high_resolution_clock::now();
    ifstream f3(fileName);
    while(f3 >> code) s.insert(code);
    f3.close();
    end = high_resolution_clock::now();
    long long s_read = duration_cast<microseconds>(end - start).count();

    cout << setw(10) << "Read" 
         << setw(10) << v_read 
         << setw(1) << l_read 
         << setw(12) << s_read << endl;

    return 0;
}
