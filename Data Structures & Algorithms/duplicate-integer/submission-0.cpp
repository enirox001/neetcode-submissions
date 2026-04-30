#include <set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> myset;

        for (auto num : nums) {
            myset.insert(num);
        }

        if (myset.size() != nums.size()) {
            return true;
        } else {
            return false;
        }
    }
};