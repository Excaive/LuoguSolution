# include <iostream>

int main_p1085()
{
	int time1, time2, time_max = 8, time_max_day = 0;
	for (int day = 1; day <= 7; day++)
	{
		std::cin >> time1 >> time2;
		if (time1 + time2 > time_max)
		{
			time_max = time1 + time2;
			time_max_day = day;
		}
	}
	std::cout << time_max_day;
	return 0;
}
