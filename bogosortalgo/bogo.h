#ifndef BOGO_H
#define BOGO_H

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void swap(int Arr[], int i, int j);
bool isSorted(int Arr[], int n);
void shuffle (int Arr[], int n);
void bogoSort(int Arr[], int n);

#endif