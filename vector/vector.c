#include "vector.h"

void InitializeVector(vector *vec) {
    vec->capacity = VECTOR_CAPACITY;
    vec->num_of_elements = 0;
    vec->items = malloc(sizeof(void *) * vec->capacity);
}

void BuildVector(vector *vec, int n) {
    vec->capacity = n;
    vec->num_of_elements = 0;
    vec->items = malloc(sizeof(void *) * n);
    for(int i = 0; i < n; ++i) {
        vec->items[i] = NULL;
    }
}

void BuildVectorWithinRange(vector *vec, int i, int j) {
    if(i < 0 || j < 0 || j < i) {
        // return error, not expected behavior
    }
    vec->capacity = range;
    vec->num_of_elements = 0;
    vec->items = malloc(sizeof(void *) * range);
    for(int i = 0; i < range; ++i) {
        vec->items[i] = 
    }
}

int Size(vector *vec) {
    return vec->num_of_elements;
}

int Capacity(vector *vec) {
    return vec->capacity;
}

void Resize(vector *vec, int n) {

}

void ShrinkToFit(vector *vec) {
    if(vec->capacity == vec->num_of_elements) {
        return;
    }

}

void AppendElement(vector *vec, void *) {

}

void PrependElement(vector *vec, void *) {

}

void SetElement(vector *, int, void *) {

}

int ElementAt(vector *, int i) {

}

int Front(vector *vec) {

}

int Back(vector *vec) {

}

void SwapElements(vector *vec, int i1, int i2) {

}

void EraseFrom(vector *vec, int i1, int i2) {

}

void RemoveAt(vector *vec, int i) {

}

void PopFront(vector *vec) {

}

void PopBack(vector *vec) {

} 

void ClearAll(vector *vec) {

}

bool IsEmpty(vector *vec) {
    return vec->num_of_elements == 0;
}

void DeallocateMemory(vector *vec) {
    free(vec->items);
    vec->num_of_elements = 0;
}