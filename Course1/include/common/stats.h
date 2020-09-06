/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Assignment 1 Venkatesh> 
 * @brief <Finding the statistics of a given set of numbers>
 *
 * <the program finds the mean, median,mode, maximum, minimum values of the set and arranges the numbers in descending order(largest to smallest)>
 *
 * @author <Venkatesh R Shenoy>
 * @date <16 August 2020 >
 *
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
void sort_array(unsigned char array[],int n);
/**
 * @brief <Sorts the array in Descending order>
 *
 * <The function takes input as starting address of a one dimensional array.The function sorts the numbers in the array in descending order(largest to smallest).>
 *
 * @param <*array> <Starting address of the array to be sorted>
 * @param <*ptr> <store starting address of the sorted array>
 */
unsigned char find_mean(unsigned char array[]);
/**
 * @brief <Find the mean of the data given in the array>
 * 
 * < the function takes input as the starting address of the array. Thefunction adds the data in the array and divides the sum by the size of the array.It returns the float value of mean.>
 *
 * @param <*array> <Starting address of the array>
 * @return <Mean value of the data in the array>
 */
unsigned char find_median(unsigned char sorted_array[], int n);
/**
 * @brief <Finds the medians of the given data>
 *
 *<The function takes the starting address of the array. The function Finds the median of the sorted array.>
 *
 * @param <*sorted_array> <Starting address of the sorted array>
 */
unsigned char find_maximum(unsigned char sorted_array[]);
/**
 * @brief <finds the maximum value of the data in the array>
 *
 * <The function takes input as a starting address of the sorted array. the function finds the maximum value of the data and returns it.>
 *
 * @param <*sorted_array> <Starting address of the sorted array>
 * @return <Maximum value of the data in the array>
 */
unsigned char find_minimum(unsigned char sorted_array[]);
/**
 * @brief <Finds the minimum of the array>
 *
 * <The function takes the input as the starting address of the sortedarray. The function finds the minimum value of the data in the array and returns it.>
 *
 * @param <*sorted_array> <Starting address of the sorted array>
 * @return <Minimum value of the data in the array>
 */
void print_array(unsigned char array[]);
/**
 * @brief <Prints the array>
 *
 * <The funnction takes input as the starting address of the array. the function prints the array.>
 *
 * @param <*array> <Starting address of the array>
 */
void print_statistics(unsigned char mean,unsigned char median,unsigned char max,unsigned char min);
/**
 * @brief < Prints the statistics of the array>
 *
 * <The function takes the input of mean,medians, maximum and minimum values and print them.>
 *
 * @param <mean> <Mean value of the array>
 * @param <median1> <one median of the array>
 * @param <median2> <second median of the array>
 * @param <max> <Maximum value of the array>
 * @param <min> <Minimum value of the array>
 */


#endif /* __STATS_H__ */
