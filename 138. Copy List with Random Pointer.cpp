class Solution {
public:
    void insert(Node* &head, Node* &tail, int val){
        
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }

    }
    Node* copyRandomList(Node* head) {
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp){

            insert(cloneHead, cloneTail, temp -> val);
            temp = temp -> next;

        }

        unordered_map<Node*, Node*> mapping;

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode){
            mapping[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode){
            cloneNode -> random = mapping[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        return cloneHead;
    }
};