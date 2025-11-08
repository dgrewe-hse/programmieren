/*
 * power.c - Buggy power function for debugging exercise (Hands-on 2)
 * 
 * This code compiles without errors but produces incorrect results.
 * Students use AI as a diagnostic tutor to identify and fix the bug.
 * 
 * BUG: Incorrect initialization of result variable
 */

/**
 * Calculate base raised to the power of exp
 * 
 * @param base The base number
 * @param exp The exponent (non-negative)
 * @return base^exp
 * 
 * Examples:
 *   power(2, 3) should return 8
 *   power(5, 2) should return 25
 *   power(3, 1) should return 3
 *   power(10, 0) should return 1
 */
int power(int base, int exp) {
    int result = 0;  // BUG: Wrong initialization! Should be 1.
                     // Multiplying by 0 always gives 0.
    
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    
    return result;
}

