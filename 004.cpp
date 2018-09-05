class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2)
    {
        int m=nums1.size();
        int n=nums2.size();
        if (m > n) {
            vector<int> tmp = nums1;
            nums1 = nums2;
            nums2 = tmp;
        }
        m=nums1.size();
         n=nums2.size();
        if(n==0)
        {
            return 0.0;
        }
        if(m==0)
        {
            if(n%2==0)
            {
                return (nums2[n/2-1]+nums2[n/2])/2.0;
            }
            else
                return nums2[(n)/2];
        }
        int iMin = 0;
        int iMax = m;
        int half = (m+n+1)/2;
        while (iMin<=iMax)
        {
            int i = (iMin+iMax)/2;
            int j = half-i;
            if(i < iMax&&nums2[j-1]>nums1[i])
                iMin = i+1;
            else if (i>iMin&&nums1[i-1]>nums2[j])
                iMax = i-1;
            else
            {
                int maxLeft,minRight;
                if (i == 0 && j == 0) maxLeft = 0;
                else  if (i == 0 )
                    maxLeft = nums2[j-1];
                else if (j ==0)
                    maxLeft = nums1[i-1];
                else
                    maxLeft = max(nums1[i-1],nums2[j-1]);
            
            if(i==m&&j==n)
                minRight=0;
            if (i==m)
                minRight = nums2[j];
            else if (j == n)
                minRight =nums1[i];
            else
                minRight = min(nums1[i],nums2[j]);
            if (((m+n) % 2) ==0)
                return  ( maxLeft +  minRight)/2.0;
            else
                return maxLeft;
        }
        }
        return 0.0;
    }
};