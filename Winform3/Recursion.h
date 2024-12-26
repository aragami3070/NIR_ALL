#pragma once
#include <cmath>

double recursion(double x, long long n) {
	if (n == 0) {
		return 1;
	}
	else if (n > 0) {
		return x * recursion(x, n - 1);
	}
	else {
		return 1 / recursion(x, abs(n));
	}
}
