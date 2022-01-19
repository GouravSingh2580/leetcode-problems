class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        set<char>s;
        for(auto ch:a){
            s.insert(ch);
        }
        //int f=0;
        int c=0;
        for(auto x:w){
            int f=0;
            for(auto ch:x){
                const bool is_in = s.find(ch) != s.end();
                if(is_in){
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
            if(f){c++;}
        }
        return c;
    }
};