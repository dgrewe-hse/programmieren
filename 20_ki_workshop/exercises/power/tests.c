/*
 * tests.c - Test suite for power function
 * 
 * All tests will FAIL with the buggy version.
 * Students use these failures to guide their debugging with AI.
 */

#include <assert.h>
#include <stdio.h>
#include "power.h"

int main() {
    printf("Running tests for power function...\n\n");
    
    // Test 1: Basic case - 2^3 = 8
    printf("Test 1: power(2, 3) == 8\n");
    assert(power(2, 3) == 8);
    printf("  ✓ PASSED\n\n");
    
    // Test 2: Another basic case - 5^2 = 25
    printf("Test 2: power(5, 2) == 25\n");
    assert(power(5, 2) == 25);
    printf("  ✓ PASSED\n\n");
    
    // Test 3: Exponent of 1 - 3^1 = 3
    printf("Test 3: power(3, 1) == 3\n");
    assert(power(3, 1) == 3);
    printf("  ✓ PASSED\n\n");
    
    // Test 4: Exponent of 0 - any number^0 = 1
    printf("Test 4: power(10, 0) == 1\n");
    assert(power(10, 0) == 1);
    printf("  ✓ PASSED\n\n");
    
    // Test 5: Edge case - 1^5 = 1
    printf("Test 5: power(1, 5) == 1\n");
    assert(power(1, 5) == 1);
    printf("  ✓ PASSED\n\n");
    
    // Test 6: Larger exponent - 2^10 = 1024
    printf("Test 6: power(2, 10) == 1024\n");
    assert(power(2, 10) == 1024);
    printf("  ✓ PASSED\n\n");
    
    printf("All tests passed!\n");
    return 0;
}

