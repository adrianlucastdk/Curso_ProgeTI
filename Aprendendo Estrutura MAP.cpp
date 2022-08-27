#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    //Chave = Nome Do Aluno; Valor = Idade//
    map<string, int> aluno;
    
    aluno.insert({"Adrian Lucas", 23});
    aluno["Emanuelle de Branco"] = 21;
    aluno.insert(make_pair("Guilherme",21));
    
    
    //Verifica Se Tem Elementos Na Variável Map//
        if(aluno.empty())
    {
        cout << "Map não possui elementos" << endl << endl;
    }
    else
    {
        cout << "Map possui elementos" << endl << endl;
    }
    
    cout << "Quantidade de elementos é de: " << aluno.size() << endl << endl;
    
    
    //Percorre todos elementos do map//
    for(auto i: aluno)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    cout << endl;
    
    
    //Procura na Variavel Alunos o Elemento Com Chave "Guilherme"//
    if(aluno.find("Guilherme") != aluno.end())
    {
        cout << "Elemento Com Chave 'Guilherme' Encontrado " << endl;
        cout << "O Valor Da Idade é " << aluno["Guilherme"] << endl << endl;
    }
    else
    {
        cout << "Elemento Não Encontrado" << endl << endl;;
    }
    
    
    //Deletando Elemento Com Chave 'Guilherme'//
    cout << "Deletando Elemento Com Chave 'Guilherme'" << endl << endl;
    aluno.erase("Guilherme");
    
    cout << "Quantidade de elementos eh de: " << aluno.size() << endl << endl;
    
    
    //Percorre todos elementos do map//
    for(auto i: aluno)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    cout << endl;
    
    
    //Verifica se o Map está Vázio Antes de Apagar Todos Elementos//
    
    cout << "Limpando Todos Os Elementos Do Map" << endl << endl;
        if(!aluno.empty())
        {
            aluno.clear();
        }
        else
        {
            cout << "Map Já Estava Vazio" << endl;
        }
    
    
    //Percorre todos elementos do map//
    for(auto i: aluno)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Quantidade de elementos eh de: " << aluno.size() << endl << endl;
    
    cout << endl;        
}