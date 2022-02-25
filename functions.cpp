#include "header.h"
#include <thread>
#include <chrono>

int findMax(int Arr[], const int SIZE) {
	int max = 0;
	for(int i = 0; i < SIZE; i++) {
		if (Arr[i] > max) {
			max = Arr[i];
		}
	}
	return max;
}

void displaySet(int Arr[], const int SIZE) {
	int level = 1;
	for (int i = 0; i < findMax(Arr, SIZE); i++) {
		for(int r = 0; r < SIZE; r++) {
			if (Arr[r] >= level) {cout << "|";} else {cout << " ";}
		}
		cout << endl;
		level++;
	}
}

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
