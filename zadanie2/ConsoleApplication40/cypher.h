
#pragma once
#include <string>
#include <utility> 
using namespace std;
class cypher
{
private:
    string wiadomosc;
    int p, q,n,e,d;
    int euler();
    void licz_pierw();
    int ez();
   pair <int,int> klucz1;
   pair <int,int> klucz2;

public:
    cypher();
    string przestawiania(string wiadomosc);
    string podstawianie(string wiadomosc);
    string duble(string wiadomosc);
   void gen_klucz();
};

