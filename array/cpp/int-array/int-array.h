#ifndef INT_ARRAY
#define INT_ARRAY
#include <iostream>


class IntArray {
    private:
        /**
         * 
         */
        int* data;

        /**
         * 
         */
        unsigned int numOfElements;

        /**
         * 
         */
        unsigned int capacity;
    public:
        /**
         * Constructor for the array
         */
        IntArray(int initialSize);

        /**
         * Destructor for the array
         */
        ~IntArray();

        /**
         * Function to expand capacity of the array
         */
        void expandCapacity();

        /**
         * 
         */
        void appendElement(int value);

        /**
         * 
         */
        void prependElement(int value);

        /**
         * 
         */
        void insertAt(int value, int index);

        /**
         * 
         */
        bool findElement(int value) const;

        /**
         * 
         */
        bool isEmpty();

        /**
         * Get the number of elements in the array
         */
        unsigned int size();

        /**
         * 
         */
        void printList();

        /**
         * 
         */
        void swap(IntArray arr, int index1, int index2);

        /**
         * Overloaded the == operator for testing purposes
         */
        bool operator==(const IntArray& arr) const;

        /**
         * 
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

};

#endif