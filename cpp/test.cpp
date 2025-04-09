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

// void merge(vector<int>&nums, int l, int m, int r) {
//     vector<int> left(nums.begin()+l, nums.begin()+m+1);
//     vector<int> right(nums.begin()+m+1, nums.begin()+r+1);
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int i = l;
//     while (leftIndex < left.size() && rightIndex < right.size()) {
//         if (left[leftIndex] < right[rightIndex]) {
//             nums[i] = left[leftIndex];
//             leftIndex++;
//         }
//         else {
//             nums[i] = right[rightIndex];
//             rightIndex++;
//         }
//         i++;
//     }
//     while (leftIndex < left.size()) {
//         nums[i] = left[leftIndex];
//         leftIndex++;
//         i++;
//     }
//     while (rightIndex < right.size()) {
//         nums[i] = right[rightIndex];
//         rightIndex++;
//         i++;
//     }
// }

// vector<int> mergeSort(vector<int>& nums, int l, int r) {
//     if (l==r) return nums;
//     int m = (l+r) / 2;
//     mergeSort(nums, l, m);
//     mergeSort(nums, m+1, r);
//     merge(nums, l, m, r);
//     return nums;
// }

// void solve(vector<int>& nums) {
//     mergeSort(nums, 0, nums.size()-1);
// }

// int main() {
//     fastio;

//     ifstream infile("input.txt");
//     if (!infile.is_open()) {
//         cerr << "Failed to open input file" << endl;
//         return 1;
//     }
//     cin.rdbuf(infile.rdbuf());

//     // Output to a file (optional)
//     // ofstream outfile("output.txt");
//     // cout.rdbuf(outfile.rdbuf());

//     int t; 
//     cin >> t;  
//     for (int i=0; i<t; i++) {
//         int n;
//         cin >> n;
//         vector<int> nums(n);
//         for (int i=0; i<n; i++) {
//             cin >> nums[i];
//             // cout << nums[i];
//         }
//         // cout << endl;
//         solve(nums);
//         for (int i=0; i<n; i++) cout << nums[i];
//         cout << endl;
//     }

//     return 0;
// }

class Solution {
public:
    void solve() {
    }

};



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

    int t; 
    cin >> t;  
    for (int i=0; i<t; i++) {
        int r;
        cin >> r;
        int c;
        cin >> c;

        Solution* sol = new Solution();

    }

    return 0;
}