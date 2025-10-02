class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n  = nums.size();
        int sum = 0;
        int count = 0;
        int preSum = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        for(auto it : nums) {
            preSum += it;
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] += 1;
        }

        return count;
    }
};
