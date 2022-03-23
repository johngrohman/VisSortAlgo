#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Finds the max value in an array of integers
int findMax(int * Arr, const int SIZE);

// Displays the array through the terminal
void displaySet(int * Arr, const int SIZE);

// Generates a random array integers of an inputed size
int * generateRandomArray(const int SIZE);


#endif

