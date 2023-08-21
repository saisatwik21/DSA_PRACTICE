class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            if(s>maxi)
                maxi=s;
            if(s<0)
                s=0;
        }
        return maxi;
        
        
    }
};