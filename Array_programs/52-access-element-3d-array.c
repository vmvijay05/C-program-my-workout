/* Access a specific element in a 3D array and print its value  */

#include <stdio.h>
void main() {
    int arr[2][3][3] = {{{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},{{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}};
    printf("Element at position (1, 1, 2): %d\n", arr[1][1][2]);

}
