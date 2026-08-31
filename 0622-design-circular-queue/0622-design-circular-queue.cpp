class MyCircularQueue {
private:
    int *cq;
    int front,rear,max_size;
public:
    MyCircularQueue(int k) {
        max_size = k;
        cq =new int [k];
        front = -1;
        rear =-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if (isEmpty()){
            front =0;
            rear = 0;
        }
        else {
            rear = (rear +1)%max_size;
        }
        cq[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front ==rear){
            front = -1;
            rear =-1;
        }
        else {
            front = (front + 1) % max_size;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return cq[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return cq[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear+1)%max_size ==front;
    }
    ~MyCircularQueue() {
        delete[] cq; 
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