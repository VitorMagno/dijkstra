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
        //nao ta reconhecendo o parametro -f (resolver)
        return 0;
    }
    fstream entrada;
    string linhas, v, e;
    
    // colocar a primeira linha que contem a quantidade de vertices e arestas num Vetor e em seguida em
    //duas variaveis V e E 
    entrada.open("exemplo.txt", ios::in);
    getline(entrada, linhas);
    cout << linhas << endl;
    
    return 0;
}
