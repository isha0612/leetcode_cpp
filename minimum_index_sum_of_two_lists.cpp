class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<int, vector<string>> m;
        int min = INT_MAX;
        for(int i = 0; i < list1.size(); i++) {
            for(int j = 0; j < list2.size(); j++) {
                if(m.empty() && list1[i] == list2[j]) {
                    min = i+j;
                    m[min].push_back(list1[i]);
                }
                else if(list1[i] == list2[j] && (i + j) == min) {
                    m[min].push_back(list1[i]);
                }
                else if(list1[i] == list2[j] && (i + j) < min) {
                    m.erase(min);
                    min = i+j;
                    m[min].push_back(list1[i]);
                }
            }
        }
        vector<string> s;
        for(auto itr: m) {
            s = itr.second;
        }
        return s;
    }
};
