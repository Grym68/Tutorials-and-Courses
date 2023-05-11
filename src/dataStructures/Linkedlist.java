package dataStructures;

import java.util.LinkedList;
import java.util.Scanner;

/**
 * 
 * @author Grym68
 *
 */
public class Linkedlist {

	public void solution() {
		Scanner scanner = new Scanner(System.in);

		LinkedList<String> words = new LinkedList<String>();

		while (words.size() != 5) {
			String word = scanner.nextLine();
			// add the word to LinkedList
			words.add(word);
		}
		scanner.close();

		// your code goes here
		for (String word : words)
			if (word.length() > 4)
				System.out.println(word);

	}
}
