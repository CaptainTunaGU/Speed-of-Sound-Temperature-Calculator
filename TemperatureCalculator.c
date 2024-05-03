/* ---- Speed of Sound Calculator ---- */
    /* Statement of input(s) Temperature, Temperature; C as a constant*/
    /* Statement of output(s) the speed of sound at the given temperature*/

/* Problem Statement: This program calculates the speed of sound (a) in air of a given temperature T(˚F) */
/* Author: Ian Langelett */
/* Created Date: 02/08/2024 */
/* Revised by: Ian Langelett */
/* Revision Date: 02/08/2024 */



/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

#include <stdio.h>      /* printf, scanf definitions */
#include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- C 1086*/
#define C 1086


/* ---- Function prototype definitions ---- */
     /*returndatatype functionname (argumentdatatype argumentname);*/

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main(void)
{
double first, /* input - Temperature reading. */
second,
third,
Temperature;
 /* output - speed of sound at given temperature */

/* Get the temperature readings. */
printf("Enter Temperature Reading In Fahrenheit=> ");
/*scan the users input*/
scanf("%lf", &Temperature);
/*find the calculation of air speed at that temperature*/
first = ((Temperature * 5) + 297) / 247;
second = sqrt(first); /* split into two parts to make it easier to with*/
third = C * second; /* multiply the constant and the square root of the given value*/
/*print what the speed of sound is at that temperature*/
printf("The Speed of Sound In That Temperature is %6.1f Feet per Second.\n", third);
/*finished*/

return(0);
}

/* ---- Function subprograms ---- */

    /* Description of subprogram actions */
