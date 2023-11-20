class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int i, j, k, time=0, tG=-1, tP=-1, tM=-1;
        time = garbage[0].length();

        for(i=1 ; i<travel.size() ; i++) travel[i] += travel[i-1];
        

        for(i=1 ; i<garbage.size() ; i++)
        {
            for(j=0 ; j<garbage[i].length() ; j++)
            {
                if(garbage[i][j]=='G')
                {
                    time += 1;
                    tG = i-1;
                }
                else if(garbage[i][j]=='P')
                {
                    time += 1;
                    tP = i-1;
                }
                else if(garbage[i][j]=='M')
                {
                    time += 1;
                    tM = i-1;
                }
            }
           
        }
       
        if(tG>=0)
            time += travel[tG];
        if(tP>=0)
            time += travel[tP];
        if(tM>=0)
            time += travel[tM];
        return time;
    }
};