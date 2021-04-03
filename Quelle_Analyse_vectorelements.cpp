#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	int n;
	int idx = 0; 
	array<int, 100> a;
	cout << "Please put in the amount of numbers you want to input: " << endl;
	cin >> n;
	if (n > 100 || n < 1)

	{
		cout << "Input should be between 1 and 100 " << endl;
		return 1;
	}
	cout << "Please put in the numbers for the array: " << endl;
	int sum = 0;
	for (idx = 0; idx < n; ++idx)
	{
		int inp = 0;
		cin >> inp;
		sum = sum + inp;
		a[idx] = inp;
	}
	cout << "The sum is " << sum << endl;

	for (int i = n - 1; i >= 0; i--)
	{
		cout << "Here are the inputted elements in the array " << a[i] << endl;
	}


	double max = *max_element(a.begin(), a.end());
	cout << "Das Maximal Element ist: " << max << endl;
	int dis = distance(a.begin(), max_element(a.begin(), a.end()));
	cout << "Das Maximal Element liegt bei: " << dis << endl;

	return 0;
}