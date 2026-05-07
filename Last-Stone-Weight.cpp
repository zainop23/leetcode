1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> pq(stones.begin(), stones.end());
5        while(pq.size()>1){
6            int n1 = pq.top();
7            pq.pop();
8            int n2 = pq.top();
9            pq.pop();
10            pq.push(n1-n2);
11        }
12        return pq.top();
13
14    }
15};