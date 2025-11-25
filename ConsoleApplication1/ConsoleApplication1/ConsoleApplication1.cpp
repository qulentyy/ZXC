// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int masa, wzrost, BMI;
	std::cout << "Podaj mase cia³a (w kilo):\n";
	std::cin >> masa;
	std::cout << "Podaj wzrost (w cm):\n";
	std::cin >> wzrost; 
	BMI = wzrost / masa;
	std::cout << "wynik masy cia³a" << BMI; "\n";
	if (BMI <= 16)
      std::cout << "wyg³odzenie\n";
		else if (BMI <= 16.99)
			std::cout << "wychudzenie";
			else if (BMI <= 18.49)
				std::cout << "niedowagê\n";
				else if (BMI <= 24.99)
					std::cout << "wagê prawid³ow¹\n";
					else if (BMI <= 29.9)
						std::cout << "nadwagê\n";
						else if (BMI <= 34.99)
							std::cout << "I stopieñ oty³oœci\n";
						    else if (BMI <= 39.99)
		                         std::cout << "II stopieñ oty³oœci\n";
						         else if (BMI <= 40)
		                              std::cout << "oty³oœæ skrajn¹\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



