#include <stdio.h>
#define HAS_CYCLING_REFERENCE 2
#define CHECK_CYCLING(counter) ((counter) >= 2 ? HAS_CYCLING_REFERENCE : 0)

int check_cycling_reference(int counter) {

	/**
	 * If an object is greater than 2 or equal 
	 * then that will consider as a cycling reference.
	 *
	 * ie:
	 * 	int a = 100; // Declare an object 
	 * 	int *a_reference_to_object = &a; // Reference count = 1 
	 * 	int *cycle_reference = &a; // Reference count = 2
	 *
	 * Then return HAS_CYCLING_REFERENCE macro otherwise if it's
	 * greater than 2 then use CHECK_CYCLING() macro.  	
	 */
	if (counter == 2) {
		return HAS_CYCLING_REFERENCE;  
	}

	return 0;
}

int reference_counter(int **object) {
	int counter = 0;

	if(object != NULL && *object != NULL) {
		counter += 1; 
	} else if (object == NULL ) {
		return counter; 
	} 
	
	if (CHECK_CYCLING(counter)) {
		return CHECK_CYCLING(counter);
	}

	return counter;
}

int main() {

	/* we create a dummy object which has int value */
	int a = 100;
	int *a_reference = &a;
	int x = reference_counter(&a_reference);
	printf("Counter: %d\n", x);

	/**
	 * Output will be 1 because it only went through once and points
	 * to a single object. 
	 */
    	return 0;
}

