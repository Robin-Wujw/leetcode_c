class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		unordered_map<int,int> Dict ;
		int maxLen = 0;
		int pointer= 0;
		int len  = s.length();
	    for(int i = 0;i<len;i++)
			Dict[s[i]]	=-1;	
		for(int i=0;i<len;i++)
		{
			if(Dict[s[i]] >= pointer)	 
				pointer = Dict[s[i]]+1;
			Dict[s[i]]=i;
			maxLen = max(i - pointer +1,maxLen);
		}
		//maxLen = max(i - pointer +1,maxLen);
	      	return maxLen;	
	}
};
