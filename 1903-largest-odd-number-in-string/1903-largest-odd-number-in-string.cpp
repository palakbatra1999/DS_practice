class Solution {
public:
    int find(string num)
    {
        int l=num.length(),i;
        for(i=l-1;i>=0;i--)
        {
            //int c=(int)num[i]-48;
            if(((int)num[i]-48)%2!=0)
                return i;
            
        }
        return -1;
    }
    string largestOddNumber(string num) {
        int l=num.length(),i;
        
      //  string str="";
        
        int index=find(num);
        
       num.resize(index+1);
        return num;
        
    }
};