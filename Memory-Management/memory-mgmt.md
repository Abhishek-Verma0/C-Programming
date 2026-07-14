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

* Allocation function   returns pointer to  the newly allocated memory or null if can't be assigned due to some reason
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
