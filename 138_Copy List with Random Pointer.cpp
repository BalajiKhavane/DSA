/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return head;
        }

        unordered_map<Node* , Node*> umap;
        Node *newHead = new Node(head->val);
        Node *oldTemp = head->next;
        Node *newTemp = newHead;

        umap[head] = newHead;

        while(oldTemp != NULL){
            Node *copyNode = new Node(oldTemp->val);
            umap[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head; newTemp = newHead;
        while(oldTemp != NULL){
            newTemp->random = umap[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};