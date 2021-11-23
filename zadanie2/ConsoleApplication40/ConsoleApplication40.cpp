#include <string>
#include <iostream>
#include "decypher.h"
#include "cypher.h"
using namespace std;

cypher szyfr;
decypher szyfr2;

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


        cout << szyfr.podstawianie(inputcode);


    }
    else if (wybor == 2) {


        cout << szyfr.przestawiania(inputcode) << endl;
    }
    else if (wybor == 3) {


        cout << szyfr.duble(inputcode) << endl;
    }
    else if (wybor == 4) {

        for (int i = 0; i < 26; i++)
        {
            cout << szyfr2.back(i, inputcode);
            cout << endl;
        }

    }



}