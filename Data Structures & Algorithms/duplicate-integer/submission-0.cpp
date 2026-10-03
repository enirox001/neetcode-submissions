class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set nums_set(nums.begin(), nums.end());
        return nums_set.size() != nums.size();
    }
};