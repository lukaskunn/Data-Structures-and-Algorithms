//
// Created by work on 3/28/2023.
//
#include "../../includes/utils/Swapper.h"
#include <iostream>

using namespace std;

Swapper::Swapper() {}

void Swapper::swap(int* smallItem, int* biggerItem) {
    int temp = *smallItem;
    *smallItem = *biggerItem;
    *biggerItem = temp;
}

#include "../../includes/utils/Swapper.h"