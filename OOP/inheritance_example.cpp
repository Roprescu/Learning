/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//clasa de baza
class Om
{
public:
    int varsta;
    string nume;
    
    void prezinta()
    {
        cout<<"Numele meu este "<<nume<<endl;
        cout<<"Varsta mea este "<<varsta<<endl;
    }
};

//clasa de derivata
class Student: public Om
{
public:
    float nota_istorie;
    
    void verifica_trecere()
    {
        if(nota_istorie >= 5)
        {
            cout<<"Studentul "<<nume<<" are nota de trecere"<<endl;
        }
        else
        {
            cout<<"Studentul "<<nume<<" nu are nota de trecere"<<endl;
        }
    }
};

//clasa de derivata
class Angajat: public Om
{
public:
    float salariu;
    
    float marire_salariu()
    {
        salariu += salariu*10/100;
        return salariu;
    }
};

int main()
{
    Angajat Ramon;
    Student Nelson;
    Ramon.nume = "Ramon Nastase";
    Ramon.varsta = 45;
    Ramon.salariu = 2000;
    
    Nelson.nume = "Nelson Mondialul";
    Nelson.varsta = 13;
    Nelson.nota_istorie = 4.5;
    
    Ramon.prezinta();
    cout<<"Salariul marit este "<<Ramon.marire_salariu()<<endl;
    Nelson.prezinta();
    Nelson.verifica_trecere();
    return 0;
}
