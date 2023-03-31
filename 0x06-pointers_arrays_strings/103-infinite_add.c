/*
 * File: 103-infinite_add.c
 * Author: Grace Kalombo
 */



char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, j;

    // check if result can fit in buffer
    if (len1 + len2 > size_r - 1) {
        return 0;
    }

    // add digits from right to left, starting from least significant digit
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
        }
        if (j >= 0) {
            sum += n2[j] - '0';
        }
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        r[i+j+1] = sum + '0'; // store result digit in buffer
    }

    // add carry if there is any
    if (carry) {
        if (len1 + len2 >= size_r - 1) {
            return 0;
        }
        r[0] = '1';
        return &r[0];
    }

    // remove leading zeros
    int k = 0;
    while (r[k] == '0' && k < len1 + len2 - 1) {
        k++;
    }
    return &r[k];
}


