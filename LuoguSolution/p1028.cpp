# include <iostream>
# include <vector>

int main_p1028()
{
	std::vector<int> num;
	num.push_back(1);
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 2 != 0)
			num.push_back(num[i - 1]);
		else
			num.push_back(num[i - 1] + num[i / 2]);
	}
	int n;
	std::cin >> n;
	std::cout << num[n];

	return 0;
}
