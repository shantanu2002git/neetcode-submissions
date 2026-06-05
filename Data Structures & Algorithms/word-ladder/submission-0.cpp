class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
       unordered_set<string>wds(wordList.begin(), wordList.end());
       queue<pair<string,int>>qp;
       qp.push({beginWord,1});
       while(!qp.empty()){
        auto [wd,pos]=qp.front(); qp.pop();
        if(wd==endWord) return pos;
        for(int i=0; i<wd.size(); i++){
            char orgi=wd[i];
            for(char ch='a'; ch<='z'; ch++){
                wd[i]=ch;
                if(wds.find(wd)!=wds.end()){
                    wds.erase(wd);
                    qp.push({wd, pos+1});
                }
            }
            wd[i]=orgi;
        }
       }
       return 0;
    }
};
