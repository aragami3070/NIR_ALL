#pragma once
#include <cmath>

double solve(long long x, long long y) {
	return (y * y * sin(x * x) * 1.0) / (x + y*y) ;
}
