class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        vector<int> ret;
        int window_start_index;
        int window_end_index;
        //initialize queue
        deque<int> q;
        q.push_back( 0 );
        for(int i=1; i<nums.size(); i++){
            while(nums[i]>nums[ q.back() ]){
                q.pop_back();
                if(q.empty()){
                    break;
                }
            }
            q.push_back( i );
            // 滑动窗口右移
            window_start_index = i - k + 1;
            window_end_index = i;
            if(i>=k-1){
                if(q.front()<window_start_index){
                    q.pop_front();
                }
                ret.push_back(nums[q.front()]);
            }
        }
        return ret;
        
    }
};