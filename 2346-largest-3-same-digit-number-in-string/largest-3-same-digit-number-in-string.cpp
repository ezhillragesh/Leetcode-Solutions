class Solution {
public:
    string largestGoodInteger(string num) {
        string res="";
        for(int i=1;i<num.size()-1;++i){
            string temp="";
            if(num[i-1]==num[i] && num[i]==num[i+1]){
               temp = num[i - 1];
               temp += num[i];
               temp += num[i + 1];
            }
            if(temp>res) res=temp;
        }
        return res;
    }
};