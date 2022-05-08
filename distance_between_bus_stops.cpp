class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dis = 0, total = 0, n = distance.size();
        if(start > destination)
            swap(start, destination);
        for(int i = 0; i < n; i++) {
            if(i >= start && i < destination) {
                dis += distance[i];
            }
            total += distance[i];
        }
        return min(dis, total - dis);
    }
};
