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

Remember, structure padding is done automatically by the compiler to increase the speed of the CPU, even though it results in some memory wastage. However, as memory is getting cheaper, this trade-off is often acceptable to achieve better performance.

For any doubts or further understanding, you can experiment with different combinations of variables and see how memory is allocated and how many bytes each structure takes.