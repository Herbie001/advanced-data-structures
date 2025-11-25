#include "int-array.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

void TestExpandCapacity(IntArray arr) {

}

void TestAppendElement(IntArray& arr) {

}

void TestPrependElement(IntArray& arr) {

}

void TestInsertAt(IntArray& arr) {

}

void TestSize(IntArray& arr) {
    assert(arr.size() == 0);

}

void TestIsEmpty(IntArray& arr) {
    assert(arr.isEmpty());
    IntArray expected(3);
    assert(arr == expected);
    expected.appendElement(4);
    assert(!(arr == expected));
}

void TestPrintList(IntArray& arr) {
    arr.printList();
}


int main(int argc, char* argv[]) {
    IntArray arr(5);
    TestPrintList(arr);
    TestIsEmpty(arr);
    return 0;
}