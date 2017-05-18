#include <iostream>
#include <string>


int main(){
    int n;
	
    std::cout << "Give a value of N: ";
    std::cin >> n;
	
	for (int i = 1; i <= n - i; i++)
	{
		for (int k = 0; k <= n - i; k++)
		{
			std::cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	std::cin.get()
    return 0;
}