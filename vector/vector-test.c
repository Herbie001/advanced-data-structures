#include "vector.h"
#include <stdio.h>
#include <stdlib.h>
// test using the following:
// gcc -Wall -Wextra -o vector-test vector.c vector-test.c
// then 
// ./vector-test


void SizeTest() {
    vector v;
    InitializeVector(&v);
    if(Size(&v) != 0) {
        printf("SizeTest FAILED: expected 0, got %d\n", Size(&v));
    } else {
        printf("SizeTest PASSED\n");
    }

}

void CapacityTest() {

}

void ResizeTest() {

}

void ShrinkToFitTest() {

}

void ExpandCapacityTest() {

}

void AppendElementTest() {

}

void PrependElementTest() {

}

void SetElementTest() {

}

void ElementAtTest() {

}

void FrontTest() {

}

void BackTest() {

}

void SwapElementsTest() {

}

void PopFrontTest() {

}

void PopBackTest() {

}

void ClearAllTest() {

}

void IsEmptyTest() {

}


int main(void) {
    SizeTest();


    return 0;
}