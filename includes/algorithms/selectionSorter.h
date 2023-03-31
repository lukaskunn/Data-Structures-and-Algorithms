//
// Created by work on 3/28/2023.
//

#ifndef Data_Structures_and_Algorithms_SelectionSorter_H
#define Data_Structures_and_Algorithms_SelectionSorter_H
#include "../utils/Swapper.h"

class SelectionSorter {
private:
    Swapper swapper;
public:
    SelectionSorter();
    void selectionSort(int arr[], int size);
};


#endif //Data_Structures_and_Algorithms_SelectionSorter_H