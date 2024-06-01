#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <sstream>
#include <cstring>
#include <fstream>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {


}

int main() {
    fastio;

    ifstream infile("input.txt");
    if (!infile.is_open()) {
        cerr << "Failed to open input file" << endl;
        return 1;
    }
    cin.rdbuf(infile.rdbuf());

    // Output to a file (optional)
    // ofstream outfile("output.txt");
    // cout.rdbuf(outfile.rdbuf());

    int t; // Default to 1 test case, change as needed
    cin >> t;  // Uncomment if multiple test cases are present in input
    for (int i=0; i<t; i++) {
        solve();
    }

    return 0;
}