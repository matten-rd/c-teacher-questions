#include <stdio.h>

/**
 * @brief 
 * Extract bits between start-end (inclusive) from value.
 * This is achieved by applying an AND mask (bitwise ANDing) - a simple way of extracting a subset of bits.
 * The idea is to create a mask (binary number) that has 1's at the indices we want to keep and 0's at the other indices.
 * This works since any bit X that is ANDed with 1 remain the same (X AND 1 = X) and any bit ANDed with 0 is 0 (X AND 0 = 0).
 */
unsigned extractBits(unsigned value, unsigned start, unsigned end)
{
    unsigned mask;
    int numberOfBits = end - start + 1; // Number of bits to be extracted/set to 1 in the mask
    mask = (1 << numberOfBits) - 1;     // Set numberOfBits to 1 e.g. numberOfBits=8 => (1 << 8)-1=11111111 (255)
    mask <<= start;                     // Shift the 1's to correct position i.e. pad with [start] number of 0's on the right
    return (value & mask) >> start;     // Perform the bitwise AND and shift the isolated bits to LSB (to only get the isolated bits)
}

int main(int argc, char const *argv[])
{
    unsigned int message = 0x4E5735FE;

    // The message id consists of bits 29-22
    unsigned messageIdStart = 22;
    unsigned messageIdEnd = 29;

    // Extract the message id from the message by calling the extractBits function
    unsigned id;
    id = extractBits(message, messageIdStart, messageIdEnd);

    // Print the message id
    printf("The message id in hexadecimal format is: %x, and in decimal format: %d\n", id, id);

    return 0;
}
