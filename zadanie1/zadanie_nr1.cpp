#include <string>
#include <iostream>
using namespace std;
string cezar(string a) {
    string wyjscie;
    cout << "o ile przesunac, od 1 do 26" << endl;
    int zmiana;
    cin >> zmiana;
    for (int i = 0; i < a.length(); i++) {

        if (a[i] > 97) {

            char w;
            w = a[i] + zmiana;
            if (w >= 122) {


                w = w % 122 + 97;


            }
            wyjscie += w;


        }
        else {
            wyjscie += a[i];
        }

    }

    return wyjscie;
}






int main()
{
    cout << "Poadaj ciag MALYCH liter" << endl;
    string inputcode;
    getline(cin, inputcode);

    cout << "co chcesz zrobic?" << endl;
    cout << "1-szyfr cezara;2-szyfr podtawieniowy;3-szyfr przestawieniowy;4-odszyfruj tekst" << endl;
    int wybor;
    cin >> wybor;
    if (wybor == 1) {


        cezar(inputcode);

    }
