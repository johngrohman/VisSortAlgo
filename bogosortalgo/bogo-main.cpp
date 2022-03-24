#include <iostream>
#include "../functions.h"
#include "bogo.h"
using namespace std;

int main() {
    int * arr = generateRandomArray(5);
    bogoSort(arr, 5);
    delete arr;
	arr = nullptr;
    return 0;
}