#ifndef PROJEKTO VADOVAS_H

#include <string>
#include <iostream>



#define PROJEKTO VADOVAS_H

using namespace std;

class projektoVadovas
{
public:
    projektoVadovas();

    void informacijosIvedimas(int kelintasPagyrimas)
    {
        string ivedimas;
        cout<<"iveskite pagyrima:";
        cin>>ivedimas;
        pagyrimai[kelintasPagyrimas]=ivedimas;
    }
    void informacijosIsvedimas(int i)
    {
        cout<<i<<" pagyrimas:"<<pagyrimai[i];
    }
protected:
private:
    string pagyrimai[50];
};

#endif // PROJEKTO VADOVAS_H
