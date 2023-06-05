
// Implimentation of ArrayList in java
import java.util.*;
class arrayList {

	public static void main(String args[]) {
		ArrayList<Integer> list = new ArrayList<>();


		//add Elements
		list.add(0);
		list.add(2);
		list.add(3);

		System.out.println(list);

		//get elements
		int element = list.get(0);
		System.out.println(element);

		//add Elements in between the list
		list.add(1,1);
		System.out.println(list);

		//set element
		list.set(0,5);
		System.out.println(list);

		//remove element
		list.remove(3);
		System.out.println(list);

		//size of the arraylist
		System.out.println("Size = "+list.size());

		//loops
		for(int i = 0; i<list.size(); i++) {
			System.out.print(list.get(i));
		}
		System.out.println();

		//sorting
		Collections.sort(list);
		System.out.println(list);
	}
}



