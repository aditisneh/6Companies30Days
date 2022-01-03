/*Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.

Example 1:

Input : 
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.*/
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0,end=0;
        long long p =1;
        int count=0;
        for(start=0,end=0;end<n;end++){
            //increment product
            p*=a[end];
            
            
            while(p>=k && start<end)
                p/=a[start++];
            
            if(p<k)
        {    int length = 1+ end-start;
            
            count+= length;
        }
        }
        return count;
    }
};