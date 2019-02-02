/*
    The concept of NULL
    When NULL is assigned to a pointer, it means the pointer does not point to anything.
    The null concept refers to the idea that a pointer can hold a special   value that is not
    equal to another pointer. It does not point to any area of memory. Two  null pointers
    will always be equal to each other. There can be a null pointer type for    each pointer type,
    such as a pointer to a character or a pointer to an integer, although   this is uncommon.
    The null concept is an abstraction supported by the null pointer    constant. This constant
    may or may not be a constant zero. A C programmer need not be concerned     with their
    actual internal representation.
    The NULL macro is a constant integer zero cast to a pointer to void. In     many libraries,
    it is defined as follows:
    #define NULL
    ((void *)0)
    This is what we typically think of as a null pointer. Its definition    frequently can be found
    within several different header files, including stddef.h, stdlib.h, and    stdio.h.
    If a nonzero bit pattern is used by the compiler to represent null, then    it is the compiler’s
    responsibility to ensure all uses of NULL or 0 in a pointer context are     treated as null
    pointers. The actual internal representation of null is     implementation-defined. The use
    of NULL and 0 are language-level symbols that represent a null pointer.
    The ASCII NUL is defined as a byte containing all zeros. However, this is not the same
    as a null pointer. A string in C is represented as a sequence of    characters terminated by
    a zero value. The null string is an empty string and does not contain   any characters.
    Finally, the null statement consists of a statement with a single   semicolon. Interestingly, we can assign a zero to a pointer, but we cannot assign any other integer value. Consider the following assignment operations:
|
    Chapter 1: Introduction
        p = 0;
        p = NULL;
        p = 100; //Syntax error
        p = num; //Syntax error

    Explicit comparison to NULL is not necessary

    if (p) { ... } else { ... }

        If pi has been assigned a NULL value in this context, then it will be interpreted as the
        binary zero. Since this represents false in C, the else clause will be executed if pi contains
        NULL .

    REDUNDANT valid equvalents
    if (p == NULL) { ... } else { ... }
    if (p != NULL) { ... } else { ... }

    int number;
    int *p = 0; // Zero refers to the null pointer,NULL
    p = &number;
    *p = 0; // Zero refers to the integer zero
*/