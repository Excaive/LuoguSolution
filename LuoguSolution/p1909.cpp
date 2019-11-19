# include <iostream>

int main_p1909()
{
	int n, num, price, money_used_min = INT_MAX;
	std::cin >> n;
	for (int i = 1; i <= 3; i++)
	{
		std::cin >> num >> price;
		if (((n - 1) / num + 1) * price < money_used_min)
			money_used_min = ((n - 1) / num + 1) * price;
	}
	std::cout << money_used_min;
	return 0;
}
