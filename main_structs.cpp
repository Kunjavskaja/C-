#include <iostream>

struct Point {
	float x; 
	float y;
};
//So könnte man sich Adressbuch bauen
struct Person {
	std::string firstName;
	std::string lastName;
	int age;
};

int main()
{
	Point p = Point{1.0f, 2.0f};

	std::cout << p.x << std::endl << p.y << std::endl;

	Person person = Person();
	person.age = 27;
	person.firstName = "Max";
	person.lastName = "Mustermann";
	// c_str() Umwandlung in String -> Zeichenkette 
	std::cout << person.firstName.c_str() << person.lastName.c_str() << "\n";
	std::cout << person.age << "Jahre alt" << std::endl;

	//Speichern in einem Array 

	Person adressBook[10];
	adressBook[0].age = 27;
	adressBook[1] = person;

	system("PAUSE");
	return 0;
}