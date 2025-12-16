#include "int-array.h"
using namespace std;

IntArray::IntArray(int initialSize) {
    if(initialSize <= 0 || initialSize >= 101) {
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
    if(index >= numOfElements || index < 0) {
        throw std::out_of_range("IntArray::at() index out of range");
    }
    if(numOfElements == capacity) {
        expandCapacity();
    }
    for(int i = numOfElements; i > index; --i) {
        data[i] = data[i-1];
    }
    data[index] = value;
    ++numOfElements;
}

bool IntArray::findElement(int value) const {
    if(numOfElements == 0) {
        return false;
    }
    for(int i = 0; i <= numOfElements; ++i) {
        if(data[i] == value) {
            return true;
        }
    }
    return false;
}

int& IntArray::at(unsigned int index) {
    if(index >= numOfElements) {
        throw std::out_of_range("IntArray::at() index out of range");
    }
    return *(data+index);
}

const int& IntArray::at(unsigned int index) const {
    if(index >= numOfElements) {
        throw std::out_of_range("IntArray::at() index out of range");
    }
    return *(data+index);
}

bool IntArray::isEmpty() const {
    return numOfElements == 0;
}

void IntArray::clear() {
    for(int i = 0; i <= numOfElements; ++i) {
        data[i] = NULL;
    }
}

unsigned int IntArray::getCapacity() {
    return capacity;
}

unsigned int IntArray::size() const {
    return numOfElements;
}

void IntArray::ShrinkToFit() {
    int* newData = new int[numOfElements+1];
    for(int i = 0 ; i <= numOfElements; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity = numOfElements+1;
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

IntArray& IntArray::operator=(const IntArray& other) {
    if (this == &other) {
        return *this;
    }
    delete[] data;
    numOfElements = other.numOfElements;
    data = new int[numOfElements];
    for (unsigned int i = 0; i < numOfElements; ++i) {
        data[i] = other.data[i];
    }
    return *this;
}

IntArray& IntArray::operator=(IntArray&& other) noexcept {
    if (this == &other) {
        return *this;
    }
    delete[] data;
    data = other.data;
    numOfElements = other.numOfElements;
    other.data = nullptr;
    other.numOfElements = 0;
    return *this;
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

bool IntArray::operator!=(const IntArray& otherArr) const {
    return !(*this == otherArr);
}

int& IntArray::operator[](unsigned int index) {
    return at(index);
}

const int& IntArray::operator[](unsigned int index) const {
    return at(index);
}