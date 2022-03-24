#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
#endif
