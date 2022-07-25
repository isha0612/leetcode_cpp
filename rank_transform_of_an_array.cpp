class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, vector<int>> map;
        for(int i = 0; i < arr.size(); i++)
            map[arr[i]].push_back(i);
        auto it = map.begin();
        int i = 1;
        while(it != map.end()) {
            vector<int> temp = it->second;
            for(auto k : temp) {
                arr[k] = i;
            }
            i++, it++;
        }
        return arr;
    }
};
