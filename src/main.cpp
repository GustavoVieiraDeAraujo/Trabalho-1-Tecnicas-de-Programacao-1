#include <iostream>
#include "../tests/testes_dominios.h"
#include "../tests/testes_entidades.h"

using namespace std;

int main()
{
    teste_classe testes_unitarios_classe;
    teste_codigo testes_unitarios_codigo;
    teste_data testes_unitarios_data;
    teste_matricula testes_unitarios_matricula;
    teste_resultado testes_unitarios_resultado;
    teste_senha testes_unitarios_senha;
    teste_telefone testes_unitarios_telefone;
    teste_texto testes_unitarios_texto;

    TesteDesenvolvedor testes_unitarios_desenvolvedor;
    TesteTeste testes_unitarios_teste;
    TesteCasoDeTeste testes_unitarios_caso_de_teste;

    switch (testes_unitarios_desenvolvedor.run())
    {
    case TesteDesenvolvedor::SUCESSO:
        cout << "SUCESSO-DESENVOLVEDOR" << endl;
        break;
    case TesteDesenvolvedor::FALHA:
        cout << "FALHA-DESENVOLVEDOR" << endl;
        break;
    }
    
    switch (testes_unitarios_teste.run())
    {
    case TesteTeste::SUCESSO:
        cout << "SUCESSO-TESTE" << endl;
        break;
    case TesteTeste::FALHA:
        cout << "FALHA-TESTE" << endl;
        break;
    }

    switch (testes_unitarios_caso_de_teste.run())
    {
    case TesteTeste::SUCESSO:
        cout << "SUCESSO-CASO-DE-TESTE" << endl;
        break;
    case TesteTeste::FALHA:
        cout << "FALHA-CASO-DE-TESTE" << endl;
        break;
    }
    
    switch (testes_unitarios_classe.run())
    {
    case teste_classe::SUCESSO:
        cout << "SUCESSO-CLASSE" << endl;
        break;
    case teste_classe::FALHA:
        cout << "FALHA-CLASSE" << endl;
        break;
    }

    switch (testes_unitarios_codigo.run())
    {
    case teste_codigo::SUCESSO:
        cout << "SUCESSO-CODIGO" << endl;
        break;
    case teste_codigo::FALHA:
        cout << "FALHA-CODIGO" << endl;
        break;
    }

    switch (testes_unitarios_data.run())
    {
    case teste_data::SUCESSO:
        cout << "SUCESSO-DATA" << endl;
        break;
    case teste_data::FALHA:
        cout << "FALHA-DATA" << endl;
        break;
    }

    switch (testes_unitarios_matricula.run())
    {
    case teste_matricula::SUCESSO:
        cout << "SUCESSO-MATRICULA" << endl;
        break;
    case teste_matricula::FALHA:
        cout << "FALHA-MATRICULA" << endl;
        break;
    }

    switch (testes_unitarios_resultado.run())
    {
    case teste_resultado::SUCESSO:
        cout << "SUCESSO-RESULTADO" << endl;
        break;
    case teste_resultado::FALHA:
        cout << "FALHA-RESULTADO" << endl;
        break;
    }

    switch (testes_unitarios_senha.run())
    {
    case teste_senha::SUCESSO:
        cout << "SUCESSO-SENHA" << endl;
        break;
    case teste_senha::FALHA:
        cout << "FALHA-SENHA" << endl;
        break;
    }

    switch (testes_unitarios_telefone.run())
    {
    case teste_telefone::SUCESSO:
        cout << "SUCESSO-TELEFONE" << endl;
        break;
    case teste_telefone::FALHA:
        cout << "FALHA-TELEFONE" << endl;
        break;
    }

    switch (testes_unitarios_texto.run())
    {
    case teste_texto::SUCESSO:
        cout << "SUCESSO-TEXTO" << endl;
        break;
    case teste_texto::FALHA:
        cout << "FALHA-TEXTO" << endl;
        break;
    }
}