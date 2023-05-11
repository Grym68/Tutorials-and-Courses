package dataStructures;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Iterators {

	public void solution() {
		Scanner scanner = new Scanner(System.in);

		LinkedList<Integer> nums = new LinkedList<Integer>();

		while (nums.size() < 5) {
			int num = scanner.nextInt();
			nums.add(num);
		}
		scanner.close();
		int sum = 0;
		// your code goes here
		
		Iterator<Integer> iterator = nums.iterator();
		
		while(iterator.hasNext()) {
			sum += iterator.next();
		}
		System.out.println(sum);
	}
}
