#include<iostream>
#include <utility> 
#include<time.h>
#include <math.h>
#include"cypher.h"
using namespace std;
cypher::cypher()
{
}
string cypher::przestawiania(string a) {
    string kod(a.length(), '.');
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) {
            kod[i + 1] = a[i];
        }
        else if (i % 2 == 1) {
            kod[i - 1] = a[i];
        }
    }
    if (a.length() % 2 == 1) {
        kod[a.length() - 1] = a[a.length() - 1];
    }
    return kod;
}
string cypher::podstawianie(string a) {
    cout << "\no ile cyfr ma przestawiac(maks 26): ";
    wiadomosc = a;
    int cyfra;
    cin >> cyfra;
    while (cyfra > 26 | cyfra < 0) {
        cout << "\npodaj wartosc mniejsza od 26 a zarazem wieksza od 0";
        cin >> cyfra;
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] + cyfra > 122) {
            wiadomosc[i] = ((a[i] + cyfra) % 123) + 97;
        }
        else if (a[i] > 122 | a[i] < 97) {
            wiadomosc[i] = a[i];
        }
        else {
            wiadomosc[i] = a[i] + cyfra;
        }
    }
    return wiadomosc;
}
string cypher::duble(string a) {
    return przestawiania(podstawianie(a));

}

void cypher::gen_klucz(){
    q = 3;
    p = 5;
    n = q * p;

   int x = euler();

   licz_pierw();
   cin >> e;


   klucz1.first = n;
   klucz2.first = n;
   klucz1.second = d;
   klucz2.second = e;



}
int cypher::euler() {

    return (p - 1) * (q -1);



}


void cypher::licz_pierw() {
    int ax, bx, temp;
    for (int i = 2; i <= euler(); i++)
    {
        ax = i; bx = euler();
        while (bx)
        {
            temp = bx;
            bx = ax % bx;
            ax = temp;
        }
        if (ax == 1) cout << i << " " << "\n";
    }
}


int cypher::ez() {
    for (int i = 0; i < euler(); i++)
    {
        d = i;
        if ((d * e) % euler() == 1)
        {
            return d;
            break;
        }
    }
  




}



