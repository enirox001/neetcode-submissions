class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> frequent;
        unordered_map<int, int> valmap;
        for (const auto &val : nums) {
            if (valmap[val]) {
                valmap[val]++;
            } else {
                valmap[val] = 1;
            }
        }

    priority_queue<pair<int, int>> pq;
    for (const auto &[key, val] : valmap) {
        pq.push({val, key});
    }

    for (int i = 0; i < k; ++i) {
        frequent.push_back(pq.top().second);
        pq.pop();
    }

    return frequent;
    }
};