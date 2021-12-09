#pragma once
#include <string>
using namespace std;
class decypher
{
private:
    string a;
    int cyfra, n, e;
    string decode1(int cyfra, string wiadomosc);
    string decode2(string wiadomosc);
public:
    string back(int cyfra, string wiadomosc);
    decypher();
};