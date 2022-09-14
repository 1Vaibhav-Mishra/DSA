class Solution {
public:
    int partitionString(string s) {
        map<char,int> m;
        int counter=1;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]])
            {
                m.clear();
                counter++;
            }
            m[s[i]]++;
        }
        return counter;
    }
};