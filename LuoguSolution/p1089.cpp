# include <iostream>

int main_p1089()
{
	int money_have = 0, money_store = 0, money_used;
	for (int month = 1; month <= 12; month++)
	{
		money_have += 300;
		std::cin >> money_used;
		money_have -= money_used;
		if (money_have < 0)
		{
			std::cout << - month;
			return 0;
		}
		else
		{
			money_store += money_have / 100 * 100;
			money_have %= 100;
		}
	}
	std::cout << money_have + money_store / 100 * 120;
	return 0;
}
