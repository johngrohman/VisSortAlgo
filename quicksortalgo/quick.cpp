#include "../functions.h"
#include "quick.h"

void swap(int Arr[], int i, int j) {
    int temp=Arr[i];
    Arr[i] = Arr[j];
    Arr[j]=temp;
}

int partition(int Arr[], int l, int r) {
    int pivot = Arr[r];
    int i = l-1;

    for(int j=l; j<r; j++) {
        if(Arr[j]<pivot) {
            i++;
            swap(Arr, i, j);
        }
    }
    swap(Arr, i+1, r);
    return i+1;
}

void quickSort(int Arr[], int l, int r) {
    system("clear");
	displaySet(Arr, r+1);
	this_thread::sleep_for(chrono::milliseconds(100));
    if (l<r) {
        int pi = partition(Arr, l, r);
        quickSort(Arr, l, pi-1);
        quickSort(Arr, pi+1, r);
    }
}