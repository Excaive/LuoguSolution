# include <iostream>
# include <set>

int main()
{
	double A, B, C;
	bool flag = false;
	std::cin >> A >> B >> C;
	for (int i = 100; i <= 999; i++)
	{
		int j = i * B / A;
		if (i * B != j * A)
			continue;
		int k = i * C / A;
		if (i * C != k * A)
			continue;
		
		std::set<int> s = {};
		s.insert(i / 100);
		s.insert((i / 10) % 10);
		s.insert(i % 10);
		s.insert(j / 100);
		s.insert((j / 10) % 10);
		s.insert(j % 10);
		s.insert(k / 100);
		s.insert((k / 10) % 10);
		s.insert(k % 10);

		int num;
		for (num = 1; num <= 9; num++)
			if (s.find(num) == s.end())
				break;

		if (num == 10)
		{
			std::cout << i << " " << j << " " << k << std::endl;
			flag = true;
		}		
	}
	if (!flag)
		std::cout << "No!!!";
	return 0;
}
