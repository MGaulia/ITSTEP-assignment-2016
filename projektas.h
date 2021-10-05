#ifndef PROJEKTAS_H
#include <string>
#include <iostream>
#define PROJEKTAS_H
#include "projekto vadovas.h"
#include "darbuotojas.h"
#include "programuotojas.h"
#include "projekto vadovas.h"
using namespace std;

class projektas
{
public:
    projektas(){};
    projektas(string kA,string pav,int b,string uVP,string uD,string aD,string a,int s);
    void informacijosIvedimasApieProjekta();
void informacijosApieProjektaIsvedimas(string siandien);
    bool arProjektasVeluoja(string dabartineData);
    int kiekLiksPiniguIsmokejusAlgas( programuotojas programuotojai[],int darbuotojuKiekis);
    bool arYraPakankamaiPiniguDarbuiAtlikti();
    bool arProjektasAtliktasLaiku();



protected:

private:
    string kadaAtlikta;
    string pavadinimas;
    int biudzetas;
    string uzsakovoVardasPavarde;
    string uzsakymoData;
    string atlikimoData;
    string aprasymas;
    int  svarba;
    projektoVadovas v;

};

#endif // PROJEKTAS_H
