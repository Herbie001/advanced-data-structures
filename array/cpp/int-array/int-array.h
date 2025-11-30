#ifndef INT_ARRAY
#define INT_ARRAY
#include <iostream>


class IntArray {
    private:
        /**
         * Pointer to the IntArray
         */
        int* data;

        /**
         * The total number of elements within IntArray
         */
        unsigned int numOfElements;

        /**
         * The total number of slots within IntArray
         */
        unsigned int capacity;
    public:
        /**
         * Constructor for the array
         * @param initialSize The integer value to assign as the 
         * initial capacity of the IntArray object
         */
        IntArray(int initialSize);

        /**
         * Destructor for IntArray
         * Releases all the dynamically allocated memory
         */
        ~IntArray();

        /**
         * Copy constructor
         * Creates a deep copy of the IntArray
         * @param other Reference to another IntArray
         */
        IntArray(const IntArray& other);

        /**
         * Move constructor
         * Transfer ownership of memory from one IntArray to this one
         * @param other Reference to another IntArray
         */
        IntArray(IntArray&& other) noexcept;

        /**
         * Function to expand the capacity of the IntArray when
         * the number of elements is equal to the capacity
         */
        void expandCapacity();

        /**
         * Function to add an element to the end of IntArray
         * @param value The new element to add at the end of IntArray
         */
        void appendElement(int value);

        /**
         * Function to add an element to the beginning of IntArray
         * @param value The new element at the front of IntArray
         */
        void prependElement(int value);

        /**
         * Function to add an element at a specific index within IntArray
         * @param value The new element to add
         * @param index The desired index where we want the new element
         */
        void insertAt(int value, int index);

        /**
         * Function to find if an element exists within IntArray 
         * @param value The element we're looking for 
         * @return true if the element exists within IntArray
         */
        bool findElement(int value) const;

        /**
         * Function that returns boolean value if IntArray is empty
         * @return true or false dependent on if numOfElements > 0
         */
        bool isEmpty() const;

        /**
         * Clear the contents of the IntArray object
         * while the capacity stays the same
         */
        void clear();

        /**
         * Get the current capacity of the IntArray object
         * @return The number of buckets available 
         */
        unsigned int getCapacity();

        /**
         * Get the number of elements in the array
         * @return The number of elements in IntArray
         */
        unsigned int size() const;

        /**
         * Reduce the capacity of IntArray to the number of elements
         */
        void ShrinkToFit();

        /**
         * Function mainly for testing purposes that helps visualize
         * the elements located in the IntArray
         */
        void printList();

        /**
         * Function to swap references at two different indices
         * @param index1 The index we're swapping index2 with
         * @param index2 The index we're swapping index1 with
         */
        void swap(int index1, int index2);

        /**
         * Copy assignment operator
         * 
         */
        IntArray& operator=(const IntArray& other);

        /**
         * Moving assignment operator
         */
        IntArray& operator=(IntArray&& other) noexcept
        ;
        /**
         * Overloaded the == operator for testing purposes
         */
        bool operator==(const IntArray& arr) const;

        /**
         * Overload the != operator for testing purposes
         */
        bool operator!=(const IntArray& arr) const;

        /**
         * Overloaded [] operator to access elements easily
         * @param index The index which is a reference to the desired value at that specific index
         * @return The reference at the specific index
         */
        int& operator[](unsigned int index);

        /**
         * Overloaded the [] operator for constant references
         * @param index The index which is a reference to the desired  value at that specific index
         * element in IntArray.
         * @return The reference at the specific index
         */
        const int& operator[](unsigned int index) const;

        /**
         * Iterator for IntArr that points at the beginning 
         * @return Value at the beginning of the IntArray
         */
        int* begin() {return data;}

        /**
         * Iterator for constant IntArr that points to the beginning
         * @return Constant value at the beginning
         */
        const int* cbegin() const {return &*(data+0);}

        /**
         * Iterator for IntArr that points at the last element
         * @return Value at the end of IntArray
         */
        int* end() {return &*(data + numOfElements);}

        /**
         * Iterator for constant IntArr that points at the last element
         * @return Const value at the end of IntArr object
         */
        const int* cend() const {return &*(data + numOfElements);}

        /**
         * Iterator for constant IntArray that points at the last 
         * element
         * @return Const value at the end of the IntArray object
         */
        const int* const cend() {return &*(data + numOfElements);}

        /**
         * 
         */

};

#endif