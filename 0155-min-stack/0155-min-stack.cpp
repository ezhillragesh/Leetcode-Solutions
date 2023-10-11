class MinStack {
    stack<int> mn, val;
public:
    MinStack() {}
    void push(int x) {
        val.push(x);
        if (mn.empty() || mn.top() >= x) mn.push(x);
    }
    void pop() {
        if (val.top() == mn.top()) mn.pop();
        val.pop();
    }
    int top() {
        return val.top();
    }
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */