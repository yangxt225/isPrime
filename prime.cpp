#include <iostream>

bool isPrime(int num)
{
	for(int d = 2; d*d < num + 1; ++d)
		if(!(num % d))
			return false;
	return true;
}

int main()
{
	std::cout << "enter the number: ";
	int n;
	std::cin >> n;
	for(int i = 2; i < n; ++i)
		if(isPrime(i))
			std::cout << i << ", ";
	std::cout << std::endl;
	return 0;
}
