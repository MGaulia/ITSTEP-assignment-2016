#include <iostream>
#include "darbuotojas.h"
#include "projektas.h"
#include "projekto vadovas.h"
#include "programuotojas.h"
#include "imone.h"

using namespace std;
void darbuotojuIvedimas(programuotojas programuotojai[],int kelintasPagyrimas)
{
    string finish;

    int z;
    for(z=0; z<sizeof(programuotojai); z++)
    {
        programuotojai[z].informacijosIvedimas();
        cout<<"Ar norite ivesti dar "
            "Y=YES:::::::N=NO"<<endl;
        cin >> finish;
        if(finish=="N")
        {
            break;
        }
        else if(finish=="Y")
        {
            continue;
        }
        else
        {
            cout<<"Kazkas netaip;"<<endl;

        }
    }
    projektoVadovas v;
    string arNoresite;
    cout<<"Ar turite pagyrima?"<<endl;
    cout<<"Y=YES::::N=NO"<<endl;
    cin>>arNoresite;
    if(arNoresite=="Y")
    {
        v.informacijosIvedimas(kelintasPagyrimas);
    }

};
void projektuIvedimas(projektas projekti[])
{
    int z;
    string finish;
    for(z=0; z<sizeof(projekti); z++)
    {
        projekti[z].informacijosIvedimasApieProjekta();
        cout<<"Ar norite ivesti dar "
            "Y=YES:::::::N=NO"<<endl;
        cin >> finish;
        if(finish=="N")
        {
            break;
        }
        else if(finish=="Y")
        {
            continue;
        }
        else
        {
            cout<<"Kazkas netaip;"<<endl;

        }
    }
}
int  bendrineIvedimoFunkcija(programuotojas programuotojai[],int kelintasPagyrimas,projektas projekti[],imone i[], int &projektai,int &darbuotojai,int &imoniusSkaicius)
{
    projektai = 0;
    darbuotojai=0;
    imoniusSkaicius=0;

    bool ar;
    ar=true;

    do
    {
        cout<<"Iveskite savo pasirinkima"<<endl;
        cout<<"0=ivesti darbuotojus\n1=ivesti projektus\n2=ivesti imone";
        int pasirinkimas;
        cin>>pasirinkimas;
        if(pasirinkimas==0)
        {
            darbuotojuIvedimas(&programuotojai[50],kelintasPagyrimas);
        }

        else if(pasirinkimas==1)
        {
            projektuIvedimas(&projekti[50]);
            projektai++;
        }
        else if(pasirinkimas==2)
        {
            int z;
            string finish;
            for(z=0; z<sizeof(i); z++)
            {
                i[z].ivedimas();
                imoniusSkaicius++;
                cout<<"Ar norite ivesti dar "
                    "Y=YES:::::::N=NO"<<endl;
                cin >> finish;
                if(finish=="N")
                {
                    break;
                }
                else if(finish=="Y")
                {
                    continue;
                }
                else
                {
                    cout<<"Kazkas netaip;"<<endl;

                }

            }
        }
        else
        {
            cout<<"blogas skaicius"<<endl;
        }
        cout<<"ar norite testi ivedinejima    0:::::1   :"<<endl;
        int  g;
        cin>>g;

        if(g==0)
        {
            ar==false;
            return 0;
        }
    }
    while(ar);
}
void bendrineIsvedimoFunkcija(programuotojas prog[],projektas p[],imone i[],string siandien,int progKiekis,int projektuKiekis,int imoniuKiekis)
{
    int z;
    for(z=0; z<progKiekis; z++)
    {
        cout<<"|-----------------------------"<<z<<" darbuotuojas"<<"-----------------------------|"<<endl;
        prog[z].informacijosIsvedimas();
    }
    for(z=0; z<projektuKiekis; z++)
    {
        cout<<"|-----------------------------"<<z<<" projektas"<<"-----------------------------|"<<endl;
        p[z].informacijosApieProjektaIsvedimas(siandien);
    }
    for(z=0; z<imoniuKiekis; z++)
    {
        cout<<"|-----------------------------"<<z<<" imone"<<"-----------------------------|"<<endl;
        i[z].isvedimas();
    }
}
int main()
{
    programuotojas darbininkai[500];
    projektas projektai[500];
    imone verslai[500];
    string siandien;
    int darbuotojuSkaicius;
    int projektuSkaicius;
    int imoniuSkaicius;
    bendrineIvedimoFunkcija(darbininkai,1,projektai,verslai,projektuSkaicius,darbuotojuSkaicius,imoniuSkaicius);
    bendrineIsvedimoFunkcija(darbininkai,projektai,verslai,"2016/03/08",3,1,1);
    return 0;
}
