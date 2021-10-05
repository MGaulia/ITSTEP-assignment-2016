#include <string>
#include <iostream>
#ifndef IMONE_H
#define IMONE_H
#define MASYVODYDIS 50
using namespace std;
class imone
{
public:
    void visuBiudzetuIsvedimas(int i)
    {
        int z;
        for(z=0; z<i; z++)
        {
            cout<<z<<":"<<endl;
            biudzetai[z].isvestiBiudzeta();
        }
    }
    void naujoBiudzetoIrasymas(int i,string data1,int pajamos1,int islaidos1)
    {
        biudzetas biudz(data1,pajamos1,islaidos1);
        biudzetai[i]=biudz;
    }
    int kiekBuvoIslaidu(int i)
    {
        int visosIslaidos;
        int z;
        for(z=0; z<i; z++)
        {
            visosIslaidos+=biudzetai[z].imtiIslaidas();
        }
        return visosIslaidos;
    }
    int kiekGautaPajamu(int i)
    {
        int visosPajamos;
        int z;
        for(z=0; z<i; z++)
        {
            visosPajamos+=biudzetai[z].imtiPajamas();
        }
        return visosPajamos;
    }
    bool arImoneBankrutavus(int i)
    {
        if(biudzetai[i].imtiIslaidas()>biudzetai[i].imtiPajamas()&&imonesPinigai<=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void ivedimas()
    {
        cout<<"iveskite pavadinima:";
        cin>>pavadinimas;
        cout<<"iveskite ikurimo data:";
        cin>>ikurimoData;
        cout<<"iveskite direktoriaus varda ir pavarde:";
        cin>>direktoriausVardasIrPavarde;
        cout<<"iveskite el.pasto adresa:";
        cin>>kontaktinisElPastoAdresas;
        cout<<"iveskite bustines adresa:";
        cin>>bustinesAdresas;
        cout<<"ives4kite imones pinigus:";
        cin>>imonesPinigai;
    }
    void isvedimas(){
    cout<<"pavadinimas:"<<pavadinimas<<endl;
    cout<<"ikurimo data"<<ikurimoData<<endl;
    cout<<"vadovo vardas:"<<direktoriausVardasIrPavarde<<endl;
    cout<<"el pasto adresas:"<<kontaktinisElPastoAdresas<<endl;
    cout<<"imones pinigai:"<<imonesPinigai<<endl;
    }
    imone(){};
    imone(string pav,string ikurDat,string direk,string elPastas,string adresas,int  pinigai,string dat,int paj,int islai);
protected:
private:
    string pavadinimas;
    string ikurimoData;
    string direktoriausVardasIrPavarde;
    string kontaktinisElPastoAdresas;
    string bustinesAdresas;
    int  imonesPinigai;
    class biudzetas
    {
    private:
        string data;
        int pajamos;
        int islaidos;

    public:
        int imtiPajamas()
        {
            return pajamos;
        }
        int imtiIslaidas()
        {
            return islaidos;
        }
        void isvestiBiudzeta()
        {
            cout<<"biudzeto data:"<<data<<endl;
            cout<<"biudzeto pajamos:"<<pajamos<<endl;
            cout<<"biudzeto islaidos"<<islaidos<<endl;
        }
        biudzetas() {};
        biudzetas(string dat,int paj,int isl)
        {
            data=dat;
            pajamos=paj;
            islaidos=isl;
        };
    };
biudzetas  biudzetai[MASYVODYDIS];
};
#endif // IMONE_H
