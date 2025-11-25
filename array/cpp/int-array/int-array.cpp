#include "int-array.h"
using namespace std;

IntArray::IntArray(int initialSize) {
    if(initialSize <= 0) {
        initialSize = 2;
    }
    capacity = initialSize;
    numOfElements = 0;
    data = new int[capacity];
}

IntArray::~IntArray() {
    delete[] data;
}

void IntArray::expandCapacity() {
    unsigned int newCapacity = capacity*2;
    int* newData = new int[newCapacity];
    for(int i = 0; i < numOfElements; ++i) {
        newData[i] = *(data+i);
    }
    delete[] data;
    data = newData;
    capacity = newCapacity;
}

void IntArray::appendElement(int value) {
    if(numOfElements == capacity) {
        expandCapacity();
    }
    data[numOfElements++] = value;
}

void IntArray::prependElement(int value) {
    if(numOfElements == capacity) {
        expandCapacity();
    }
    for(int i = numOfElements; i >= 0; --i) {
        data[i] = data[i-1];
    }
    data[0] = value;
    ++numOfElements;
}

void IntArray::insertAt(int value, int index) {
    if(numOfElements == capacity) {
        expandCapacity();
    }
    for(int i = numOfElements; i > index; --i) {
        data[i] = data[i-1];
    }
    data[index] = value;
    ++numOfElements;
}

unsigned int IntArray::size() const {
    return numOfElements;
}

bool IntArray::isEmpty() const {
    return numOfElements == 0;
}

void IntArray::printList() {
    cout << "{";
    for(unsigned int i = 0; i < numOfElements; ++i) {
        cout << data[i];
        if(i != numOfElements-1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

bool IntArray::operator==(const IntArray& otherArr) const {
    if(numOfElements != otherArr.numOfElements) {
        return false;
    }
    for(unsigned int i = 0; i < numOfElements; ++i) {
        if(data[i] != otherArr.data[i]) {
            return false;
        }
    }
    return true;
}

