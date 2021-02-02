#include "QtCore/QStandardPaths"
#include "QtCore/QProcess"
#include <bits/stdc++.h>
#include <QApplication>
#include "mainwindow.h"
#include <windows.h>
#include "stdlib.h"
#include "string.h"
#include "cstring"
#include "string"
#include "QStyle"

using namespace std;

ofstream g("Rezultate.txt");
ofstream h("Medii.txt");
ifstream f;

class citire{
public:
    float max[13],med[13];
    int ora[13];

    citire(){
        for( int i = 0 ; i < 12 ; i++ )
            max[i] = med[i] = ora[i] = 0;
    };
    void citire1(string nume)
    {
        f.open(nume);
        int pas=1;
        float aux1, aux2, aux3, bkp1=0, bkp2=0, bkp3=0;

        f >> ora[0] >> max[0] >> med[0];
        //h << ora[0] << "\t" << max[0] << "\t\t\t" << med[0] << "\n";

        while( pas < 13 ){
            f >> ora[pas] >> aux1 >> aux2 >> aux3 >> med[pas];
            if (aux1 == ora[pas]+2 || aux1 == ora[pas]+3 ) {
                ora[pas+1] = aux1;
                aux1 = aux2;
                aux2 = aux3;
                aux3=med[pas];
                if ((aux1+bkp1)/2 >= (aux2 + bkp2) / 2 && (aux1 + bkp1) / 2 >= (aux3 + bkp3) / 2)
                    max[pas] = (aux1 + bkp1) / 2;
                else
                if ((aux2+bkp2)/2 >= (aux1 + bkp1) / 2 && (aux2 + bkp2) / 2 >= (aux3 + bkp3) / 2)
                    max[pas] = (aux2 + bkp2) / 2;
                else
                if ((aux3 + bkp3) / 2 >= (aux1 + bkp1) / 2 && (aux3 + bkp3) / 2 >= (aux2 + bkp2) / 2)
                    max[pas] = (aux3 + bkp3) / 2;
                med[pas] = ((aux1 + bkp1) / 2 + (aux2 + bkp2) / 2 + (aux3 + bkp3) / 2) / 3;
                //h << ora[pas] << "\t" << (aux1 + bkp1) / 2 << "\t" << (aux2 + bkp2) / 2 << "\t" << (aux3 + bkp3) / 2 << "\t" << med[pas] << "\n";
                pas++;
                f >> med[pas];
            }

            if( aux1 >= aux2 && aux1 >= aux3 )
                max[pas] = aux1;
            else {
                if (aux2 >= aux1 && aux2 >= aux3)
                    max[pas] = aux2;
                else {
                    if (aux3 >= aux2 && aux3 >= aux1)
                        max[pas] = aux3;
                }
            }

            if(med[pas] != (aux1+aux2+aux3) / 3)
                med[pas] = (aux1+aux2+aux3) / 3;

            //h << fixed << setprecision(2) << ora[pas] << "\t" << aux1 << "\t" << aux2 << "\t" << aux3 << "\t" << med[pas] << "\n";
            pas++;
            bkp1 = aux1;
            bkp2 = aux2;
            bkp3 = aux3;
        }
        f.close();
    }

    virtual void afisare(){
        g << "ora\t" << "max\t" << "med\t" << "err\n";
        for( int i = 0 ; i < 13 ; i++){
            g << fixed << setprecision(2) << ora[i] << "\t" << max[i] << "\t" << med[i] << "\t" << max[i]-med[i] << "\n";
        }
        g << "\n";
    }

};

class Averages: public citire{
public:
    float max,med,err;
    Averages(){
        this ->max = 0;
        this ->med = 0;
        this ->err = 0;
    }

    void set(citire obj){
        for(int j = 0 ; j < 13; j++){
            this ->max += obj.max[j];
        }
        this->max /= 13;

        for(int j = 0 ; j < 13; j++){
            this ->med += obj.med[j];
        }
        this->med /= 13;

        for(int j = 0 ; j < 13; j++){
            this ->err += obj.max[j]-obj.med[j];
        }
        this->err /= 13;

    }

};

int main(int argc, char *argv[])
{
    /** Realizarea modelarii si calculul valorilor */
    citire valori;
    Averages v[13];
    int i=1;
    h << "media med\t" << "media max\t" << "media err\n";
    for( i = 1 ; i < 13 ; i++ ){
        string s = to_string(i);
        s += ".txt";
        valori.citire1(s);
        valori.afisare();
        v[i].set(valori);
        h << fixed << setprecision(2) << v[i].max << "\t\t" << v[i].med << "\t\t"  << v[i].err << "\n";
    }
    f.close();
    g.close();
    h.close();

    QApplication a(argc, argv);

    QString R2D = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    R2D += "\\Proiect-6-echipa-2-grupa-322AC\\Data\\script\\dist\\2D\\2D.exe";
    string R2DPath = R2D.toStdString();
    std::wstring R2DLocation = std::wstring(R2DPath.begin(), R2DPath.end());
    LPCWSTR WR2DLocation = R2DLocation.c_str();
    ShellExecuteW(NULL, L"open", WR2DLocation, L"", WR2DLocation, SW_HIDE);

    MainWindow w;
    w.show();
    return a.exec();
}
