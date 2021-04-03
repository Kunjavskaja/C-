#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;


vector<int>position;

class PKW
{
public:
	PKW(char n, int pos0, int v0);
	//Access specifier 
	int N = 50;
	char name;
	int pos;
	int v;
	int abstand =0;
	int v02=0;

	void drucke() {
		cout << "PKW: " << name << endl;
		cout << "Position:" << pos << endl;
		cout << "Geschwindigkeit: " << v << endl;
	}

	void bewege() {
		//Erste Schleife mit Anfangsgeschwindgikeit

		if (pos + v < N)
		{
			pos = pos + v;
		}
		else if (pos + v > N)
		{
			pos = pos + v - N;
		}
		position.push_back(pos);
		cout << "Die Position lautet nun: " << pos << endl;
		}
	};

class strasse
{
	void 

	size_t first = erster_PKW();
	int zahler = 0;
	ind index = 0;
	int position;


	{
		int minElementIndex = std::min_element(position.begin(), position.end()) - position.begin();
		int minElement = *std::min_element(position.begin(), position.end());
		cout << minElement;
	}
};

int main() {

	for (int j =0; j<5;j++){
		for (int i = 0; i < 10; i++) {
			PKW pkw('B' + i, 2 * i, 7);
			pkw.drucke();
			pkw.bewege();
			strasse s();
		}
	}
	return 0;
}

PKW::PKW(char n, int pos0, int v0)
{
	name = n;
	pos = pos0;
	v = v0;
}