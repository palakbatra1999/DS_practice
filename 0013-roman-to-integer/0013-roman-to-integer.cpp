class Solution {
public:
    int romanToInt(string A) 
    {
        int sum=0,i;
    int len=A.length();
    for(i=0;i<len;i++)
    {
        if(A[i]=='M')
        sum=sum+1000;
        else if(A[i]=='D')
        sum=sum+500;
       else if(A[i]=='C')
       {
           if(A[i+1]=='D')
            {
                sum=sum+400;
                i++;
            }
            else if(A[i+1]=='M')
            {
                sum=sum+900;
                i++;
            }
            else sum+=100;
           
       }
       
        else if(A[i]=='L')
        sum=sum+50;
        else if(A[i]=='I')
        {
                    if(A[i+1]=='X')
           {
                sum=sum+9;
                i++;
           }
            else if(A[i+1]=='V')
            {
                 sum=sum+4;i++;
            }
            else sum=sum+1;
            
        }
         else if(A[i]=='X')
       {
           if(A[i+1]=='M')
           {
               i++;
               sum+=990;
           }
           else if(A[i+1]=='C')
           {
               i++;
               sum+=90;
           }
           else if(A[i+1]=='L')
           {
               i++;
               sum+=40;
           }
           
           
           
           
           else  sum=sum+10;
       }
         else if(A[i]=='V')
        sum=sum+5;
        
    }
    return sum;
        
    }
};