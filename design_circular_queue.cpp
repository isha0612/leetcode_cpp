class MyCircularQueue {
public:
    queue<int> q;
    int k;
    
    MyCircularQueue(int k) {
        this->k = k;
    }
    
    bool enQueue(int value) {
        if(q.size() == k) return false;
        q.push(value);
        return true;
    }
    
    bool deQueue() {
        if(q.size() == 0) return false;
        q.pop();
        return true;
    }
    
    int Front() {
        return q.size() == 0 ? -1 : q.front();
    }
    
    int Rear() {
        return q.size() == 0 ? -1 : q.back();
    }
    
    bool isEmpty() {
        return q.empty();
    }
    
    bool isFull() {
        return q.size() == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
