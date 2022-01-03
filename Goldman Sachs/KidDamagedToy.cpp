
#include <iostream>
using namespace std;

// n ==> Size of circle
// m ==> Number of items
// k ==> Initial position
int lastPosition(int n, int m, int k)
{
	
	return ((m+k-1)%n>0)?(m+k-1)%n : n;
}

int main()
{
	int n = 7;
	int m = 12;
	int k = 3;
	cout << lastPosition(n, m, k);
	return 0;
}
