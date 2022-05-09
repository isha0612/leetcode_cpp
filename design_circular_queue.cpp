class MyCircularQueue {
public:
    vector<int> q;
    int front = -1, rear = -1;
    int k;
    
    MyCircularQueue(int k) {
        q.resize(k);
        this->k = k;
    }
    
    bool enQueue(int value) {
        if(front == (rear + 1) % k) return false;
        rear = (rear + 1) % k;
        q[rear] = value;
        if(front == -1) front++;
        return true;
    }
    
    bool deQueue() {
        if(front == -1) return false;
        if(front == rear) {
            front = rear = -1;
            return true;
        }
        front = (front + 1) % k;
        return true;
    }
    
    int Front() {
        return front == -1 ? -1 : q[front];
    }
    
    int Rear() {
        return rear == -1 ? -1 : q[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear + 1) % k == front;
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

//another solution

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
