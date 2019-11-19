# include <iostream>
# include <set>

int main_p1008()
{
	for (int i = 100; i <= 333; i++)
	{
		int j = i * 2;
		int k = i * 3;
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
			std::cout << i << " " << j << " " << k << std::endl;
	}
	return 0;
}
