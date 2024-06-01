#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    vector<int> array;
    int e = 0;
    int i = 0;

    // ListNode
    struct ListNode {
        int val;
        ListNode* next;
    };

// _____________________________________________________________________________________________________________________________
    
    // vector
    array.push_back(e);
    array.erase(remove(array.begin(), array.end(), e), array.end());
    array.erase(array.begin()+i);
    sort(array.begin(), array.end());

    // heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;
    minHeap.top();
    minHeap.push();
    minHeap.pop();

    struct Compare {
        bool operator()(ListNode* behind, ListNode* ahead) {
            return ahead->val < behind->val;
        }
    };
    priority_queue<int, vector<int>, Compare> minHeap;
    

}