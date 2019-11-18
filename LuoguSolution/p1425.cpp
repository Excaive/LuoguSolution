# include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int time_used = (c - a) * 60 + (d - b);
	int e = time_used / 60;
	int f = time_used % 60;
	std::cout << e << " " << f;
	return 0;
}
