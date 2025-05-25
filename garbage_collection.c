#include <stdio.h>
#define HAS_CYCLING_REFERENCE 2 
int check_cycling_reference(counter) {
	if (counter >= 2) {
		return HAS_CYCLING_REFERENCE 
	}
}
int reference_counter(*object) {
	counter = 0;

	if(&object) {
		return counter += 1
	} else if (&object == NULL ) {
		return counter
	} else if (check_cycling_reference(counter)) {
		return check_cycling_reference(counter)	
	}
}
int main() {
	int a = 100;
	int *a_reference = &a;
	int x = reference_counter(&a_reference);	
}

