#include <iostream>
#include "includes/algorithms/SelectionSorter.h"
#include "includes/utils/ArrayPrinter.h"

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;

    cout << "before sort: ";
    ArrayPrinter array_printer;

    int testArray[] = { 9,8,2,5,222 };
    int arraySize = sizeof(testArray) / sizeof(testArray[0]);

    array_printer.print(testArray, arraySize);

    SelectionSorter sorter;
    sorter.selectionSort(testArray, sizeof(testArray)/sizeof(testArray[0]));

    cout << "after sort: ";
    array_printer.print(testArray, arraySize);
    
    system("pause");
    return 0;
}
