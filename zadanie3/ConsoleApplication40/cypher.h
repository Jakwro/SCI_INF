
#pragma once
#include <string>
#include <utility> 
using namespace std;
class cypher
{
private:
    int pierw[5] = { 2,3 ,5 ,7 ,11 };
    string wiadomosc;
    int p, q, n, e, d;
    int euler();
    void licz_pierw();
    void licz_wzg_pierw();
    int ez();
    void klucze();
   pair <int,int> klucz1;
   pair <int,int> klucz2;
 
   int d_finder();


public:
    cypher();
    string przestawiania(string wiadomosc);
    string podstawianie(string wiadomosc);
    string duble(string wiadomosc);
    void key_gen();
};

