#include <bits/stdc++.h>

using namespace std;


//Criação da Struct
typedef struct
{
   //Os Atributos Vão Aqui Dentro
   
   //Tipo do Atributo / Nome da Variavel
//ex:     int        /      idade

   string nome;
   int idade;
   double peso;

} Pessoa;


int main()
{
        Pessoa p1, p2, p3;
        
        //Atribuição Direta (variavel recebe o valor sem ser lido pelo usuário)
        p1.nome = "Adrian";
        p1.idade = 18;
        p1.peso = 55;
        
        cout << "Pessoa 1" << endl;
        cout << "nome: " << p1.nome << endl;
        cout << "idade: " << p1.idade << endl;
        cout << "peso: " << p1.peso << endl << endl;
        
        //Atribuição Indireta (Usuario informa os valores)
        
        cout <<"Informe o Nome: ";
        getline(cin, p2.nome);
        cout <<"Informe a Idade: ";
        cin >> p2.idade;
        cout <<"Informe o Peso: ";
        cin >> p2.peso;
        
        //Quebra Linha
        cout<< endl;
        
        cout << "Pessoa 2" << endl;
        cout << "nome: " << p2.nome << endl;
        cout << "idade: " << p2.idade << endl;
        cout << "peso: " << p2.peso << endl;
        
        //Atribuição Direta de todos valores
        p3 = {"Silva", 34, 70};
        
        cout << endl;
        
         cout << "Pessoa 3" << endl;
        cout << "nome: " << p3.nome << endl;
        cout << "idade: " << p3.idade << endl;
        cout << "peso: " << p3.peso << endl;
        
}