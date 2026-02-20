class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // if largest use min heap
        // if smallest use max heap
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i : nums) {
            minHeap.push(i);

            // If the heap exceeds size k, remove the smallest element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        // The root of the min-heap is the smallest of the k largest elements
        return minHeap.top();
    }
};