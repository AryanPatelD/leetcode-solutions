class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        int temp = min;
        vector<int> ans;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            while (temp < nums[i]) {
                ans.push_back(temp);
                count++;
                temp++;
            }
            temp = nums[i] + 1;
        }

        return ans;
    }
};