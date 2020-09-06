#ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Converts integer to ASCII String
 *
 * Given a pointer to a char data set, and 32 bit integer, 
 * it converts the integer to ASCII String representation according to the given
 * base. 
 *
 * @param ptr Pointer to data array
 * @param data Integer
 * @param base Base provided from 2 to 16	
 *
 * @return length of the String including null character and if present
 * -ve sign
 */

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Converts an ASCII String to integer
 *
 * Given a pointer to a char data set, and the length of the string
 * The function gives the value of the ASCII string accordng to the base.
 *
 * @param ptr Pointer to data array
 * @param digits Length of the String
 * @param base Base provided from 2 to 16
 *
 * @return value of the integer
 * 
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);
#endif

