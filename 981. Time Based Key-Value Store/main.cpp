class TimeMap {
public:
    
    unordered_map<string, map<int, string>> hash;
    
    TimeMap() {
        
        hash = unordered_map<string, map<int, string>>();
    }
    
    void set(string key, string value, int timestamp) {
        
        hash[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        
        if (hash.find(key) != hash.end()) {
            
            for (auto itr = hash[key].rbegin() ; itr != hash[key].rend(); itr++) {
                
                if (itr->first <= timestamp) {
                    
                    return itr->second;
                }
            }
        }
        
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */