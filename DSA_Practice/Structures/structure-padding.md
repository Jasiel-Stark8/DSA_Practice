Structure padding in C.


1. **Structure Padding**: Structure padding is a process in C programming where the compiler automatically adds extra bits (or bytes) between variables within a structure. This is done to align the data and increase the speed or performance of the CPU. However, this comes at the cost of some memory wastage.

    Example:
    ```c
    struct abc {
        char a;
        int b;
    };
    struct abc s;
    ```
    In this case, the size of the structure is not 5 bytes (1 byte for `char` and 4 bytes for `int`), but 8 bytes due to structure padding.

2. **Memory Alignment**: Many processors expect that the memory of variables will be allocated according to the size of the variable. For example, a `char` takes 1 byte, so it can be stored anywhere. But an `int` takes 4 bytes, so the address should start from a multiple of 4. This is known as memory alignment or data alignment.

3. **Word Size**: The word size of a machine determines how many bytes the processor can access at a time. In a 32-bit machine, the word size is 4 bytes, and in a 64-bit machine, it's 8 bytes. This is important because it affects how the memory is allocated and accessed.

4. **Structure Packing**: If you want to avoid padding and memory wastage, you can use structure packing. This involves including a special line in your program. However, this is not covered in this video and will be discussed in the next one.

5. **Order of Variables**: To minimize memory wastage, it's better to write the members of a structure in increasing order of their memory size. For example:
    ```c
    struct abc {
        char a;
        char c;
        int b;
    };
    ```
    In this case, the total memory allocated would be 8 bytes, compared to 12 bytes if the `char` variables were not together.

6. **Padding Bytes**: The number of padding bytes added depends on the largest element in the structure. For example, if the largest element is an `int` (4 bytes), the extra bytes added for padding will be according to this.


7. **Alignment Requirement**: Each data type has a specific alignment requirement, which is usually equal to its size. For example, `char` has an alignment requirement of 1 byte, `int` has an alignment requirement of 4 bytes, and `double` has an alignment requirement of 8 bytes. The alignment requirement ensures that the data starts at a memory address that is a multiple of its size.

8. **Compiler Optimization**: The compiler tries to optimize the structure padding by rearranging the order of the members and inserting padding bytes in the appropriate locations. This optimization aims to minimize the memory wastage while still satisfying the alignment requirements.

9. **`#pragma pack` Directive**: To control the structure padding explicitly, some compilers provide a `#pragma pack` directive. By specifying the packing alignment, you can override the default behavior and pack the structure without any padding. However, note that this may affect the performance of memory access and should be used with caution.

Here's an example using `#pragma pack` to disable structure padding:
```c
#pragma pack(1) // Pack the structure without padding

struct abc {
    char a;
    int b;
};

#pragma pack() // Reset the packing to default

struct abc s;
```

In this case, the `struct abc` will have a size of 5 bytes (1 byte for `char` + 4 bytes for `int`) without any padding between the members.

Remember that structure padding is compiler-dependent, and the actual padding may vary on different platforms or compiler settings. If you require a specific memory layout or need to interact with external systems, it's important to consider structure padding and alignment in your code.


Structure padding is done automatically by the compiler to increase the speed of the CPU, even though it results in some memory wastage. However, as memory is getting cheaper, this trade-off is often acceptable to achieve better performance.

For any doubts or further understanding, you can experiment with different combinations of variables and see how memory is allocated and how many bytes each structure takes.


# IMPORTANT NOTE
When aiming to minimize memory wastage due to padding, it is generally recommended to arrange structure members in increasing order of size, from smaller to larger data types. 

Here's an example:
```c
struct example {
    char a;
    int b;
    double c;
};
```

By arranging the members in increasing order of size (`char`, `int`, `double`), you can potentially reduce padding and achieve better memory utilization. The smaller data types are placed at the beginning, followed by the larger ones.

-------------------------------------------------------------------------------------------------------------
While it is good to structure the members of the structure in order, we are prone to forget.
So I thought "Why not create a custom function to reorder structure members".
Is it neccessary?
No
But i went on to be creative and made a function that does that.
It is best to define the structure members in the desired order initially, taking into consideration alignment requirements and potential padding. This way, the structure layout is determined at compile time and remains consistent throughout the program.

But here are the key points and steps:

- While there is no built-in function in C to automatically reorder structure members at compile time, programmers can create custom functions to achieve this task.
- The custom function takes an instance of the structure as a parameter and returns a modified instance with reordered members.
- The function creates a new structure instance and assigns the values from the original structure in the desired order.
- It's important to note that the function does not modify the original structure itself; it only creates a new instance with the reordered members.
- The custom function can be used to enforce a specific ordering consistently across multiple structures, following coding conventions or guidelines.
- Remember that structure padding and memory layout can still depend on the compiler and target platform, so it's advisable to use the `sizeof` operator to verify the size and layout of the structure if precise memory usage is crucial.

Here's a code snippet illustrating the usage of a custom function to reorder structure members:

```c
#include <stdio.h>

struct example {
    char a;
    int b;
    double c;
};

struct example reorderStructure(const struct example* original) {
    struct example reordered;
    reordered.a = original->a;
    reordered.b = original->b;
    reordered.c = original->c;
    return reordered;
}

int main() {
    struct example original;
    original.a = 'A';
    original.b = 42;
    original.c = 3.14;

    struct example reordered = reorderStructure(&original);

    printf("Reordered values: %c %d %f\n", reordered.a, reordered.b, reordered.c);

    return 0;
}
```

In this example, the `reorderStructure` function takes an instance of the `example` structure, creates a new instance (`reordered`), and assigns the values in the desired order. The modified structure is then returned and printed in the `main` function.