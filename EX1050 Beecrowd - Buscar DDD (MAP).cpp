#include <bits/stdc++.h>

using namespace std;

int main()
{
    //declarar/criar variavel ddd//
    int ddd;
    
    //ler variavel declarada//
    cin >>  ddd;
    
    //cria variavel 'Localidade'/ que tem DDD como CHAVE(int) e nome da cidade como VALOR(string)//
    map<int, string> localidades;
    
    
    //declarar CHAVE(ddd), "VALOR"(cidade)//
    localidades.insert({61, "Brasilia"});
    localidades.insert({71, "Salvador"});
    localidades.insert({11, "Sao Paulo"});
    localidades.insert({21, "Rio de Janeiro"});
    localidades.insert({32, "Juiz de Fora"});
    localidades.insert({19, "Campinas"});
    localidades.insert({27, "Vitoria"});
    localidades.insert({31, "Belo Horizonte"});
    

    
       //busca localidade pelo ddd, caso não encontre retorna o fim do map que é vazio
    if(localidades.find(ddd) != localidades.end())
    {
        //caso ele encontre o valor pode imprimir na tela
        cout << localidades[ddd] << endl;
    }
      //caso não encontre exibe a seguinte mensagem:
    else
    {
        cout << "DDD Não Cadastrado" << endl;
    }
}