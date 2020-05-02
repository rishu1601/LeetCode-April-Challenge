//Use a normal stack, and a min stack to store min at each point in stack.
//Can we do better? :p
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> normalStack;
    stack<int> minStack;
    MinStack() {
    }
    
    void push(int x) {
        if(normalStack.empty()){
            minStack.push(x);
            normalStack.push(x);
        }else {
            normalStack.push(x);
            if( x < minStack.top()){
                minStack.push(x);
            }else{
                minStack.push(minStack.top());
            }
        }
    }
    
    void pop() {
        if(normalStack.empty()){
            return;
        }
        normalStack.pop();
        minStack.pop();
    }
    
    int top() {
        int k = normalStack.top();
        return k;
        
    }
    
    int getMin() {
        int min =  minStack.top();
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
