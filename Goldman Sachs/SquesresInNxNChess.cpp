/*Find total number of Squares in a N*N cheesboard.

 

Example 1:

Input:
N = 1
Output:
1
Explanation:
A 1*1 chessboard has only 1 square.*/
class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        if(n==1) return 1;
        return (n*n) + squaresInChessBoard(n-1);
    }
};