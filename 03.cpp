#include<iostream>
#include<vector>
#include<functional>
#include<cmath>

int main()
{
	std::vector<double> angles{ 30 * 3.1415926 / 180 , 60 * 3.1415926 / 180 , 90 * 3.1415926 / 180 };

	std::vector<std::function<void(const double&)>> functions;
	functions.push_back([](const double& angle){std::cout << "sin: " << std::sin(angle) << ' ';});
	functions.push_back([](const double& angle) {std::cout << "cos: " << std::cos(angle) << ' '; });
	functions.push_back([](const double& angle) {std::cout << "tan: " << std::tan(angle) << ' '; });
	
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
	return 0;
}
