class Solution {
public:
    int maxDepth(string s) {
        int i=0,l=s.length(),count=0,d=0;
        
        
        while(i<l)
        {
            if(s[i]=='(')
             {   
               //  st.push(s[i]);
                
                 count++;
                 d=max(d,count);
             }
            else if(s[i]==')')
            {
            count--;
            }
            // d=max(d,count);
            i++;
        }
        // d=max(d,count);
        return d;
            
    }
};