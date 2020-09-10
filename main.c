#include "block_swap_algorithm.h"

int main(int argc, char* argv[]) {

    /* seed the random number generator */
    srand(time(NULL));

    /* define the  array_size */
    size_t array_size = 13;

    /* allocate memory to store heap memory */
    ssize_t* array = (ssize_t*)malloc(sizeof(ssize_t) * array_size);

    /* read the array elements */
    for (size_t i = 0;i < array_size;i+=1) {
        array[i] = rand() % 31 + 7;
    }

    /* print the array elements */
    printf("\nArray elements:\n");
    for (size_t i = 0;i < array_size;i++) {
        printf("%d ", array[i]);
    }

    size_t number_of_rotation = rand() % 31 + 7;
    printf("\nNumber of rotation: %d\n", number_of_rotation);

    double start = clock();
    rotate_array(array, number_of_rotation, array_size);
    double end = clock();

    /* print the array elements */
    printf("\nRotated elements:\n");
    for (size_t i = 0;i < array_size;i++) {
        printf("%d ", array[i]);
    }

    /* print the required time for array rotation */
    double time_required = (end - start)/CLOCKS_PER_SEC;
    printf("\nTime required: %lf\n", time_required);

    /* de-allocate the heap memory */
    free(array);
    return 0;
}