#include <string>
#include <iostream>
using namespace std;
string cezar(string a) {
    string wyjscie;
    cout << "o ile przesunac, od 1 do 26" << endl;
    int zmiana;
    cin >> zmiana;
    while (zmiana < 1 | zmiana >26) {
        cout << "Podales zla liczbe, liczba musi byc w przedziale 1-26" << endl;
        cin >> zmiana;
       
    }
    for (int i = 0; i < a.length(); i++) {

        if (a[i] > 96) {

            char w;
            w = a[i] + zmiana;
            if (w >= 122) {


                w = w % 122 + 96;


            }
            wyjscie += w;


        }
        else {
            wyjscie += a[i];
        }

    }

    return wyjscie;
}

string przesta(string x) {

    string wyjscie(x.length(), ' ');
    
    for (int i = 0; i < x.length(); i = i + 2) {
       

      
        wyjscie[i] = x[i + 1];
        wyjscie[i + 1] = x[i];

        

     }
    if (x.length() % 2 == 1) {

        wyjscie[wyjscie.length() - 1] = x[x.length() - 1];
    }

    return wyjscie;




}
string duble(string x) {

    string a = cezar(x);
    a = przesta(a);
    return a;
        






}

       
        string wroc(string wiadomosc) {
            string szyfr(wiadomosc.length(), '.');
            for (int i = 0; i < wiadomosc.length(); i++) {
                if (i % 2 == 0) {
                    szyfr[i] = wiadomosc[i + 1];
                }
                else if (i % 2 == 1) {
                    szyfr[i] = wiadomosc[i - 1];
                }
            }
            if (wiadomosc.length() % 2 == 1) {
                szyfr[wiadomosc.length() - 1] = wiadomosc[wiadomosc.length() - 1];
            }
            return szyfr;
        }
        string uncode(string wiadomosc, int cyfra) {
            for (int i = 0; i < wiadomosc.length(); i++) {
                if (wiadomosc[i] > 123 || wiadomosc[i] < 96) {
                    wiadomosc[i] = wiadomosc[i];
                }
                else if (wiadomosc[i] - cyfra < 97) {
                    wiadomosc[i] = wiadomosc[i] - cyfra + 26;
                }
                else {
                    wiadomosc[i] = wiadomosc[i] - cyfra;
                }
            }
            return wiadomosc;
        }
        string klucz(string wiadomosc, int cyfra) {
            if (cyfra == 0) {
                return wroc(wiadomosc);
            }
            string odszyfrowanie = uncode(wiadomosc, cyfra) + "     " + wroc(uncode(wiadomosc, cyfra)); ;
            return odszyfrowanie;
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


        cout<<cezar(inputcode);


    }
    else if (wybor == 2) {

       
        cout << przesta(inputcode) << endl;
    }
    else if (wybor == 3) {


        cout << duble(inputcode) << endl;
    }
    else if (wybor == 4) {

        for (int i = 0; i < 26; i++)
        {
            cout << klucz(inputcode, i);
            cout << endl;
        }
       
    }

}
