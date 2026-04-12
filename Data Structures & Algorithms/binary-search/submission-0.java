class Solution {
    public int search(int[] nums, int target) {
        int min = 0;
        int mid;
        int max = nums.length - 1;

        while (max >= min) {
            mid = min + (max - min) / 2;
            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] < target) {
                min = mid + 1;
            } else {
                max = mid - 1;
            }
        }
        return -1;
    }
}
