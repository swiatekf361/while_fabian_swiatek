#include <iostream>
using namespace std;

int miejscowoscZamieszkania  = 1;
int minut = 0;

int main() {
    while(miejscowoscZamieszkania <= 1000000000) {
        minut = minut + 7;
        miejscowoscZamieszkania = miejscowoscZamieszkania * 2;

        cout << "Minelo minut: " << minut << endl;
        cout << "Ilosc osob: " << miejscowoscZamieszkania << endl;
    }
    return 0;
}