#include "../functions.h"
#include "bogo.h"

void swap(int Arr[], int i, int j) {
    int temp=Arr[i];
    Arr[i] = Arr[j];
    Arr[j]=temp;
}

bool isSorted(int Arr[], int n) {
    while(--n >= 1) {
        if (Arr[n] < Arr[n-1]) {
            return 0;
        }
    }
    return 1;
} 

void shuffle (int Arr[], int n) {
    for(int i = 0; i < n; i++) {
        swap(Arr[i], Arr[rand()%n]);
    }
}

void bogoSort(int Arr[], int n) {
    while(!isSorted(Arr, n)) {
        shuffle(Arr, n);
        system("clear");
	    displaySet(Arr, n+1);
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    
}