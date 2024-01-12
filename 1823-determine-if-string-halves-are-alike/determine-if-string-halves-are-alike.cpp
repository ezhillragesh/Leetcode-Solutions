class Solution {
public:
    bool halvesAreAlike(string s) {
        int cl=0,cr=0;
        int size=s.size();
        for(int i=0;i<size/2;i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U' ){
                cl++;
            }
            if(s[size-i-1]== 'a' || s[size-i-1]== 'e' ||  s[size-i-1]== 'i' ||  s[size-i-1]== 'o' ||  s[size-i-1]== 'u' ||  s[size-i-1]== 'A' ||  s[size-i-1]== 'E' ||  s[size-i-1]== 'I' ||  s[size-i-1]== 'O' ||  s[size-i-1]== 'U' ){
                cr++;
            }
        }
        if(cl==cr) return true;
        return false;
    }
};