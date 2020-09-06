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
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
void main()
{
  unsigned char test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char maximum,minimum;
  unsigned char mean,median;
  int i;
  /*for (i=0;i<40;i++)*/
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);
  mean = find_mean(test);
  sort_array(test,40);
  median =find_median(test,40);
  maximum= find_maximum(test);
  minimum= find_minimum(test);
  print_statistics(mean,median,maximum,minimum);
}
void sort_array(unsigned char array[],int n)
{
	int i=0;
	for(i=0;i<n-1;i++)
	{
		int j,temp=0;
		for(j=0;j<n-i-1;j++){
			if(array[j]<array[j+1]){
			temp = array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
	}
}
unsigned char find_mean(unsigned char array[])
{
	int sum=0;
	int i=0;
	unsigned char mean=0;
	for(i=0;i<40;i++){
		sum =sum+array[i];
	}
	mean = sum/40;
	return mean;
}
unsigned char find_median(unsigned char sorted_array[],int n)
{
	unsigned char median;
	median= (sorted_array[19]+sorted_array[20])/2;
	return median;
}
unsigned char find_maximum(unsigned char sorted_array[])
{
	int max=0;
	max = sorted_array[0];
	return max;
}
unsigned char find_minimum(unsigned char sorted_array[])
{
	unsigned char min=0;
	min = sorted_array[39];
	return min;
}
void print_array(unsigned char array[])
{
	int i;
	printf("The given Array is: \n");
	for(i=0;i<40;i++)
	{
		printf("%d ",array[i]);
	}
}
void print_statistics(unsigned char mean,unsigned char median,unsigned char max,unsigned char min)
{
	printf("\n Mean = %d.\n Median = %d.\n Maximum = %d.\n Minimum = %d.\n", mean, median, max, min);
}	

/*Add other Implementation File Code Here */
