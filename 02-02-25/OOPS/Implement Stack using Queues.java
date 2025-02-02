class MyStack {
public:
    vector<int> v ;
    int n = 0 ;
    MyStack() {
        
    }
    
    void push(int x) {
        v.push_back(x) ;
        n++ ;
    }
    
    int pop() {
        n-- ;
        int p = v.back() ;
        v.pop_back() ;
        return p ;
    }
    
    int top() {
        return v.back() ;
    }
    
    bool empty() {
        return n == 0 ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */