#ifndef PROGRAMUOTOJAS_H
#define PROGRAMUOTOJAS_H
#include <string>
#include <iostream>
#include "darbuotojas.h"

using namespace std;

class programuotojas:public darbuotojas
{
public:
    programuotojas(){};
    programuotojas(string VP,string iD,int atl,string et) : darbuotojas(VP,iD,atl,et) {}
    void informacijosIvedimas()
    {
        cout<<"ivesti varda ir pavarde:";
        cin.ignore();
        getline(cin, VardasPavarde);
        cout<<"iveskite isidarbinimo data:";
        cin>>isidarbinimoData;
        cout<<"iveskite atlyginima:";
        cin>>atlyginimas;
        cout<<"iveskite etata:";
        cin>>etatas;
    }
    void informacijosIsvedimas()
    {
        cout<<"Vardas pavarde:"<<VardasPavarde<<endl;
        cout<<"isidarbinimo data:"<<isidarbinimoData<<endl;
        cout<<"atlyginimas:"<<atlyginimas<<endl;
        cout<<"etatas:"<<etatas<<endl;
    }
    void naujoIgudzioIrasymas(string pav,float pM,int i)
    {
        igudis z(pav,pM);
        igudziai[i]=z;
    }
    void visuIgudziuIsvedimas(int i)
    {
        int z;
        for(z=0; z<i; z++)
        {
            igudziai[i].igudzioIsvedimas();
        }
    }
protected:

private:
    class igudis
    {
    public:

        igudis() {};
        igudis(string pav,float pM)
        {
            pavadinimas=pav;
            patirtisMetais=pM;
        }
        void igudzioIsvedimas()
        {
            cout<<"pavadinimas:"<<pavadinimas<<endl;
            cout<<"patirtis metais:"<<patirtisMetais<<endl;
        }
    private:
        string pavadinimas;
        float patirtisMetais;
    };
    igudis igudziai[50];
};

#endif // PROGRAMUOTOJAS_H
