#ifndef _EXT_MATH_H
#define _EXT_MATH_H

#include "math.h"
#include "dolphin/mtx.h"

typedef struct vec2f {
	float x;
	float y;
} Vec2f;

#define ABS(x) (((x) < 0) ? -(x) : (x))

#define VECDistanceXZ(a, b) sqrtf((((a)->x-(b)->x)*((a)->x-(b)->x))+(((a)->z-(b)->z)*((a)->z-(b)->z)))
#define VECMagXZ(a) sqrtf(((a)->x*(a)->x)+((a)->z*(a)->z))

#define sind(x) sin(M_PI*(x)/180.0)
#define cosd(x) cos(M_PI*(x)/180.0)
#define atan2d(y, x) (180.0*(atan2((y), (x)) / M_PI))

#endif