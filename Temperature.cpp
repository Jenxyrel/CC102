#include <iostream>
using namespace std;
int main()
{
	int temperature;
	
	cout << "Enter the temperature: " << endl;
	cin >> temperature;
	if (temperature <32) {
		cout << "Bring a Heavy Jacket" << endl;
	}	
    else if(temperature >= 32 && temperature <=50 ){
	
		cout << "Bring a Light Jacket" << endl;
	}
	else{ 
		cout << "No Jacket needed" << endl;
	}
	
	return 0;
}
	