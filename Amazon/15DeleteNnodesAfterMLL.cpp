/*Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        Node* temp = head;
        while(temp){
            int m = M;
            
            while(--m and temp!=NULL) {
                temp = temp->next;
            }
            int n = N;
            
            Node* prev = temp;
            
            while(temp!=NULL and n--){
                temp = temp->next;
            }
            if(prev!=NULL){
               temp = temp ? temp->next : NULL;
                prev->next = temp;
            }
        }
    }
};