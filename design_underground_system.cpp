class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> idInfo;
    unordered_map<string, pair<long long, int>> stationInfo;
    UndergroundSystem() {
        idInfo.clear();
        stationInfo.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        if(idInfo.find(id) != idInfo.end()) return;
        idInfo[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto &info = idInfo[id];
        string s = info.first + ":" + stationName;
        int time = t - info.second;
        if(stationInfo.find(s) != stationInfo.end()) {
            stationInfo[s].first += time;
            stationInfo[s].second++;
        }
        else {
            stationInfo[s] = {time, 1};
        }
        idInfo.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string key = startStation + ":" + endStation;
        return (double)stationInfo[key].first / (double)stationInfo[key].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
