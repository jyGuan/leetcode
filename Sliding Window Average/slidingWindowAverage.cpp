class MovingAverage {
public:
    int len;
    queue<int> nums;
    double sum = 0;
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        len = size;
    }
    
    double next(int val) {
        nums.push(val);
        sum += val;
        if( nums.size()>len ){
            sum -= nums.front();
            nums.pop();
        }
        return sum/nums.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */