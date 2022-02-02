class Solution {
public:
    string removeDuplicates(string s) {
     int i=0,n=s.length();
       stack<char> st;
        
        for(i=0;i<n;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if(st.top()==s[i])
               st.pop();
                else st.push(s[i]);
                
            }
        }
        string str;
        while(!st.empty())
        {
            str=st.top()+str;
            st.pop();
        }
        return str;
        
    }
};