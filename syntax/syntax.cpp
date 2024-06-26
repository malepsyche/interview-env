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
    int s = 0;
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
    array.resize(s, 0);

    bool comp(vector<int> &a,vector<int> &b) {
	    return a[1]<b[1];
    }
    sort(array.begin(), array.end(), comp);

    // heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;
    minHeap.top();
    minHeap.push();
    minHeap.pop();
    // heap (ListNode*)
    struct Compare {
        bool operator()(ListNode* behind, ListNode* ahead) {
            return ahead->val < behind->val;
        }
    };
    priority_queue<int, vector<int>, Compare> minHeap;

    // queue
    queue<int> q;
    q.front();
    q.pop();
    q.push();

}