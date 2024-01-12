class Solution {
public:
    vector <char> vowels={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int countVowels(string s, int size){
        int cnt=0;
        for(int i=0;i<vowels.size();i++){
            for(auto ch : s){
                if(ch==vowels[i]) cnt++;
            }
        }
        return cnt;
    }
    bool halvesAreAlike(string s) {
        
        int size=s.size();
        int mid=size/2;
        int half1=countVowels(s.substr(0,mid),mid);
        int half2=countVowels(s.substr(mid,size),mid);
        cout<<" mid 1"<<half1<<" mid 2 : "<<half2;
        if(half1==half2) return true;
        return false;
    }
};