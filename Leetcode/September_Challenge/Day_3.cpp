class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string com=s+s;
        string rm=com.substr(1,com.size()-2);
        //cout<<rm<<endl;
        return rm.find(s)!=-1;
    }
};