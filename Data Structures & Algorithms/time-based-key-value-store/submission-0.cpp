class TimeMap {
public:
    TimeMap() {}

    unordered_map<string, vector<pair<int, string>>> ins;

    void set(string key, string value, int timestamp) {
        ins[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        auto &it = ins[key]; // reference to the vector
        int l = 0, r = it.size() - 1;
        string res = "";

        while (l <= r) {
            int mid = (l + r) / 2;
            if (it[mid].first <= timestamp) {
                res = it[mid].second;
                l = mid + 1; // search right for closer timestamp
            } else {
                r = mid - 1;
            }
        }

        return res;
    }
};
