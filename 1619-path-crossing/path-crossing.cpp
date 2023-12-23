class Solution {
public:
    bool isPathCrossing(string path) {
        vector<int> point = {0, 0};
        map<vector<int>, bool> visited;
        visited[point] = true;
        for(auto it:path){
            if(it == 'N') point[1] += 1;
            else if(it == 'S') point[1] -= 1;
            else if(it== 'E')point[0] += 1;
            else if(it == 'W')point[0] -= 1;
            if(visited[point] == true) return true;
            visited[point] = true;

        }

        return false;
    }
};