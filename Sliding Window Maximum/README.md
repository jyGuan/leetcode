滑动窗口最大值，核心思想是定义一个q，q中保存元素索引，其保证有序，即保证原有的下标索引顺序不变，由小到大，同时最大值是q[0]索引对应的元素值，每次num与索引q[-1]对应的值比较，若num较大，则删除q[-1]，循环此操作，直到num较小或者。当滑动窗口滑动时，检查索引q[0]是否在滑动窗口内，若不在，将其删去。

![](https://github.com/jyGuan/leetcode/tree/main/Sliding%20Window%20Maximum/pic/slidingWindowMaximum.png)

时间复杂度分析：O(n)

一个元素，需要进q，出q，则O(n)

