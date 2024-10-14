//#include <iostream>
//#include "GraphicsManager.h"	
//
//using namespace std;
//
//
//
//int main()
//{
//	int age;
//	int totalPeople = 0;
//	double totalCost = 0;
//	const double under16Price = 2.50;
//	const double discout65Price = 3.00;
//	const double regularPrice = 5.00;
//	const double discountPrice = 0.20;
//
//	cout << "Enter your age: "<<endl;
//	while (true) {
//		cin >> age;
//		if (age == -1)
//		{
//			break;
//		}
//		else if (age <= 16) {
//			//cout << "The price will be £" << under16Price;
//			totalCost += under16Price;
//		}
//		else if (age >= 65) {
//			//cout << "The price will be £" << discout65Price;
//			totalCost += discout65Price;
//		}
//		else
//		{
//			//cout << "The price will be £" << regularPrice;
//			totalCost += regularPrice;
//		}
//		totalPeople++;
//	}
//	
//	if (totalPeople >= 6)
//	{
//		totalCost *= discountPrice;
//	}
//
//	cout << "Group sizes of 6 people and over get a 20% discount,\n so your new total will be £" << totalCost;
//
//
//	system("Pause");
//}