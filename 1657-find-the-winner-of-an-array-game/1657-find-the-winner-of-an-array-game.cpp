class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int maxElem=arr[0];
       for(int i=1;i<arr.size();i++) maxElem=max(maxElem,arr[i]);

       int curr=arr[0];
       int win=0;
       for(int i=1;i<arr.size();i++){
           int next=arr[i];
           if(curr>next) win++;
           else{
               curr=next;
               win=1;
           }
        if(win==k || curr==maxElem) return curr;

       }
       return -1;
       
    }
};