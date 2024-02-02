class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        ArrayList<Integer> res = new ArrayList<Integer>();
        for(int i=1;i<=9;i++){
            int n=i;
            for(int j=i+1;j<=9;++j){
                n=n*10 + j;
                if(n>=low && n<=high){
                    res.add(n);
                }
            }
        }
        Collections.sort(res);
        return res;   
    }
}