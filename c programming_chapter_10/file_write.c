#include <stdio.h>

int main() {
    FILE *ptr; // Corrected variable name
    ptr = fopen("sanu.txt", "w"); // Use "ptr" here
    if (ptr == NULL) { // Always check if file opened successfully
        printf("Error opening file!\n");
        return 1; // Return with error code
    }

    int num = 432;
    fprintf(ptr, "%d", num); // Use "ptr" here
    fclose(ptr); // Close "ptr"
    
    return 0;
}
