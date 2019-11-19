# include <iostream>

int main_1423()
{
	double length, swimmed_length = 0., step_length = 2.;
	int step;
	std::cin >> length;
	for (step = 0; swimmed_length < length; step++)
	{
		swimmed_length += step_length;
		step_length *= 0.98;
	}
	std::cout << step;
	return 0;
}
