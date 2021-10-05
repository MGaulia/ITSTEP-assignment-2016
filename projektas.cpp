#include "projektas.h"

projektas::projektas(string kA,string pav,int b,string uVP,string uD,string aD,string a,int s)
{
    kadaAtlikta=kA;
    pavadinimas=pav;
    biudzetas=b;
    uzsakovoVardasPavarde=uVP;
    uzsakymoData=uD;
    atlikimoData=aD;
    aprasymas=a;
    svarba=s;
    //ctor
}

void projektas::informacijosIvedimasApieProjekta()
{
    cout<<"iveskite pavadinima:";
    cin>>pavadinimas;
    cout<<"iveskite biudzeta:";
    cin>>biudzetas;
    cout<<"iveskite uzsakovo varda ir pavarde:";
    cin>>uzsakovoVardasPavarde;
    cout<<"iveskite uzsakymo data:";
    cin>>uzsakymoData;
    cout<<"iveskite atlikimo data:";
    cin>>atlikimoData;
    cout<<"iveskite aprasyma:";
    cin>>aprasymas;
    cout<<"iveskite svarba(1-svarbu,0-nesvarbu):";
    cin>>svarba;

}
void projektas::informacijosApieProjektaIsvedimas(string siandien)
{
    cout<<"pavadinimas:"<<pavadinimas<<endl;
    cout<<"biudzetas:"<<biudzetas<<endl;
    cout<<"uzsakovo vardas ir pavarde:"<<uzsakovoVardasPavarde<<endl;
    cout<<"uzsakymo data:"<<uzsakymoData<<endl;
    cout<<"attlikimo data:"<<atlikimoData<<endl;
    cout<<"aprasymas:"<<aprasymas<<endl;
    cout<<"svarba:"<<svarba<<endl;
    cout<<"ar projektas veluoja:"<<arProjektasVeluoja(siandien)<<endl;
}
bool projektas::arProjektasVeluoja(string dabartineData)
{
    if(dabartineData>atlikimoData)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int projektas::kiekLiksPiniguIsmokejusAlgas(programuotojas programuotojao[],int darbuotojuKiekis)
{
    int z;
    for(z=0; z<darbuotojuKiekis; z++)
    {
        biudzetas-=programuotojao[z].imtiAtlyginimas();
    }
    return biudzetas;
}
bool projektas::arYraPakankamaiPiniguDarbuiAtlikti()
{

    if(biudzetas<=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool projektas::arProjektasAtliktasLaiku()
{
    if(kadaAtlikta==atlikimoData)
    {
        return true;
    }
    else
    {
        return false;
    }

}
