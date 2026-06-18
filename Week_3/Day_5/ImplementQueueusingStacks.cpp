class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()==1){
           while(s1.empty()!=1){ 
            s2.push(s1.top());
            s1.pop(); // s1 empty and transferred
            }
        }
        int front=s2.top();
        s2.pop();
        return front ; // returning popped element

    }
    
    int peek() { // returns front elemnt but dont remove it
            if(s2.empty()==1){
           while(s1.empty()!=1){ 
            s2.push(s1.top());
            s1.pop(); // s1 empty and transferred
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
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