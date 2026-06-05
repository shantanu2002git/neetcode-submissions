class Twitter {
public:
    Twitter() {
        timestamp = 0;
    }

    // follower -> set of followees
    unordered_map<int, unordered_set<int>> following;
    // user -> {tweetId -> timestamp}
    unordered_map<int, unordered_map<int,int>> tweets;
    int timestamp;

    // Post a tweet
    void postTweet(int userId, int tweetId) {
        tweets[userId][tweetId] = timestamp++;
    }

    // Delete a tweet (O(1))
    bool deletePost(int userId, int tweetId) {
        if (tweets[userId].count(tweetId)) {
            tweets[userId].erase(tweetId);
            return true;
        }
        return false;
    }

    // Get 10 most recent tweets
    vector<int> getNewsFeed(int userId) {
        // max-heap {timestamp, tweetId}
        priority_queue<pair<int,int>> pq;

        // User's tweets
        for (auto &p : tweets[userId]) {
            pq.push({p.second, p.first});
        }

        // Followees' tweets
        for (int followee : following[userId]) {
            for (auto &p : tweets[followee]) {
                pq.push({p.second, p.first});
            }
        }

        vector<int> res;
        int count = 0;
        while (!pq.empty() && count < 10) {
            res.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return res;
    }

    // Follow
    void follow(int followerId, int followeeId) {
        if (followerId == followeeId) return;
        following[followerId].insert(followeeId);
    }

    // Unfollow
    void unfollow(int followerId, int followeeId) {
        if (followerId == followeeId) return;
        following[followerId].erase(followeeId);
    }
};
