class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ms,mt;
        int h=s.length(),k=t.length();
        if(h!=k)
        return false;

        int i;
        for(i=0;i<h;i++)
        {
            ms[s[i]]++;
            mt[t[i]]++;
        }

        for(auto x: ms)
        {
            if(mt[x.first]!=x.second)
            return false;
        }

        return true;


        
    }
};