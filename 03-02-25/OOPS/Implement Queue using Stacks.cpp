class MyQueue {
public:
    vector<int> data;
    int f = 0;
    MyQueue() {
        
    }
    
    void push(int x) {
        data.push_back(x);
    }
    
    int pop() {
        int p = data[f++];
        return p ;
    }
    
    int peek() {
        return data[f];
    }
    
    bool empty() {
        return f == data.size();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */