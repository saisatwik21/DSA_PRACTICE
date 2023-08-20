class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                result[i]=nums[i/2];
            }
            else
            {
                result[i]=nums[n+i/2];
            }
            
        }
        return result;
        
    }
};