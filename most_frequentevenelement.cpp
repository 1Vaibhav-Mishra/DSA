class Solution
{
    public:
        int mostFrequentEven(vector<int>& nums) 
            {   map<int,int>m;
                for(auto i:nums)
                {   if(i%2==0)
                    m[i]++;
                }
                int ret=-1;
                int c=0;
                for(auto &it:m)
                {
                    if(it.second>c)
                    {
                        c=it.second;
                        ret=it.first;
                    }
                }
             return ret;
            }
};