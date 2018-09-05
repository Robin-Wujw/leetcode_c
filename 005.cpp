int longestSize = 0;
int longestStart= 0;
class Solution
{
public:
	string longestPalindrome(string s)
	{
        string n ;
        for(int i=0;i <s.length();i++)
		{
		checkOddPalindrome(s,i);
		checkEvenPalindrome(s,i);
		}
		int j = longestStart;
		for(int i=0;i<longestSize+1;i++)
 		{ 
            n = n+s[j];
          	j = j+1;
        }
        return n;
	}
	void checkOddPalindrome(string s,int i
			int start = i;
			int end   = i;
			while(start>=1&&end<=s.length()-1&&s[start-1]==s[end+1])						
			{
				start -= 1 ;
				end   += 1 ;
			}
		if(end - start > longestSize)
		{
			longestSize = end - start;
			longestStart= start;
		}

	}
	void checkEvenPalindrome(string s,int i)
	{
		int start = i;
			int p     = s.length()-1;
			int end   = min(i + 1 ,p);
		while(start>=1 &&end<s.length()-1&&s[start-1] == s[end +1]&&s[start]==s[end])
		{
			start -=1;
			end   +=1;
		}			
		if(end - start > longestSize && s[start]==s[end])
		{
			longestSize = end - start;
			longestStart= start;
		}

		}
};