class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> countMap;
        for (const auto& num : nums) {
            countMap[num]++;
        }
        vector<pair<int, int>> frequencies;
        for (const auto& [num, freq] : countMap) {
            frequencies.push_back({freq, num});
        }

        sort(frequencies.rbegin(), frequencies.rend());
        vector<int> frequentElem;

        for (int i = 0; i < k; i++) {
            frequentElem.push_back(frequencies[i].second);
        }

        return frequentElem;
    }
};