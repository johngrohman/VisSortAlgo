#include "functions.h"

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
	for(int i = 0; i < SIZE; i++) {
		cout << "-";
	}
	cout << endl;
	for (int i = 0; i < findMax(Arr, SIZE); i++) {
		for(int r = 0; r < SIZE; r++) {
			if (Arr[r] >= level) {cout << "|";} else {cout << " ";}
		}
		cout << endl;
		level++;
	}
}

int * generateRandomArray(const int SIZE) {
	int * array = new int[SIZE];
	for(int i = 0; i < SIZE; i++) {
		if (i != 0) {
			int temp = rand() % SIZE+1;
			while(temp == array[i-1]) {
				temp = rand()%SIZE+1;
			}
			array[i] = temp;
		} else {
			array[i] = rand() % SIZE+1;
		}
	}
	return array;
}