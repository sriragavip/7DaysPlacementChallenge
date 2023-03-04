#include <queue>
vector<pair<int, int>> satisfiedHeap(int n, vector<pair<int, int>> &operations) {
    vector<pair<int, int>> answer;
    priority_queue<int> heap;

    for (int i = 0; i < operations.size(); i++) {
        int x = operations[i].second;

        if (operations[i].first == 1) {
            heap.push(-x);
            answer.push_back({1, x});
        } else if (operations[i].first == 2) {
            while (!heap.empty() && -heap.top() < x) {
                heap.pop();
                answer.push_back({3, -1});
            }
            if (heap.empty() || -heap.top() > x) {
                heap.push(-x);
                answer.push_back({1, x});
            }
            answer.push_back({2, x});
        } else {
            if (heap.empty()) {
                answer.push_back({1, 0});
            } else {
                heap.pop();
            }
            answer.push_back({3, -1});
        }
    }
    return answer;
}
 