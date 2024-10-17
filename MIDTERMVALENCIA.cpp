#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float UsdToPhp, PoundstoPhp;
	float Total_cost, total_costToPhp;
	
	cout << "---------------------------------------------------------" << endl;
	cout << "Enter the Price of Sugar\t:\t " ;
	cin >> sugarPriceUSD;
	cout << "Enter the Price of Rice\t\t:\t " ;  
	cin >> ricePricePound;
	cout << "Enter the Price od sardines\t:\t " ;
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee\t:\t " ;
	cin >> coffeePriceUSD;
	cout << "Enter the Price of Milk\t\t:\t " ;
	cin >> milkPriceUSD;
	cout << "---------------------------------------------------------" << endl;
	cout << "Enter the Quantity of Sugar\t:\t " ;
	cin >> sugarQty;
	cout << "Enter the Quantity of Rice\t:\t " ;
	cin >> riceQty;
	cout << "Enter the Quantity of Sardines\t:\t " ;
	cin >> sardinesQty;
	cout << "Enter the Quantity of Coffee\t:\t " ;
	cin >> coffeeQty;
	cout << "Enter the Quantity of Milk\t:\t " ;
	cin >> milkQty;
	cout << "---------------------------------------------------------" << endl;
	float total_cost = (sugarPriceUSD)*(sugarQty)+(ricePricePound)*(riceQty)+(sardinesPricePound)*(sardinesQty)+(coffeePriceUSD)*(coffeeQty)+(milkPriceUSD)*(milkQty);
	
	cout << "Total_cost in PHP\t\t:\t " << total_cost << endl;
	return 0;
}