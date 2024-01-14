class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string rev=words[j];
                reverse(rev.begin(),rev.end());
                if(words[i]==rev) cnt++;
            }
        }
        return cnt;
    }
};