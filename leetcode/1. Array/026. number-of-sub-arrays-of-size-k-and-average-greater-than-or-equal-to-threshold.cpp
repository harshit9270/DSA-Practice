// Optimized O(n)
class Solution {
public:
      int numOfSubarrays(vector<int>& a, int k, int threshold) {
        int n=a.size();
        int count=0;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
            
        }
        if((sum/k)>=threshold)
        {
            count++;
        }
        for(int i=k;i<n;i++)
        {
            sum+=a[i];
            sum-=a[i-k];
            int res=sum/k;
            if(res>=threshold)
            {
                count++;
            }
        }
            
        return count;
    }
};