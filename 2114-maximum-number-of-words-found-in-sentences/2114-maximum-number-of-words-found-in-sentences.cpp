class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,i=0,l=sentences.size();
        
        for(int i=0;i<l;i++)
        {
           string sen=sentences[i];
            int num=0,flag=0;
            for(int j=0;j<sen.length();j++)
            {
               if(sen[j]==' ')
                   num++;
                if(sen[j]!=' ')
                    flag=1;
            }
            if(flag==1)
                num++;
            
            if(max<num)
                max=num;
            
            
        }
        return max;
    }
};