#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct pessoa {
    string nome;
    int idade;
};

class veiculo {

public:
        int tipo;
        string nome;

    // passando valores no metodo antigo veiculo(int tp,string no){
    // tipo = tp;
    // nome = no;

};

int main()
{
    // Inicialização uniforme - C++11
    //variaveis simples
    int n{10};
    string nome{"Ricardo"};
    vector <int> valores {1,2,3,4};
    map < string,string> capitais{{"MG", "Belo Horizonte"}};

    pessoa p1{"Bru", 17};
    pessoa p2{"Bruno", 17};

    veiculo v1{1, "carango"};

        // criando iterator dento do if e pecorrendo vector
    for(vector <int> ::iterator it = valores.begin(); it!= valores.end(); it++){
        cout << *it << endl;
    }
        // criando iterator dento do if e pecorrendo vector
    for( map < string,string> :: iterator it = capitais.begin(); it!= capitais.end(); it++){
        cout << it->first << "-"  << it->second << endl;
    }


    // mostrando/chamando os valores armazenados na struct
    cout << p1.nome << " - " << p1.idade << endl;

    // mostrando/chamando os valores armazenados na class
    cout << v1.tipo << " - " << v1.nome << endl;
    return 0;
}
