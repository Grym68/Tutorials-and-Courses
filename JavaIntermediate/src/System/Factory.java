package System;

import dataStructures.Arraylist;
import dataStructures.CollectionsSort;
import dataStructures.HashMapEx;
import dataStructures.Iterators;
import dataStructures.Linkedlist;
import workingWithFiles.FilesIO;

public class Factory {

	public static Arraylist getArrayList() {
		return new Arraylist();
	}
	
	public static Linkedlist getLinkedlist() {
		return new Linkedlist();
	}
	
	public static HashMapEx getHashMap() {
		return new HashMapEx();
	}
	
	public static CollectionsSort getCollectionSort() {
		return new CollectionsSort();
	}
	
	public static Iterators getIterators() {
		return new Iterators();
	}
	
	public static FilesIO getFilesIO() {
		return new FilesIO();
	}
}
