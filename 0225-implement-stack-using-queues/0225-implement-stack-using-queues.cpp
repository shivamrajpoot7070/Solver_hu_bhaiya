class MyStack {
public:
    stack<int>st;
    MyStack() {
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {

        
        int del=-1;

        if(st.size()>0){
            del=st.top();
            st.pop();
        }

        return del;
        
    }
    
    int top() {
        if(st.size()>0){
            return st.top();
        }

        return -1;
    }
    
    bool empty() {

        if(st.size()==0){
            return true;
        }

        return false;
        
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