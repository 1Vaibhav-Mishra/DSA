class Solution 
{
    public:
        int maxArea(vector<int>& height) 
            {
                //auto left=0;
                //auto right=height.size()-1;
                int i=0,j=height.size()-1;
                auto a=0,area=0;
                while(i<j)
                    {
                        area=(j-i)*min(height[i],height[j]);
                        a=max(a,area);
                        if(height[i]<height[j])
                            {
                                
                                i++;
                            }
                        else
                            {
                                
                                j--;
                            }
                    }
            return a;
        
            }
};