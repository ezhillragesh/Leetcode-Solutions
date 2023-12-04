class Solution {
public:
    string largestGoodInteger(string num) {
        string res="";
        for(int i=1;i<num.size()-1;++i){
            string temp="";
            if(num[i-1]==num[i] && num[i]==num[i+1]){
               temp = num.substr(i - 1, 3);
            }
            if(temp>res) res=temp;
        }
        return res;
    }
};