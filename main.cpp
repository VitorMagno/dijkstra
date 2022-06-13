#include<iostream>
#include<fstream>
#include<string>
#include<typeinfo>
#include<vector>
#include<sstream>

using namespace std;

int main(int argc, char const *argv[])
{

    string standardIn = "-f";
    if (argc <= 2){
        cout << "parameter needed" << endl;
        return 0;
    }
    if (argv[1] != standardIn){
        cout << "invalid parameter, start with -f and set a input file " << argv[1] << endl;
        //nao ta reconhecendo o parametro -f (fixed)
        return 0;
    }
    fstream fin;
    fin.open(argv[2], ios::in);
    string line, word, temp;
    // colocar a primeira linha que contem a quantidade de vertices e arestas num Vetor e em seguida em
    //duas variaveis V e E 
    vector<int> row;
        
    while(fin){
        getline(fin, line);
        stringstream s (line);
        while(getline(s, temp, ' ')){
            int n = stoi(temp);
            row.push_back(n);
            cout<<n<<endl;
        }

    }    
    /*while (fin >> temp){
        row.clear();
        getline(fin, line);

        stringstream s(line);

        while(getline(s,word,' ')){
            row.push_back(word);
        }
    }*/
   
    /*for (int i = linhas.length(); i ==0; i --){
        if (linhas[i] != ){
            cout<<linhas[i]<< endl;
        }
    }*/
    
    return 0;
}
