
#include <stdlib.h>
#include <iostream>
#include <string>
using std::string;
using namespace std;


class cesar{
    private:
        int a;
        int clave=3;
        string copia;
        string mensaje;
        string datos="abcdefghijklmnopqrstuvwxyz";

    public:
        cesar(string);
        void cifrar();
        void descifrar();
        int formula(int);

};

cesar::cesar(string _mensaje){
    mensaje=_mensaje;
}
int cesar::formula(int pocision){

    int pocision_letra_cifrar;
    int modulo=datos.length();

    pocision_letra_cifrar=(pocision+clave)%26;
    return pocision_letra_cifrar;



}
void cesar::cifrar(){
    copia=mensaje;
    int pocision;
    cout<<"\nPalabra Cifrada: ";
    for(int i=0;i<copia.length();i++){
                a=datos.find(copia[i]);
                if(a==-1)
                    cout<<" ";
                else{
                    pocision=datos.find(copia[i]);
                    copia[i]=datos[formula(pocision)];
                    cout<<copia[i];
                }
    }
    mensaje.erase(0);
    cout<<"\n";
}
void cesar::descifrar(){
   cout<<"Palabra Descifrada: ";
   for(int i=0;i<copia.length();i++){
                a=datos.find(copia[i]);
                if(a==-1)
                    cout<<" ";
                else{
                    if (a>=3){
                        copia[i]=datos.at(a-clave);
                        cout<<copia[i];
                    }
                    else if(a<3 && a>=0){
                        copia[i]=datos.at(a-clave+datos.length());
                        cout<<copia[i];
                    }

                }
    }
    copia.erase(0);
    cout<<"\n";
}
int main(){
    cesar palabra("zzzz zzz zzz");

    palabra.cifrar();
    palabra.descifrar();

    return 0;
}

