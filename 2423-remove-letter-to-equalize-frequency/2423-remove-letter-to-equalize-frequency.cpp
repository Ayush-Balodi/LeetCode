class Solution {
public:
    bool equalFrequency(string word) {
        
        vector<int> f(26,0);
        for( auto x:word ){
            f[x-'a']++;
        }
        
        for( int i=0 ; i<26 ; i++ ){
            if(f[i]<=0){
                continue;
            }
            vector<int> temp=f;
            temp[i]--;
            set<int> s;
            for( auto x:temp ){
                if(x>0){ s.insert(x); }  
            }
            if( s.size() == 1 ){return true;}
        }
        return false;
    }
};