/*Given two rectangles, find if the given two rectangles overlap or not.
 A rectangle is denoted by providing the x and y coordinates of two points:
  the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are
   considered overlapping. (L1 and R1 are the extreme points of the first rectangle
    and L2 and R2 are the extreme points of the second rectangle).
    
Input

L1=(0,10)
R1=(10,0)
L2=(5,5)
R2=(15,0)
Output:
1
Explanation:
The rectangles overlap.

*/


class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // code here
        if(l1[0]>r2[0] || l2[0]> r1[0]){
            return false;
        }
        if(r1[1]>l2[1] || r2[1]>l1[1]){
            return false;
        }
        return true;
    }
};
