class Solution {
public:
    
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        int parent=kthGrammar(n-1,k/2+k%2);
        bool isOdd=(k%2==1);
        if(parent ==1){
            if(isOdd) return 1;
            else return 0;
        }
        else{
            if(isOdd) return 0;
            else return 1;
        }
        return 0;
    }
};