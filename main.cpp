#include <iostream>
#include <ctime>
#include <random>
using namespace std;

float calc() {
	float in_circle = 0;
	float total = 0;

	for (int i = 0; i <= 20000000; i++) {
		float x = (float) rand() / RAND_MAX;
		float y = (float) rand() / RAND_MAX;
		if ( sqrt(x*x + y*y) <= 1 ) {
			in_circle += 1;
		}	
		total = i;
	}
	return (4 * in_circle / total);
}

int main() {
	srand(time(NULL));
	cout << endl;
	cout << "Pi approximation with Monte-Carlo Algorithm :  ";
	float pi = calc();
	cout << "pi ~= " << pi << endl;
	system("pause");
	return 0;
}
