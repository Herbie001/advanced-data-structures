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
         */
        IntArray(const IntArray& other);

        /**
         * Move constructor
         * Transfer ownership of memory from one IntArray to this one
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
         */
        void clear();

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
         * Function to swap elements at two 
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
         */
        int& operator[](unsigned int index);

        /**
         * Overloaded the [] operator for constant references
         */
        const int& operator[](unsigned int index) const;

        /**
         * Iterator for IntArr
         * @return Value at the beginning of the IntArray
         */
        int* begin() {return data;}

        /**
         * Iterator for constant IntArr
         */
        const int* begin() const {return data;}

        /**
         * Iterator for constant IntArr
         */
        int* end() {return data + numOfElements;}

        /**
         * Iterator for constant IntArr
         * @return const value at the end of IntArr
         */
        const int* end() const {return data + numOfElements;}

        int* cend() {return }

};

#endif