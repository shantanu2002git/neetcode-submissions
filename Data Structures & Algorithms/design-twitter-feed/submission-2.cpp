class Twitter {
public:
    Twitter() {
        
    }
    unordered_map<int,unordered_set<int>>follw;
    unordered_map<int,vector<pair<int,int>>>posti;

    int time=0;
    void postTweet(int userId, int tweetId) {
        posti[userId].push_back({time,tweetId });
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq;
        auto it1=posti[userId];
        for(auto i : it1){
            pq.push(i);
        }

        for(auto fw : follw[userId])
        {
            for(auto p : posti[fw]){
                pq.push(p);
            }
        }
   int show=10;
   vector<int>res;
        while(!pq.empty() && show--){
res.push_back(pq.top().second);
pq.pop();
        }
        return res;
        
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId==followeeId)return;
        follw[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followerId==followeeId)return;
        follw[followerId].erase(followeeId);
    }
};
