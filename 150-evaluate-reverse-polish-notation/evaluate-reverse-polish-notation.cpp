class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(auto ch:tokens){
            int num1=0;
            int num2=0;
            int temp=0;
            if(ch=="+"){
                num2=st.top();
                st.pop();
                num1=st.top();
                st.pop();
                temp=num1+num2;
                st.push(temp);
            }
            else if(ch=="-"){
                num2=st.top();
                st.pop();
                num1=st.top();
                st.pop();
                temp=num1-num2;
                st.push(temp);
            }
            else if(ch=="/"){
                num2=st.top();
                st.pop();
                num1=st.top();
                st.pop();
                temp=num1/num2;
                st.push(temp);
                
            }
            else if(ch=="*"){
                
                num2=st.top();
                st.pop();
                num1=st.top();
                st.pop();
                temp=num1*num2;
                st.push(temp);
            }
            else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};