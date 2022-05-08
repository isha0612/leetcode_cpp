class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2){
        unordered_map<string, int> m;
        int min = INT_MAX;
        for(int i = 0; i < list1.size(); i++) {
            m[list1[i]] = i + 1;
        }
        vector<string> res;
        for(int i = 0; i < list2.size(); i++) {
            if(m[list2[i]] > 0) {
                m[list2[i]] += i;
                if(m[list2[i]] < min) {
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if(m[list2[i]] == min) {
                    res.push_back(list2[i]);
                }
                min = min < m[list2[i]] ? min : m[list2[i]];
            }
        }
        return res;
    }
};

//another solution O(n2)

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<int, vector<string>> m;
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
                    m.clear();
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
