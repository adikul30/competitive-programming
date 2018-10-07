class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0,j = height.size()-1;
        int max_water = 0;
        while(i<j)
        {
            int h = min(height[i],height[j]);
            max_water = max(max_water,h*(j-i));
            while(height[i]<=h && i<j)
            {
               // cout<<"less"<<endl;
                i++;
            } 
            while(height[j]<=h && i<j)
            {
               // cout<<"more"<<endl;
                j--;
            }
            
        }
        return max_water;
    }
};