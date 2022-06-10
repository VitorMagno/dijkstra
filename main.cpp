#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc <= 2){
        cout << "parameter needed" << endl;
        return 0;
    }
    if (argv[1] != "-f"){
        cout << "invalid parameter, start with -f and set a input file " << argv[1] << endl;
        return 0;
    }
    fstream entrada;
    string linhas, v, e;
    entrada.open("exemplo.txt", ios::in);
    getline(entrada, linhas);
    cout << linhas << endl;
    
    return 0;
}
