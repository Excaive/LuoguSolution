# include <iostream>
# include <vector>
# include <cmath>

int prime_num = 0;
int n, k, num_in;
std::vector<int> numbers;

bool is_prime(int num)
{
	if (num < 2)
		return false;
	double sqrt_num = sqrt((double) num);
	for (int i = 2; i <= sqrt_num; i++)
		if (num % i == 0)
			return false;
	return true;
}

void search(int index, int k_now, int sum_now)
{
	while (index < n)
	{
		if (k_now < k)
		{	
			search(index + 1, k_now + 1, sum_now + numbers[index]);
			index++;
		}
		else
		{
			if (is_prime(sum_now))
				prime_num++;
			return;
		}
	}
	if (k_now == k)
	{
		if (is_prime(sum_now))
			prime_num++;
	}
	return;
}

int main_p1036()
{
	std::cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> num_in;
		numbers.push_back(num_in);
	}
	
	search(0, 0, 0);
	std::cout << prime_num;

	return 0;
}
