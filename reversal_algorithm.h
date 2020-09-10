
/* include guard */

#ifndef _REVERSAL_ALGORITHM_H_
#define _REVERSAL_ALGORITHM_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* a function to swap two numbers */
void swap(ssize_t* first_number, ssize_t* second_number) {
    ssize_t temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;
}

void reversal_algorithm(ssize_t* array, size_t start_index, size_t end_index) {
    /* reverse the array from start_index to end_index */
    for (size_t i = 0;i < (end_index - start_index)/2;i++) {
        swap(&array[start_index + i], &array [end_index - i - 1]);
    }
}

/* reversal algorithm */
void rotate_array(ssize_t* array, size_t number_of_rotation, size_t array_size) {

    /* remove redundant rotations */
    number_of_rotation %= array_size;

    /* if array has been rotated at least once */
    if (number_of_rotation > 0) {
        reversal_algorithm(array, 0, number_of_rotation);
        reversal_algorithm(array, number_of_rotation, array_size);
        reversal_algorithm(array, 0, array_size);
    }
}

#endif