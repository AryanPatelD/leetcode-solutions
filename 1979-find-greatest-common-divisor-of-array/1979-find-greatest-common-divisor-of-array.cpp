class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        auto result = minmax_element(nums.begin(), nums.end());
        int tar = 1;
        int min = *result.first;
        int max = *result.second;
        int i, t;
        int c = min;
        bool sdf = false;

        for(i = 2; i <= c; i++)
        {
            if(min % i == 0 && max % i == 0)
            {
                sdf = true;
                t = i;
                if(tar <= t)
                {
                    tar = t;
                }
            }
        }

        if(sdf)
        {
            return tar;
        }
        else
        {
            return 1;
        }
    }
};