#include <iostream>
#include <climits>
using namespace std;
class Solution
{
public:
    int myAtoi(string str)
    {
        int numbers = 0;
        int sign    = 1;
        if (str.length()== 0)
            return 0;
        long result  = 0;
        int start   = 0;
        int end     = str.length();
        int    i =0;
        while ( i < end && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'||str[i]=='0'))
            ++i;
        if (str[i]   =='+')
        {
            sign    = 1;
            start   = i+1;
            i       = start;
        }
        else if (str[i]   =='-')
        {
            sign    = -1;
            start   = i+1;
            i       = start;
        }
        for(i;i<end;i++)
        {
            char value;
            value=(str[i]);
            if(!isdigit(str[i]))
                break;
            if(value>='0'&&value<='9')
            {
                result=result*10+value-'0';
            }
            else
                break;
        }
        result = result*sign;
        if (result >2147483647)
            result = 2147483647;
        else if (result <-2147483648)
            result = -2147483648;
        return result;
    }
};


int main()
{
    Solution(a);
    string str=" +-12 ";
    cout<<a.myAtoi(str);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}









































































