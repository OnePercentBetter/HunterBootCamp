class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(auto i : nums){
            map<int,int>::iterator it = hash.find(i);
            if(it != hash.end()){
                it->second++;
            }else{
                hash.insert(pair<int,int>(i,1));
            }
        }
        for(auto const& i : hash){
            if(i.second == 1){
                return i.first;
            }
        }
        return 0;
    }
};
