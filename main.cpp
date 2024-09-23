#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyett N_ELEMENTS nek kéne a változót nevezni
    std::cout << '1-100 ertekek duplazasa' // ' ' helyett " " közé kellene rakni az std::cout << utáni szöveget, pontosvesszõ hiányzik a végén
    for (int i = 0;) // Hibás a ciklus így nem fog jól lefutni, (i <N_ELEMENTS ) lenne helyes
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // (i <N_ELEMENTS ) lenne helyes az i inicializálásánál
    {
        std::cout << "Ertek:" // nem irja ki az értéket és pontosvesszõ sincs
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs inicializálva a változó
    for (int i = 0; i < N_ELEMENTS, i++) // ';'-nek kell lennie a for ciklus feltételeit elválasztó karakternek ,nem ','
    {
        atlag += b[i] // ';' a sor végén hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
