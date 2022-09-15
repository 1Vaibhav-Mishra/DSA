class Solution 
{
    public:
        int minGroups(vector<vector<int>>& interval) 
        {   
            vector<pair<int,int>> v;
            for(auto value:interval)
                {
                    v.push_back({value[0],1});
                    v.push_back({value[1]+1,-1});
                    
                }
            sort(v.begin(),v.end());
            int c=0,maxx=1;
            for(pair<int,int>value:v)
                {
                    c+=value.second;
                    maxx=max(c,maxx);
                    
                }
            return maxx;
        }
};