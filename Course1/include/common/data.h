/**
 * @file data.h
 * @brief Conversions of data in other bases
 *
 * This file is used to convert the data in the array to different forms in different bases using function calls
 *
 *
 * @author Venkatesh R shenoy
 * @date September 6 2020
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Converts data into ASCII string
 *
 * Given a pointer to a data set, this will convert the data to its equivalent ASCII string in base provided
 *
 * @param data data to be converted
 * @param ptr Pointer provided to give output
 * @param base base to be converted to
 *
 * @return ASCII string as pointer ptr
 */
uint8_t my_itoa(int32_t data, uint8_t* ptr, uint8_t base);

/**
 * @brief Converts ASCII string into data
 *
 * Given a pointer to an ASCII string, this will convert it to its equivalent data value from the base provided.
 *
 * @param src pointer to the string
 * @param digits number of digits in the ASCII string
 * @param base base to be converted to
 *
 * @return value of the string
 */
int32_t my_atoi(uint8_t* src, uint8_t digits, uint8_t base);

/**
 * @brief base raised to power
 *
 * This function raises the number to a given power.
 *
 * @param base the index to be raised
 * @param raise the power to be raised
 *
 * @return raised value of the base
 */
int32_t my_power(uint8_t base, uint8_t raise);
