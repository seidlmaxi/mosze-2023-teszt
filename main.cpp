#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Hiba: "NELEMENTS" helyett "N_ELEMENTS" kell
    std::cout << "1-100 ertekek duplazasa" << std::endl; //Az idézõjelek helyett aposztrófot használ és a pontosvesszõ hiányzik a végérõl
    for (int i = 0;i < N_ELEMENTS;i++) //A for ciklus feltételei hiányosak (nem megfelelõ a feltétel és a léptetés)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i< N_ELEMENTS; i++)//A ciklus feltétele így mindig hamis lesz mert az "i" nem változhat
    {
        std::cout << "Ertek:" << b[i] << std::endl; //hiányzik a pontosvesszõ és magát az értéket ez nem írja ki
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; //Nincs inicializalva az "atlag" valtozo
    for (int i = 0; i < N_ELEMENTS; i++) //a for ciklus feltételeinek elválasztására pontosvesszõt kellene alkalmazni nem sima vesszõt
    {
        atlag += b[i]; //Hiányzik a pontosvesszõ a végérõl
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
