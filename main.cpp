#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Hiba: "NELEMENTS" helyett "N_ELEMENTS" kell
    std::cout << "1-100 ertekek duplazasa" << std::endl; //Az id�z�jelek helyett aposztr�fot haszn�l �s a pontosvessz� hi�nyzik a v�g�r�l
    for (int i = 0;i < N_ELEMENTS;i++) //A for ciklus felt�telei hi�nyosak (nem megfelel� a felt�tel �s a l�ptet�s)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i< N_ELEMENTS; i++)//A ciklus felt�tele �gy mindig hamis lesz mert az "i" nem v�ltozhat
    {
        std::cout << "Ertek:" << b[i] << std::endl; //hi�nyzik a pontosvessz� �s mag�t az �rt�ket ez nem �rja ki
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; //Nincs inicializalva az "atlag" valtozo
    for (int i = 0; i < N_ELEMENTS; i++) //a for ciklus felt�teleinek elv�laszt�s�ra pontosvessz�t kellene alkalmazni nem sima vessz�t
    {
        atlag += b[i]; //Hi�nyzik a pontosvessz� a v�g�r�l
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
