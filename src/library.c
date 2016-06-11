#include "library.h"

int equal(float a, float b, float eps) {
    return fabs(a - b) < eps;
}

float discriminant(float a, float b, float c) {
	float d;
	d = b * b - 4 * a * c;
	return d;
}

int solve(float a, float b, float c, float *x1, float *x2) {
	if (x1 == 0 || x2 == 0)
		return ERROR;
        const float myr = discriminant(a, b, c);
        if (myr < 0)
		return NO_ROOTS;
        if (equal(myr, 0, 1E-10)) {
                *x1 = -b / (2 / a);
                return ONE_ROOT;
        }
	if (myr > 0) {
		*x1 = (-b - sqrt(myr)) / (2 * a);
		*x2 = (-b + sqrt(myr)) / (2 * a);
		return TWO_ROOTS;
	}
	return ERROR;
}
