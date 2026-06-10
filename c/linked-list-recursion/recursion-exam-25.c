/*
Exercise 17 (8 pt.) - The Overlapping Strings (Overlapping Strings)
Write a recursive function:

C
int count_occ(char const* a, char const* b);
that calculates the number of times the string a appears in the string b, including overlapping occurrences.

CRITICAL RULES:

You cannot use any loop (for, while, do-while).

You cannot use any <string.h> functions (strlen, strncmp, etc.).

You are allowed to create only one helper function (which must also be recursive).

Example:
*/

int is_prefix(char const* a, char const* b) {
    // 1. SUCCESS CASE: If we reached the end of string a ('\0'), 
    // all previous characters matched and the string is complete.
    if (*a == '\0') {
        return 1; // Match successful.
    }

    // 2. FAILURE CASE 1: 'b' string'i bittiyse ama 'a' hala bitmediyse
    // (if the previous if did not catch it), the string does not fit here.
    if (*b == '\0') {
        return 0; // Match failed.
    }

    // 3. FAILURE CASE 2: If the current characters are not equal,
    // there is no need to continue; the match fails immediately.
    if (*a != *b) {
        return 0; // Match failed.
    }

    // 4. RECURSIVE STEP: If execution reached this point, the characters match.
    // Move both pointers one step to the right and check the remaining part.
    return is_prefix(a + 1, b + 1);
}

int count_occ(char const* a, char const* b) {
    if (*a == '\0') return 0;
    if (*b == '\0') return 0;

    // 2. YOUR STYLE: create the accumulator variable.
    int total_matches = 0; 

    // 3. CHECK AND UPDATE: 
    // If is_prefix finds a match here, add 1 to the accumulator.
    if (is_prefix(a, b) == 1) {
        total_matches++ ; 
    }

    // 4. MOVE FORWARD AND COLLECT NEW MATCHES:
    // Move one step right with b + 1 and search the remaining string.
    int new_matches = count_occ(a, b + 1);
    
    // Add newly found matches to the accumulator.
    total_matches = total_matches + new_matches;

    // 5. SINGLE EXIT POINT: Return the final accumulator value.
    return total_matches;
}