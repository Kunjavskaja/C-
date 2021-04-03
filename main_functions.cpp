#include <iostream>
using namespace std;
//Funktionen schreiben 

int userInput(int number)
{
	int input = 0;
	cout << "Gib die " << number << ". Zahl an: ";
	cin >> input;
	cout << "\n\n";

	return input;
}

// Gleicher Name, andere Funktion 
int userInput()
{
	return userInput(1);
}

//void --> Nichts zurückgeben

void outputHello()
{
	cout << "Hallo und willkommen !!\n\n";
	return;
	cout << "Geheimes";
}


int main() {

	//Funktionen schreiben 

	outputHello();
	int input1 = 0;
	int input2 = 0;
	input1 = userInput();
	input2 = userInput(2);

	cout << (input1 * input2);
	cout << "\n\n";
	system("PAUSE");
	return 0;
}


	//Alter Bestimmen und einer Klasse zuordnen; Switch Funktion mit einbauen 
	/*
	int age = -1;
	cout << "Gib dein Alter an: ";
	cin >> age;

	//cout << (age >= 18 ? "erwachsen" : "kind");

	//switch (age)
		{
			case 0:
				cout << "0";
				cout << "bla";
				break;
			case 1:
				cout << "1";
				break;
			case 2:
			case 3:
				cout << "2 oder 3";
				break;
			default:
				cout << "Eingabe ungueltig";
				break;
		}
	
	system("PAUSE");
	return 0;
	
}
*/