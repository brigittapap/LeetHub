class Solution {
public:
 int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    
    // Handle edge cases
    if (n <= 2) {
        return n;
    }

    int count = 1; // Count of occurrences of the current element
    int j = 1;     // Index to place the next unique element

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1; // Reset the count for the new unique element
        }

        if (count <= 2) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

};