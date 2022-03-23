#include "../functions.h"
#include "bubble.h"

void swap(int & a, int & b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

void bubbleSort(int Arr[], const int SIZE) {
	int i, j;
	for(i = 0; i < SIZE-1; i++) {
		system("clear");
		displaySet(Arr, SIZE);
		this_thread::sleep_for(chrono::milliseconds(100));
		for(j=0; j<SIZE-i-1; j++) {
			if(Arr[j] > Arr[j+1]) {
				swap(Arr[j], Arr[j+1]);
			}
		}
	}
}