#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string convert(string s,int numRows)
    {
        string result ="";
        string p = "ab";
        int slength   = s.length();
        int n         = numRows;
        int cycle     = 2 * n -2;
        if  (n == 1)
            return s;
        int x 		  =	0;  // 周期
        int i         = 0; //行数
        while (result.length()<slength)
        {
            if (cycle * x + i >slength-1)
            {
                i +=1;
                x = 0;
            }
            int zig =cycle * x + i;
            int zag =cycle * (x+1) - i ;
            if (i == 0 || i == n-1)
                result += s[zig];
            else
            {
                if (zag > slength -1)
                    result += s[zig];
                else
                    {
                    p[0]   = s[zig];
                    p[1]   = s[zag];
                    result += p;
                }
            }
            x +=1;
        }
        return result;
    }
};
int main()
{
    Solution s;
    string a = "PAYPALISHIRING";
    cout <<s.convert(a,3);
}
