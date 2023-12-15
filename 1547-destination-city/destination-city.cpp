
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> outgoingCities;

        
        for (const auto& path : paths) {
            outgoingCities.insert(path[0]);
        }

        
        for (const auto& path : paths) {
            if (outgoingCities.find(path[1]) == outgoingCities.end()) {
                return path[1];
            }
        }

       
        return ""; 
    }
};