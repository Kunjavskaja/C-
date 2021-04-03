include <iostream>


using namespace std;

int main()
{
    double gewicht;
    double groesse;

    cout << "Geben sie ihr gewicht ein: ";
    cin >> gewicht;
    if (gewicht < 25 || gewicht > 250)
    {
        cout << "Kann kein Gewicht sein!";
        return 0;
    }
    cout << "Geben sie ihre groeße ein [m]: ";
    cin >> groesse;
    if (groesse > 50)
    {
        cout << "Eine Groesse ueber 50 wird als cm-Angabe angenommen!\n";
        groesse = groesse / 100;

    }
    if (groesse < 1 || groesse > 2.5)
    {
        cout << "Kann keine Groesse sein!";
        return 0;
    }

    double bmi = gewicht / (groesse * groesse);

    cout << bmi << " sie haben ";

    if (bmi < 16)
    {
        cout << "Stakes Untergewicht";
    }
    else if (bmi >= 16 && bmi < 17)
    {
        cout << "maessiges Untergewicht";
    }
    else if (bmi >= 17 && bmi < 18.5)
    {
        cout << "leichtes Untergewicht";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "normalgewicht";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Praeadipositas";
    }
    else if (bmi >= 30 && bmi < 35)
    {
        cout << "Adipositas Grad I";
    }
    else if (bmi >= 35 && bmi < 40)
    {
        cout << "Adipositas Grad II";
    }
    else if (bmi >= 40)
    {
        cout << "Adipositas Grad III";
    }
    else
    {
        cout << "Fehler!";
    }

    return 0;
}
