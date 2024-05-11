class MyStack {
public:
    queue<int>qu1;
    queue<int>qu2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(qu1.size()==0)
        {
            qu1.push(x);
        } else {
            while(!qu1.empty())
            {
                qu2.push(qu1.front()); qu1.pop();
            }
            qu1.push(x);
            while(!qu2.empty())
            {
                qu1.push(qu2.front());
                qu2.pop();
            }
        }
    }
    
    int pop() {
        int poppedval=qu1.front();
        qu1.pop();
        return poppedval;
    }
    
    int top() {
        return qu1.front();
    }
    
    bool empty() {
        return qu1.empty() && qu2.empty();
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