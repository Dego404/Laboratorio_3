#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
using namespace std;
void Metodo_Encrip(short Encrip);
int Decodificacion(int deco);
void Conv_Binario(string text);
int cod, seed;
ofstream data;
string admin, pass, user;

int main()
{
ifstream read("sudo.txt");
data.open("sudo.txt");
    admin ="Diego";
    pass = "Lechugas";
    string nombre, apellido, password;
    cout<<"\t\tBienvenido "<<endl;
    cout<<"\t\t----------"<<endl;
    cout<<"Ingrese el Usuario: "; cin>>nombre;
    Conv_Binario(nombre);
    read.open("sudo.txt");
    getline(read,user);
    cout<<user<<endl;
    read.close();
    cout<<"Ingrese su Contraseña: "; cin>>password;
    Conv_Binario(password);
    if(nombre == admin && password==pass)
        cout<<"LLego el admin OMG"<<endl;

    return 0;
    data.close();
}
void Conv_Binario(string text){
    int i, decimal, ii;
    int bin[sizeof(text)];
    for(i=0; text[i]!='\0';i++){
        decimal = text[i];
        for(ii=0; ii<8;ii++){
            bin[ii] = decimal %2;
            decimal /=2;
        }
        for(int ii=7; ii>=0; ii--){
            //cout<<bin[ii];
            data<<bin[ii];
        }
        //Terina de mostrar un caracter en Binario

    }
    data<<"\n";
    cout<<endl;
}

void Metodo_Encrip(int Encrip){

}
