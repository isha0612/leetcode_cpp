class MyCalendar {
public:
    multiset<pair<int, int>> m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int book = 0;
        m.insert(make_pair(start, 1));
        m.insert(make_pair(end, -1));
        for(auto it: m) {
            book += it.second;
            if(book > 1) {
                m.erase(m.find(make_pair(start, 1)));
                m.erase(m.find(make_pair(end, -1)));
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
