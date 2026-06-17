class MinStack {
    stack<int>s;
    stack<int>mins;
public:
    MinStack() {
         }
    
    void push(int value) {
        if(mins.empty() || (mins.top())>=value){
            mins.push(value);
        }
        s.push(value);
    }
    
    void pop() {
        if(mins.top()==s.top()){
            mins.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */