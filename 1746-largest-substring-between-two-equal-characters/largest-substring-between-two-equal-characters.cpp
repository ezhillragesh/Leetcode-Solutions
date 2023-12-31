class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector <string> arr;
        int start=0,end=0;
        string res="";
        for(int i=0;i<s.size();i++){
             string temp="";
            for(int j =i;j<s.size();j++){
                start=i;
               
                if(s[start]==s[j] & i!=j){
                    end=j;
                    int size=abs(i-j);
                    temp=s.substr(start+1,size-1);
                    arr.push_back(temp);
                }
                
            }
            

        }
        
        if(arr.empty()) return -1;
        
        for(auto it:arr){
            if(it.size()>res.size()){
                res=it;
            }
        }

        return res.size();
    }
};