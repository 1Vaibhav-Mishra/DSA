class Solution {
public:
    int trap(vector<int>& height) 
    {   int temp;
        if(height.empty())
            return 0;
        int sizee=height.size();
        vector<int>left(sizee),right(sizee);
        left[0]=height[0];
        right[sizee-1]=height[sizee-1];
        for(auto i=1;i<sizee;i++)
        {   
             left[i]=max(left[i-1],height[i]);
             
            
        }
        for(auto i=sizee-2;i>=0;i--)
        {   
            right[i]=max(right[i+1],height[i]);
             
            
        }
     int f=0;
     for(auto i=0;i<sizee;i++)
     {  
         
         f+=min(left[i],right[i])-height[i];
     }
     
        
      return f;  
    }
};