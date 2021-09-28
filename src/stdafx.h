// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#include <stdio.h>
#include <iostream>
#include <chrono>
#include <climits>

void printResult(int* arr, int size) {
    for(int i = 0; i < size; i++) std::cout<<arr[i]<< " ";
    std::cout<<std::endl;
}