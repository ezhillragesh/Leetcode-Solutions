class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(auto word:words){
            int size=word.size();
            int flag=1;
            for(int i=0;i<size;i++){
                if(word[i]!=word[size-i-1]){
                    flag=-1;
                    break;
                }
            }
            if(flag==1){
                res=word;
                break;
            }
        }

        return res;
    }
};