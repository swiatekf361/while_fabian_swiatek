#include <iostream>
using namespace std;

int miejscowoscZamieszkania = 1;
int minut = 0;

int main() {
    do {
        minut = minut + 9;
        miejscowoscZamieszkania = miejscowoscZamieszkania * 2;
        cout << "Minelo minut: " << minut << endl;
        cout << "Liczba zamieszkanych osob: " << miejscowoscZamieszkania << endl;
   } while (miejscowoscZamieszkania <= 1000000000);

   return 0;
}