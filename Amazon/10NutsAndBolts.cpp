/*Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

Comparison of a nut to another nut or a bolt to another bolt is not allowed. It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
The elements should follow the following order ! # $ % & * @ ^ ~ .*/
class Solution{
public:	

    int partition(char arr[], int low, 
            int high, char pivot)
{
    int i = low;
    char temp1, temp2;
    
    for(int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
            i++;
        } 
        else if(arr[j] == pivot)
        {
            temp1 = arr[j];
            arr[j] = arr[high];
            arr[high] = temp1;
            j--;
        }
    } 
    temp2 = arr[i];
    arr[i] = arr[high];
    arr[high] = temp2;

    // Return the partition index of 
    // an array based on the pivot 
    // element of other array.
    return i;
}

    void quicksort(char nuts[], char bolts[], int s, int e){
        if(s<e) {
        
        //first we create partition of nuts using bolts and set pivot as bolts's last element
        int pivot = partition(nuts,s,e,bolts[e]);
        
        partition(bolts,s,e,nuts[pivot]);
        
        quicksort(nuts,bolts,s,pivot-1);
        quicksort(nuts,bolts,pivot+1, e);
    }
    }

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    quicksort(nuts,bolts,0,n-1);
	}

};