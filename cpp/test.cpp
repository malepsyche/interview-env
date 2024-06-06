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
    vector<vector<bool>> surrounded;

    void solve(vector<vector<char>>& board) {
        surrounded.resize(board.size(), vector<bool>(board[0].size(), true));
        for (int r=0; r<board.size(); r++) {
            if (board[r][0] == 'O') DFS(board, r, 0);
            if (board[r][board[0].size()-1] == 'O') DFS(board, r, board[0].size()-1);
        }
        for (int c=0; c<board[0].size(); c++) {
            if (board[0][c] == 'O') DFS(board, 0, c);
            if (board[board.size()-1][c] == 'O') DFS(board, board.size()-1, c);
        }
        for (int r=0; r<board.size(); r++) {
            for (int c=0; c<board[0].size(); c++) {
                if (surrounded[r][c]) board[r][c] = 'X';
            }
        }
    }

    void DFS(vector<vector<char>>& board, int r, int c) {
        if (
            r < 0 || r >= board.size() ||
            c < 0 || c >= board[0].size() ||
            board[r][c] == 'X' || 
            !surrounded[r][c]
        ) return;

        surrounded[r][c] = false;
        DFS(board, r+1, c);
        DFS(board, r-1, c);
        DFS(board, r, c+1);
        DFS(board, r, c-1);
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
        vector<vector<char>> board(r, vector<char>(c));
        for (int r=0; r<board.size(); r++) {
            for (int c=0; c<board[0].size(); c++) {
                cin >> board[r][c];
                cout << board[r][c];
            }
            cout << endl;
        }
        // cout << endl;
        Solution* sol = new Solution();
        sol->solve(board);
        for (int r=0; r<board.size(); r++) {
            for (int c=0; c<board[0].size(); c++) {
                cout << board[r][c];
            }
        }
        cout << endl;
    }

    return 0;
}