#ifndef LIBRARY_H
#define LIBRARY_H

#include <math.h>

#define ERROR -1
#define NO_ROOTS 0
#define ONE_ROOT 1
#define TWO_ROOTS 2

int solve(float a, float b, float c, float *x1, float *x2);
float discriminant(float a, float b, float c);

#endif
