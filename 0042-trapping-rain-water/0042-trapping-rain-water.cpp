#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        int water=0;
        
        
        for(int i=0;i<height.size();i++)
        {
            if(i==0)
            {
                leftmax[0]=height[0];
                rightmax[n-1]=height[n-1];
            }
            else
            {
                leftmax[i]=max(height[i],leftmax[i-1]);
                rightmax[n-i-1]=max(height[n-i-1],rightmax[n-i]);
            }

        }
        for(int i=0;i<n;i++)
        {
            water=water+min(leftmax[i],rightmax[i])-height[i];
        }
        return water;
        
        
    }
};