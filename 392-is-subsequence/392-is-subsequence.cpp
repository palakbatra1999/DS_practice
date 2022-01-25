class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,l=s.size(),n=t.size();
        
        while(i<l&&j<n)
        {
            if(s[i]==t[j])
            {
                i++;j++;
            }
            else j++;
        }
        if(i==l)
            return true;
        else return false;
    }
};