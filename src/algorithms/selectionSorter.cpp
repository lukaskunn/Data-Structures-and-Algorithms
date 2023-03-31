//
// Created by work on 3/28/2023.
//
#include "../../includes/algorithms/selectionSorter.h"
#include <iostream>

using namespace std;

SelectionSorter::SelectionSorter() {}
void SelectionSorter::selectionSort(int arr[], int size)
{
    int min_index;

    for (int i = 0; i < size; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swapper.swap(&arr[min_index], &arr[i]);
        }

    }
}

#include "../../includes/algorithms/selectionSorter.h"