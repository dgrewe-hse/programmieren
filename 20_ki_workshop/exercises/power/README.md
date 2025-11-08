# Power Function Debugging Exercise (Hands-on 2)

## Overview
This exercise provides a buggy `power(int base, int exp)` function that **compiles cleanly** but produces incorrect output. Students work in pairs to debug it using AI as a diagnostic tutor.

## The Bug
```c
int power(int base, int exp) {
    int result = 0;  // BUG: Should be 1
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}
```

**Problem:** `result` starts at 0. Multiplying by 0 always gives 0.
**Fix:** Initialize `result = 1` (multiplicative identity).

## Learning Goals
- Use AI to ask **diagnostic questions**, not provide fixes
- Understand initialization in loops
- Practice systematic debugging with test cases
- Recognize patterns in test failures

## Checkpoint Structure (20 min, pairs)

### Stage 1 (5 min): Run tests, recognize pattern
```bash
make test
```
**Observation:** All tests return 0. What's the common symptom?

### Stage 2 (5 min): Ask AI diagnostic questions
**Prompt example:**
```
My power function returns 0 for all inputs.
Ask me diagnostic questions about multiplication in loops.
Don't give me the fix yet.
```

### Stage 3 (5 min): Answer AI's questions, identify bug
Work with partner to answer AI's questions. Identify the initialization bug together.

### Stage 4 (5 min): Fix, test, and explore edge cases
1. Fix the initialization
2. Run tests (should pass)
3. Ask AI: "What other edge cases should I test for power functions?"

## Build & Test
```bash
make test     # Compile and run all tests
make clean    # Remove build artifacts
```

## Expected Test Results

### Before Fix (all fail)
```
Test 1: power(2, 3) == 8
  Expected: 8, Got: 0 ✗
```

### After Fix (all pass)
```
Test 1: power(2, 3) == 8
  ✓ PASSED
```

## Prompts for Students

### Diagnostic (Stage 2)
- "My power function returns 0 for all inputs. Ask me questions about how multiplication works in loops. Don't fix it."
- "What could cause multiplication to always return 0?"

### Understanding (Stage 4)
- "I changed result to 1. Explain why 1 is the correct initialization for power functions."
- "What edge cases should I test for power functions?"
- "Explain how the loop builds up the result step-by-step for power(2, 3)."

## Workshop Context
- **Time:** 20 minutes total
- **Format:** Pairs (alternate roles: A types/B thinks, then swap)
- **Focus:** Understanding through questioning, not just fixing

