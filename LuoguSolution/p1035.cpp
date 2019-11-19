# include <iostream>

int main_p1035()
{
	double n, k, S = 0.;
	std::cin >> k;
	for (n = 1; S <= k; n++)
		S += 1. / n;
	std::cout << n - 1;
	return 0;
}
