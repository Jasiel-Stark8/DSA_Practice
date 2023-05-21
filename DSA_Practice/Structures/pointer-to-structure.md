Here are the key points from the video "C_113 Pointer to Structure in C | Structure Pointer | C Language Tutorials":

1. **Structure Pointer**: A structure pointer is a pointer that points to the address of the memory block that stores the structure. It allows you to access the members of the structure using the pointer.

2. **Declaration of Structure Pointer**: To declare a structure pointer, you need to specify the structure type. For example, if you have a structure `struct student`, you would declare a pointer to it like this: `struct student *ptr;`. This declares `ptr` as a pointer to a structure of type `struct student`.

3. **Accessing Structure Members**: You can access the members of the structure using the structure pointer. There are two ways to do this:

    - Using the arrow operator (`->`): `ptr->rollno`, `ptr->name`, `ptr->marks`
    - Using the dereference operator (`*`) and dot operator (`.`): `(*ptr).rollno`, `(*ptr).name`, `(*ptr).marks`

    Both of these methods will access the member of the structure that `ptr` points to.

4. **Assigning Address to Structure Pointer**: To assign the address of a structure to a structure pointer, you use the address-of operator (`&`). For example, if `s1` is a structure of type `struct student`, you can assign its address to `ptr` like this: `ptr = &s1;`. Now, `ptr` points to `s1`, and you can access the members of `s1` through `ptr`.

5. **Example Code**:

    ```c
    #include <stdio.h>

    struct student {
        int rollno;
        char name[20];
        float marks;
    };

    int main() {
        struct student s1 = {1, "Jenny", 90.0}; // Initialize structure
        struct student *ptr; // Declare structure pointer

        ptr = &s1; // Assign address of s1 to ptr

        // Access structure members using ptr
        printf("Roll Number: %d\n", ptr->rollno);
        printf("Name: %s\n", ptr->name);
        printf("Marks: %.2f\n", ptr->marks);

        return 0;
    }
    ```

    This code declares a structure `student`, initializes a `student` structure `s1`, and declares a structure pointer `ptr`. It then assigns the address of `s1` to `ptr` and uses `ptr` to access and print the members of `s1`.

6. **Dynamic Initialization**: You can also initialize the structure members dynamically using `scanf` and the structure pointer. For example, `scanf("%d", &(ptr->rollno));` would allow you to enter the roll number for the student that `ptr` points to.

7. **Internal Pointer**: The name of the structure variable (like `s1` in the example) is an internal pointer that contains the base address of the structure. This is similar to how the name of an array is an internal pointer that contains the base address of the array.

8. **Memory Visualization**: In memory, a structure variable like `s1` has separate memory allocations for each of its members. The base address of this memory block (where the `rollno` member is stored) is stored in `s1`. A structure pointer like `ptr` stores the address of `s1`, and thus points to the same memory block.

The video ends with the instructor encouraging viewers to try out different things with structure pointers, such as dynamic initialization and using structure pointers in `scanf`.