#include <iostream>
#include "GraphicsManager.h"
using namespace std;


int main()
{


	int item1 = 0;
	int item2 = 0;
	int item3 = 0;
	int item4 = 0;
	int item5 = 0;
	int item6 = 0;

	int discount1 = 0;
	int TotalCostNoDisc1 = 0;
	int TotalCostDisc1 = 0;

	int discount2 = 0;
	int TotalCostNoDisc2 = 0;
	int TotalCostDisc2 = 0;

	int FullPrice = 0;
	int FullPriceDisc = 0;



	cout << "Enter the value of your items." << endl;
	cout << "Item 1: ";
	cin >> item1;
	cout << "Item 2: ";
	cin >> item2;
	cout << "Item 3: ";
	cin >> item3;
	cout << "Item 4: ";
	cin >> item4;
	cout << "Item 5: ";
	cin >> item5;
	cout << "Item 6: ";
	cin >> item6;
	cout << "The 6 item values are: " << item1 << ", " << item2 << ", " << item3 << ", " << item4 << ", " << item5 << ", " << item6 << endl;

	if (item1 < item2 && item1 < item3) {
		discount1 = item1;
		TotalCostNoDisc1 = item1 + item2 + item3;
		TotalCostDisc1 = TotalCostNoDisc1 - discount1;
		cout << "The cost of your first cart is: " << TotalCostDisc1 << endl;
	}
	else if (item2 < item1 && item2 < item3) {
		discount1 = item2;
		TotalCostNoDisc1 = item1 + item2 + item3;
		TotalCostDisc1 = TotalCostNoDisc1 - discount1;
		cout << "The cost of your first cart is: " << TotalCostDisc1 << endl;
	}
	else {
		discount1 = item3;
		TotalCostNoDisc1 = item1 + item2 + item3;
		TotalCostDisc1 = TotalCostNoDisc1 - discount1;
		cout << "The cost of your first cart is: " << TotalCostDisc1 << endl;
	}

	if (item4 < item5 && item4 < item6) {
		discount2 = item4;
		TotalCostNoDisc1 = item4 + item5 + item6;
		TotalCostDisc2 = TotalCostNoDisc2 - discount2;
		cout << "The cost of your second cart is: " << TotalCostDisc2 << endl;
	}
	else if (item5 < item4 && item5 < item6) {
		discount2 = item5;
		TotalCostNoDisc1 = item4 + item5 + item6;
		TotalCostDisc2 = TotalCostNoDisc2 - discount2;
		cout << "The cost of your second cart is: " << TotalCostDisc2 << endl;
	}
	else {
		discount2 = item6;
		TotalCostNoDisc2 = item4 + item5 + item6;
		TotalCostDisc2 = TotalCostNoDisc2 - discount2;
		cout << "The cost of your second cart is: " << TotalCostDisc2 << endl;
	}

	FullPrice = TotalCostNoDisc1 + TotalCostNoDisc2;
	FullPriceDisc = TotalCostDisc1 + TotalCostDisc2;

	cout << "You Total Cost without discounts was £" << FullPrice << " and with your 2 discounts being £"<<discount1<<" and £"<<discount2<<", it became £" << FullPriceDisc << endl;

	system("Pause");
}