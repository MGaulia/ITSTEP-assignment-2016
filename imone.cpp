#include "imone.h"

imone::imone(string pav,string ikurDat,string direk,string elPastas,string adresas,int pinigai,string dat,int paj,int islai)
{
pavadinimas=pav;
ikurimoData=ikurDat;
direktoriausVardasIrPavarde=direk;
kontaktinisElPastoAdresas=elPastas;
bustinesAdresas=adresas;
imonesPinigai=pinigai;
biudzetas(dat,paj,islai);
//ctor
}

