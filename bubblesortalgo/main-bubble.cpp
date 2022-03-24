#include <iostream>
#include "../functions.h"
#include "bubble.h"
using namespace std;

int main() {
	int * arr = generateRandomArray(20);
	bubbleSort(arr, 20);
	delete arr;
	arr = nullptr;
	return 0;
}
