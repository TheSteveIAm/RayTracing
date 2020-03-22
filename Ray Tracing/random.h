#pragma once
#include <math.h>
#include "vec3.h"

using namespace std;

float random_zero_to_one() {
	return ((double)rand() / (RAND_MAX));
}

vec3 random_in_unit_sphere() {
	vec3 p;
	do {
		p = 2.0 * vec3(random_zero_to_one(), random_zero_to_one(), random_zero_to_one()) - vec3(1, 1, 1);
	} while (p.squared_length() >= 1.0);
	return p;
}