//
// Created by work on 3/28/2023.
//
#include "../../includes/utils/ArrayPrinter.h"
#include <iostream>

using namespace std;

ArrayPrinter::ArrayPrinter() {}

void ArrayPrinter::print(int arr[], int size) {
    for (int m = 0; m < size; m++) {
        cout << arr[m] << " ";
    }
    cout << "\n";
}

#include "../../includes/utils/ArrayPrinter.h"