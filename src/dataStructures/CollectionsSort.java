package dataStructures;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class CollectionsSort {

	public void solution() {
		ArrayList<Integer> nums = new ArrayList<Integer>();

		Scanner scanner = new Scanner(System.in);

		while (nums.size() != 5) {
			int num = scanner.nextInt();
			// your code goes here
			nums.add(num);
		}
		scanner.close();
		// your code goes here
		System.out.println(Collections.max(nums));
		System.out.println(Collections.min(nums));
	}
}
