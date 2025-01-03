#pragma once
#include <cmath>

// ‘ункци€ рекурсивно вычисл€юща€ x^n
double recursion(double x, long long n) {
	// если n == 0
	if (n == 0) {
		// то возвращаем 1
		return 1;
	}
	// если n > 0
	else if (n > 0) {
		// то возвращаем x * x^(n-1)
		return x * recursion(x, n - 1);
	}
	// если n < 0
	else {
		// то возвращаем 1 / (x^|n|)
		return 1 / recursion(x, abs(n));
	}
}
