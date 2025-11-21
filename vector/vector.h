#ifndef VECTOR_H
#define VECTOR_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define VECTOR_CAPACITY 3

typedef struct vector {
    // Stores elements
    void **items;
    // Capacity of the current vector
    int capacity;
    // Number of elements in the vector
    int num_of_elements;
} vector;

/**
 * Vector constructor which initializes an empty vector containing
 * 0 elements having an initial capacity of 4.
 */
void InitializeVector(vector *vec);

/**
 * Build a vector with n values initially set at 0
 */
void BuildVector(vector *vec, int i);

/**
 * Builds a vector with n values in the specific range
 */
void BuildVectorWithinRange(vector *vec, int i1, int i2);

/**
 * Return the number of elements in the vector
 */
int Size(vector *vec);

/**
 * Return the capacity of the vector
 */
int Capacity(vector *vec);

/**
 * Alter the vector to a desired capacity and fill with 0's
 */
void Resize(vector *vec, int n);

/**
 * Reduce the capacity of the vector to match the number of elements
 */
void ShrinkToFit(vector *vec);

/**
 * Double the capacity of the vector
 */
void ExpandCapacity(vector *vec);

/**
 * Add an element to the end of the vector
 */
void AppendElement(vector *vec, void *);

/**
 * Add an element to the beginning of the vector
 */
void PrependElement(vector *vec, void *);

/**
 * Set an element at a desired location in the vector
 */
void SetElement(vector *vec, int i, void *);

/**
 * Get an element at a desired index
 */
int ElementAt(vector *vec, int);

/**
 * Get the element at the front of the vector
 */
int Front(vector *vec);

/**
 * Get the element at the end of the vector
 */
int Back(vector *vec);

/**
 * Swap elements from two desired locations 
 */
void SwapElements(vector *vec, int i1, int i2);

/**
 * Erase elements from [i1, i2]
 */
void EraseFrom(vector *vec, int i1, int i2);

/**
 * Erase the element at a desired location
 */
void RemoveAt(vector *vec, int i);

/**
 * Remove the element at the start of the vector
 */
void PopFront(vector *vec);

/**
 * Remove the element at the end of the vector
 */
void PopBack(vector *vec);

/**
 * Remove all elements in the vector
 */
void ClearAll(vector *vec);

/**
 * Function to determine if the vector has any elements
 */
bool IsEmpty(vector *vec);

/**
 * Free all memory used
 */
void DeallocateMemory(vector *vec);


#endif