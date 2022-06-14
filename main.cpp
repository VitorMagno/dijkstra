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
    //duas variaveis V e E (checked)
    vector<int> row;
        
    while(fin){
        getline(fin, line);
        stringstream s (line);
        while(getline(s, temp, ' ')){
            int n = stoi(temp);
            row.push_back(n);
            //cout<<n<<endl;
        }
    }

    int vert = row[0];
    int edg = row[1];
    vector<vector<pair<int,int>>> g(vert);
    for (int i = 2; i < row.size()-3; i = i+3){
        int vertAtual = row[i];
        g[vertAtual-1].push_back({row[i+1],row[i+2]});
        cout << "vertice " << vertAtual <<" se liga ao vertice " <<row[i+1]<<", com peso ("<<row[i+2]<<")"<< endl;
    }
    //cout<< get<0> (g[1][0]);
    //get<0-vert><1-peso> g[vert][vizinhos]
    return 0;
}
