class Solution {
public:
    string largestTimeFromDigits(vector<int>& v) {
        
        string ans;
        
        for(int i=0;i<24;i++){
            string hr,mi;
            hr+=to_string(v[0]),hr+=to_string(v[1]),mi+=to_string(v[2]),mi+=to_string(v[3]);
            if(hr>="00"&&hr<="23"&&mi>="00"&&mi<="59"){
                if(ans<=(hr+mi)){
                    ans.clear();
                    ans=hr+mi;
                }
            }
            next_permutation(v.begin(),v.end());
        }
        if(ans.size()>0) ans.insert(2,":");
        return ans;
        
        
    }
};