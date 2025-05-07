public class Solution {
  public int removeDuplicates(int[] nums) {
    int num_of_ue = 1; // number of unique element
    int current_position = 0;

    for (int i = 1; i < nums.length; i++) {
      if (nums[current_position] == nums[i]) {
        continue;
      } else {
        num_of_ue++;
        current_position++;
        nums[current_position] = nums[i];
      }
    }

    return num_of_ue;
  }
                       
  public static void main(String[] args) {
    int arr[] = { -5, -5, -1, 0, 0, 0, 1, 1, 3, 4 };
    Solution obj = new Solution();

    int n = obj.removeDuplicates(arr);
    System.out.println("Number of unique items: " + n);
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
  }
}
