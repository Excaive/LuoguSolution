# include <iostream>
# include <vector>

std::vector<int> match_fig{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int match_fig_multi(int i)
{
	if (i == 0)
		return match_fig[0];
	else
	{
		int fig = 0;
		while (i > 0)
		{
			fig += match_fig[i % 10];
			i /= 10;
		}
		return fig;
	}
}

int main()
{
	int n, equation_num = 0;
	std::cin >> n;
	for (int num1 = 0; num1 <= 1111; num1++)
		for (int num2 = 0; num2 <= 1111; num2++)
			if (match_fig_multi(num1) + match_fig_multi(num2) + match_fig_multi(num1 + num2) + 4 == n)
				equation_num++;
	std::cout << equation_num;
}
