# Memory Mangement


- C does not have a "garbage collector" to automatically clean up unused data. If you forget to free memory, your program will waste resources. If you free it too early, your program will crash
- If you manullay allocate it you need to manually deallocate the same 


# Allocating and deallocating Memory 

## malloc() & free()

-  `malloc`  it accepts the number of bytes  to allocate and returns the void pointer to the newly allocated blocks
- It returns void pointer so we can assign it to whatever type we want `*void`
- To allocate specific byte of memory we use `sizeof()`   e.g. `sizeof(int)` will allocate memory of 4 byte which is enough for one integer 
- After allocation of memory we use `free()` to indicate we are done and want to free the memory .

 
    ```c
    // Allocate space for a single int (sizeof(int) bytes-worth):
    int *p = malloc(sizeof(int));
    *p = 12; // Store something there
    printf("%d\n", *p); // Print it: 12
    free(p); // All done with that memory
    //*p = 3490; // ERROR: undefined behavior! Use after free()
    
    ```

### Error Checking 

* Allocation function   returns pointer to  the newly allocated memory or null if memory can't be assigned due to some reason
* But OS like linux could be configured to never return `null`  even out of memory 
* So in order to we need to add up some protections like 

    ```c
    int *x;
    x = malloc(sizeof(int) * 10);
    if (x == NULL) {
    printf("Error allocating 10 ints\n");
    // do something here to handle it
    }
    ```

### Allocating space for an Array 
 * We know how to allocate memory for the single thing, so we can do for the bunch of them for an array 
 * `char *p = malloc(3490);` this allocates memory for character as we know character are of 1 byte so 3490 byte for character 
 * We just need contiguous memory and we got . see example below .
    ```c
    #include <stdio.h>
    #include <stdlib.h>
        int main(void)
    {
    // Allocate space for 10 ints
    int *p = malloc(sizeof(int) * 10);
        // Assign them values 0-45:
     for (int i = 0; i < 10; i++)
     p[i] = i * 5;
    
     // Print all values 0, 5, 10, 15, ..., 40, 45
     for (int i = 0; i < 10; i++)
     printf("%d\n", p[i]);
    
     // Free the space
     free(p);
     }
    ```

## Calloc()

* Another function similar to `malloc` but has two diffrences
    - Instead of passing one arguement we pass two one for the size and another for the number of elements 
    - Made for the allocating arrays
    - It clears memory to zero means by deafult all values are set to zero
* We still use `free()` to deallocate memory obtained thourgh `calloc()`
    ```c
        // Allocate space for 10 ints with calloc(), initialized to 0:
    int *p = calloc(10, sizeof(int));
    // Allocate space for 10 ints with malloc(), initialized to 0:
    int *q = malloc(10 * sizeof(int));
    memset(q, 0, 10 * sizeof(int)); // set to 0
    ```

### Realloc()
* Used to resize previously allocated block of memory 
* Returns pointer to resized memory block
* Parameter are two - one ptr to allocated memory , second new size of the memory
* We specify number of bytes to reallocate not the number of elements in array 
    ```c
    num_floats *= 2;
    np = realloc(p, num_floats); // WRONG: need bytes, not number of elements!
    np = realloc(p, num_floats * sizeof(float)); // Better!
    ```
* example - 
    ```c
    #include <stdio.h>
    #include <stdlib.h>
    
     int main(void)
     {
     // Allocate space for 20 floats
     float *p = malloc(sizeof *p * 20); // sizeof *p same as sizeof(float)
    
     // Assign them fractional values 0.0-1.0:
     for (int i = 0; i < 20; i++)
     p[i] = i / 20.0;
    
     // But wait! Let's actually make this an array of 40 elements
     float *new_p = realloc(p, sizeof *p * 40);
    
     // Check to see if we successfully reallocated
     if (new_p == NULL) {
     printf("Error reallocing\n");
    return 1;
     }

     // If we did, we can just reassign p
     p = new_p;

     // And assign the new elements values in the range 1.0-2.0
     for (int i = 20; i < 40; i++)
     p[i] = 1.0 + (i - 20) / 20.0;

     // Print all values 0.0-2.0 in the 40 elements:
     for (int i = 0; i < 40; i++)
     printf("%f\n", p[i]);

     // Free the space
     free(p);
     }
     ```