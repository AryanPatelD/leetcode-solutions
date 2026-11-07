class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> sum(gain.size()+1,0);
        int max1 = 0;
        for(int i=0;i<gain.size();i++)
        {
            sum[i+1] = sum[i] + gain[i];
            max1 = max(max1,sum[i+1]); 
        }
        return max1;
    }
};