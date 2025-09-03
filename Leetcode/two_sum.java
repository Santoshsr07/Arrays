// this code is still incomplet
// leet code problem 1
import java.util.Scanner;

public class two_sum {

    public int[] twoSum(int[] nums, int target) {

        return twoSum(nums, target);
    }

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);

        System.out.print("Enter Numbers as a Input : ");
        int n = obj.nextInt();
        int[] nums = new int[n];

        System.out.println("Enter " + n + " Element : ");
        for (int i = 0; i < n; i++) {
            nums[i] = obj.nextInt();
        }

        System.out.println("Enter target number : ");
        int target = obj.nextInt();

        obj.close();
    }
}