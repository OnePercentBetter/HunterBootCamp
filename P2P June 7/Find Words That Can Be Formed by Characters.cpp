//INCOMPLETE
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> hash(26,0);
        for(auto i : chars){
            hash[i-'a']++;
        }
        int result = 0;
        for(int j = 0; j < words.size(); j++){
            vector<int> current{26,0};
            for(int i = 0; i < words[j].size();i++){
                if(current[words[j][i] - 'a']++ > hash[words[j][i]-'a']){
                    break;
                }
            }
            if(j == words[j].size()){
                result += words[j].size();
            }else{
                result += 0;
            }
        }
        return result;
    }
    
};
