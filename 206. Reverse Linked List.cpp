// take prev = NULL
// take curr = head
// take for = curr -> next
// point curr -> bext to prev, then prev = curr, curr = for, for = for -> next

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* current = head;
        ListNode* forward = current -> next;
        ListNode* prev = NULL;

        while(current != NULL){

            current -> next = prev;

            prev = current;
            current = forward;
            if(forward != NULL){
                forward = forward -> next;
            }

        }

        head = prev;
        return head;
    }

};


//OR (Recursive)

class Solution {
public:

    ListNode* reverse(ListNode* prev, ListNode* curr, ListNode* forw){

        if(curr == NULL){
            return prev;
        }

        curr -> next = prev;

        prev = curr;
        curr = forw;
        if(forw != NULL){
            forw = forw -> next;
        }

        return reverse(prev,curr,forw);
    }
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* curr = head;
        ListNode* forw = curr -> next;
        ListNode* prev = NULL;

        head = reverse(prev,curr,forw);
        return head;
    }
};


// OR

class Solution {
public:

    ListNode* reverse(ListNode* head){

        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* newHead = reverse(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return newHead;
    }
    ListNode* reverseList(ListNode* head) {
        
        return reverse(head);

    }
};