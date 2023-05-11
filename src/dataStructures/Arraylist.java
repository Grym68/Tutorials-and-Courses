package dataStructures;

import java.util.ArrayList;
import java.util.Scanner;
/**
 * 
 * @author Grym68
 *
 */
public class Arraylist {

	public void solution() {
		 Scanner scanner = new Scanner(System.in);
	        
	        ArrayList<Integer> evennums = new ArrayList<Integer>();
	        
	        while(evennums.size()<3){
	            int num = scanner.nextInt();
	            //your code goes here
	            evennums.add(num);
	        }
	        scanner.close();
	        int avg = 0;
	        //calculate and output the average integer value
	        for(int num : evennums)
	            avg += num;

	        System.out.println(avg/evennums.size());
	        
	}
}