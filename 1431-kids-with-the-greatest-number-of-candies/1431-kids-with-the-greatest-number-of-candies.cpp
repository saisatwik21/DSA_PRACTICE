class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> results;
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(candies[i]>max)
            {
                max=candies[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                results.push_back(true);
            }
            else
            {
                results.push_back(false);
            }
        }
        return results;
        
        
        
    }
};