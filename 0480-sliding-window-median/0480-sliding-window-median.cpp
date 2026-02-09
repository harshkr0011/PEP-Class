class MedianStream{
    multiset<int> mins , maxs;

 public:
    void add(int num){
        if(!maxs.empty() && num >= *maxs.begin())
            maxs.insert(num);
        else
            mins.insert(num);

        adjust();
    };

    void del(int num){
       auto it = mins.find(num);
        if (it != mins.end()) {
            mins.erase(it);
        } else {
            it = maxs.find(num);
            if (it != maxs.end())
                maxs.erase(it);
        }
        adjust();
    };

    void adjust(){
        if(abs((int)maxs.size() - (int)mins.size()) > 1){
            if(maxs.size() > mins.size()){
                mins.insert(*maxs.begin());
                maxs.erase(maxs.begin());
            }
            else{
                auto it  = mins.end();
                --it;
                maxs.insert(*it);
                mins.erase(it);
            }
                
        };
    };
    double median(){
        if(mins.size() == maxs.size()){
            double a = *mins.rbegin()*1.0;
            double b = *maxs.begin()*1.0;

           
            return (a+b)/2.0;
        }

        if(mins.size() >  maxs.size())
            return *mins.rbegin();
        
        else
            return *maxs.begin();
    };
};
class Solution {
public:

    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> ans;
        MedianStream ms;

        for(int i = 0; i<nums.size();i++){
            
             if (i >= k) {
                 ms.del(nums[i - k]);
            }
            ms.add(nums[i]);
            if (i >= k - 1) {
                ans.push_back(ms.median());
            }
        }

        return ans;

    }
};