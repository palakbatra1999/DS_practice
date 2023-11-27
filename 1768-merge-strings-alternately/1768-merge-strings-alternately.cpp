class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i=0,j=0;
        int l= a.length(), v=b.length();
        int g;

        string str="";

        if (l<v)
        g=l;
        else g=v;

        while(i<g)
        {
            str = str + a[i]+b[i];
            i++;
            
        }
        
        if(i<l)
        {
            str = str + a.substr(i,l-i+1);
        }
        else str = str + b.substr(i,v-i+1);
        
        return str;

        
    }
};