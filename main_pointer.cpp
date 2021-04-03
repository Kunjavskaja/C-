#include <iostream>

using namespace std;
//Vairable number getrennt von Variable 1 
void SetTo27(int *number)
{
	*number = 27; //Wert auf den er zeigt mit Sternchen
}

void EuclideanDivide(unsigned int dividend, unsigned int divisor, unsigned int* quotient, unsigned int* remainder)
{
	*quotient = (unsigned int) dividend / divisor;
	*remainder = dividend % divisor; 
}

int main() {

	int variable1 = 27;
	//Zeiger
	int* pointer1 = &variable1;
	cout << &variable1 << endl;
	cout << pointer1 << endl;
	*pointer1 = 10;
	SetTo27(&variable1);
	cout << variable1 << endl;

	unsigned int dividend = 10;
	unsigned int divisor = 3; 
	unsigned int quotient = 0;
	unsigned int remainder = 0;
	EuclideanDivide(dividend, divisor, &quotient, &remainder);
	cout << quotient << endl;
	cout << remainder << endl;

	int array[] = { 0, 1, 2, 3, 4 };
	int* pointerToArray = nullptr;
	pointerToArray = array;
	cout << *pointerToArray << endl;
	//Stelle die Ausgegeben wird im int array
	pointerToArray+=4;
	cout << *pointerToArray << endl;

	void (*funcPointer)(int*) = SetTo27;
	funcPointer(&array[0]);
	cout << array[0] << endl;
	system("Pause");
	return 0;
}