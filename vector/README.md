# Vector Data Structure Implementation Using C

In this subdirectory I will be implementing a vector with functionalities analogous to that of the C++ STL. 


## Motivation
My motivation behind creating this is to immerse myself in C programming language again for a deep in-depth review and I believe that this project will be a perfect exercise. 


## My Thought Processes
To begin, create vector.c file for implementation, vector.h file for housing all the essential functions and struct to build, and finally a vector-test.c file for all the necessary testing purposes.

### Header file
When beginning the header file, need to import or include two important libraries, stdio and stdlib. Why? Because

Declare a vector struct and utilize the typedef keyword. Why? Because using typedef helps us reduce having to type struct out a number of times. Include essential functionalities unique to this vector, describe its behavior. To do this we must include a pointer of pointers for the items to add, next the capacity of the vector and finally the number of elements nested inside. 

Next include essential functions that help you implement the vector. Some very useful functions include adding an element, removing an element, a function to detect if you have enough space to add an element, a function to set an element at a particular index, and the most important functions of all, the memory allocating and deallocating functions.

### Implementation

#### Initialize Vector
In this

### Testing