/******************************************************************************
 * Copyright (C) 2020 by Rekha S-BMS College of Engineering
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Rekha S and the BMS College of Engineering  are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Source code of week 1 assessment under the Embedded systems course on coursera
 *
 * This source contains few functions to statistically analyse a given set of 40 charcters. 
 * First the program prints the initial array using a print_array() function and the sort them
 * in descending order usinf sort_array() function and print the same.Further it will 
 * calculate the mean,meadian,minimum and maximum for the sorted array of data using the 
 * appropirate functions and display them. 
 *
 * @author Rekha S
 * @date   9-6-2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char mean,median,minimum,maximum;
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
