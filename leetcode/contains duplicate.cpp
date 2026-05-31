class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<long long> hashset;

        for (int i = 0; i < nums.size(); i++){
            if (hashset.count(nums[i]) == 1){
                return true;
            }
            hashset.insert(nums[i]);
        }
        return false;
    }
};