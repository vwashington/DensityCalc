#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double mass, density, volume;

	cout << "Enter the Mass of the Object: ";
	cin >> mass;

	cout << "Enter the Density of the Object: ";
	cin >> density;

	volume = mass / density;
	cout << setprecision(6) << fixed;
	int test = mass++;

	cout << "The Volume is equal to: " << volume << endl;

	cout << test << " " << mass << endl;

	
	system("pause");

	return 0;
}