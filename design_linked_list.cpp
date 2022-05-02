class MyLinkedList {
public:
    struct node {
        int val;
        node *next;
    } *head;
    int size;
    
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        int i = 0;
        node *temp = head;
        while(i != index) {
            temp = temp->next;
            i++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        node *temp = new node();
        temp->val = val;
        temp->next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        size++;
        node *temp = new node();
        temp->val = val;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            return;
        }
        node *itr = head;
        while(itr->next) {
            itr = itr->next;
        }
        itr->next = temp;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;
        if(index == 0) {
            addAtHead(val);
            return;
        }
        if(index == size) {
            addAtTail(val);
            return;
        }
        size++;
        node *temp = new node();
        temp->val = val;
        temp->next = NULL;
        node *itr = head;
        int i = 0;
        while(i != index - 1) {
            itr = itr->next;
            i++;
        }
        temp->next = itr->next;
        itr->next = temp;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        size--;
        if(index == 0) {
            node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        node *itr = head;
        int i = 0;
        while(i < index - 1) {
            itr = itr->next;
            i++;
        }
        node *temp = itr->next;
        itr->next = temp->next;
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
