#include <string>
#include <iostream>
#include <stdlib.h>
#ifndef DARBUOTOJAS_H
#define DARBUOTOJAS_H

using namespace std;
class darbuotojas
{
    public:
        darbuotojas(){}
        darbuotojas(string VP,string iD,int atl,string et);
virtual void informacijosIvedimas()=0;
virtual void informacijosIsvedimas()=0;
int imtiAtlyginimas(){return atlyginimas;}
int kiekMetuDirbaSiojeImoneje(string data){

    string met = data.substr(0,4);
    string men = data.substr(5,2);
    int metai = atoi(met.c_str());
    int menuo = atoi(men.c_str());
    string metai1=isidarbinimoData.substr(0,4);
    string menesiai1=isidarbinimoData.substr(5,2);
    int me1 = atoi(metai1.c_str());
    int men1 = atoi(menesiai1.c_str());
 int a=me1-metai;
 int g=men1-menuo;
 int ats=g/12+a;
return ats;
}
    protected:
        string VardasPavarde;
        string isidarbinimoData;
        int atlyginimas;
        string etatas;
};

#endif // DARBUOTOJAS_H
