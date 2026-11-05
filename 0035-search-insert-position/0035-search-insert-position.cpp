class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int final = nums.size()-1;
        
        while(start<=final)
        {
            int mid = (final+(final-start))/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                final = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};