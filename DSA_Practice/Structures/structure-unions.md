Revised notes with code examples:

1. **Unions in C**: Unions in C are similar to structures, but there are some key differences. Like structures, unions are user-defined data types that can hold different types of data. However, while structures allocate separate memory for each member, unions allocate shared memory for all members.

    ```c
    union abc {
        int a;
        char b;
        float c;
    };
    ```

2. **Declaration of Unions**: Unions are declared similarly to structures. The keyword `union` is used instead of `struct`, followed by the union name and its members. 

    ```c
    union abc my_union;
    ```

3. **Memory Allocation**: In structures, each member gets its own memory space. For example, if a structure has an integer, a character, and a float as members, it will allocate 4 bytes for the integer, 1 byte for the character, and 4 bytes for the float, totaling 9 bytes. In contrast, unions allocate shared memory for all members. The size of the memory allocated is equal to the size of the largest member.

    ```c
    printf("Size of union: %d\n", sizeof(my_union));  // Outputs: 4
    ```

4. **Accessing Union Members**: Union members are accessed in the same way as structure members, using the dot operator. However, because union members share memory, only the last assigned value will be stored.

    ```c
    my_union.a = 1;
    my_union.b = 'a';
    my_union.c = 4.0;
    printf("my_union.a: %d\n", my_union.a);  // Outputs: garbage value
    printf("my_union.b: %c\n", my_union.b);  // Outputs: garbage value
    printf("my_union.c: %.1f\n", my_union.c);  // Outputs: 4.0
    ```

5. **Advantages and Disadvantages of Unions**: The main advantage of unions is that they save memory, as they only allocate as much memory as the largest member requires. This can be useful in situations where memory is limited. However, the disadvantage is that unions can only store one member's value at a time. If a program needs to use multiple members simultaneously, a structure would be more appropriate.

6. **Usage of Unions**: Unions were more commonly used in the past when memory was expensive. Today, with memory being relatively cheap, structures are more commonly used. Unions are still useful in certain situations where only one member needs to be used at a time, and memory efficiency is a concern.
