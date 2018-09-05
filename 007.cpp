//
// Created by robin on 18-8-21.
//

class Solution
{
public:
    int reverse(int x)
    {
     int result = 0;
     string s ;
     if (x > 0)
        sign = 1;
     else:
        sign = -1;
     while (x >0)
     {
      value = x %10;
      result= result*10+value;
      x     =  int(x/10);
     }
        if (result > 2147483647 || result<-2147483648)
            return 0
        return result *sign ;
    }
};