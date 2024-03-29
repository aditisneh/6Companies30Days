/*Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.*/
int *ans = new int[2];
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        for(int i=1;i<n;i++){
            if(map[arr[i]]>1)
                ans[0] = arr[i];
        }
        for(int i=1;i<=n;i++){
            if(map[i]==0){
                ans[1] = i;
                break;
            }
        }
        return ans;