# include <iostream>
# include <iomanip>

int main_1422()
{
	int ele_used;
	double charge;
	std::cin >> ele_used;
	if (ele_used <= 150)
		charge = ele_used * 0.4463;
	else if (ele_used <= 400)
		charge = 150 * 0.4463 + (ele_used - 150.) * 0.4663;
	else
		charge = 150 * 0.4463 + (400. - 150.) * 0.4663 + (ele_used - 400.) * 0.5663;
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1) << charge;
	return 0;
}
