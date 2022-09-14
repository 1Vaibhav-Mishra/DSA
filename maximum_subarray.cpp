class Solution 
{
    public:
        int maxSubArray(vector<int>& n) 
            { int sum = 0, m = n[0]; 
        for(int i=0;i<n.size();i++){
            sum += n[i];
             m = max(m,sum);
            if(sum < 0) sum = 0;
                }
        
        return m;
            }   
};