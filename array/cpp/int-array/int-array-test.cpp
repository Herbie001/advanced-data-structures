#include "int-array.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

void TestExpandCapacity(IntArray arr) {
    // Initialize IntArray with 0 elements, will be initialized with 2 by default
    IntArray expected(0);
    expected.appendElement(10);
    expected.prependElement(5);
    // Check size
    assert(expected.size() == 2);
    // Expand capacity incoming after adding another element
    expected.appendElement(15);
    // Expecting size to be doubled, 2*2 = 4
    assert(expected.size() == 4);
}

void TestAppendElement(IntArray& arr) {
    IntArray expected(5);
    expected.appendElement(0);
    assert(expected[expected.getCapacity()] == 0);
    expected.appendElement(5);
    assert(expected[expected.getCapacity()] == 5);
    expected.appendElement(10);
    assert(expected[expected.getCapacity()] == 10);
}

void TestPrependElement(IntArray& arr) {
    IntArray expected(5);
    expected.appendElement(0);
    assert(expected[expected.size()] == 0);
    expected.appendElement(1);
    assert(expected[expected.size()] == 1);
    expected.appendElement(2);
    assert(expected[expected.size()] == 2);
}

void TestInsertAt(IntArray& arr) {
    IntArray expected(5);
    expected.insertAt(10,3);
    assert(expected[3] == 10);
}

void TestFindElement(IntArray& arr) {
    IntArray arr(5);
    assert(arr.findElement(5) == false);
    for (int i = 0; i <= 5; ++i) {
        arr[i] = i;
    }
    assert(arr.findElement(5) == true);
    assert(arr.findElement(15) == false);
}

void TestIsEmpty(IntArray& arr) {
    assert(arr.isEmpty());
    IntArray expected(3);
    assert(arr == expected);
    expected.appendElement(4);
    assert(!(arr == expected));
}

void TestClear() {
    IntArray arr(5);
    for(int i = 0; i <= 5; ++i) {
        arr[i] = i;
    }
    assert(arr.isEmpty() == false);
    assert(arr.getCapacity() == arr.size());
    arr.clear();
    assert(!(arr.getCapacity() == arr.size()));
    assert(arr.getCapacity() == 5);
    assert(arr.size() == 0); 
}

void TestGetCapacity() {
    IntArray arr(5);
    assert(arr.getCapacity() == 5);
    for (int i = 0; i <= 5; ++i) {
        arr[i] = i;
    }
    arr.appendElement(6);
    assert(arr.getCapacity() == 10);
}

void TestSize(IntArray& arr) {
    assert(arr.size() == 0);
    arr.prependElement(10);
    arr.prependElement(15);
    arr.appendElement(20);
    assert(arr.size() == 3);
}

void TestShrinkToFit() {
    IntArray arr(5);
    assert(arr.size() == 0);
    assert(arr.getCapacity() == 5);
    arr.prependElement(1);
    arr.prependElement(2);
    assert(arr.size() == 2);
    assert(arr.getCapacity() == 5);
    arr.ShrinkToFit();
    assert(arr.size() == 2);
    assert(arr.getCapacity() == arr.size());
}

void TestPrintList(IntArray& arr) {
    arr.printList();
}

void TestSwap() {
    IntArray arr(6);
    for(int i = 0; i <= 5; ++i) {
        arr[i] = i;
    }
    assert(arr[1] == 1 && arr[4] == 4);
    arr.swap(1,4);
    assert(arr[1] == 4 && arr[4] == 1);
}


int main(int argc, char* argv[]) {

    /**
     * First array for testing
     */
    IntArray test_arr_0(5);
    TestPrintList(test_arr_0);
    TestIsEmpty(test_arr_0);

    /**
     * Second array for testing: capacity 6 with [0,5] values
     */
    IntArray test_arr_1(6);
    for(int i = 0; i <= 5; ++i) {
        test_arr_1[i] = i;
    }

    /**
     * Third array for testing: capacity 15 with values i*5
     */

    return 0;
}