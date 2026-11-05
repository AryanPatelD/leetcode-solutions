class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int max = 2*nums.size();
        int min = nums.size();
        nums.resize(max);  
        for(int i=min;i<max;i++)
        {
            nums[i] = nums[i-min];
        }
        return nums;
    }
};