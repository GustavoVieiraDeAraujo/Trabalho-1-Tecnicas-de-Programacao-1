// Arquivo de implementação dos metodos das classes de teste das entidades.
#include <stdexcept>
#include "testes_entidades.h"

// -----------------------------------------------------------
// Implementações do metodo "run" da classe de teste unitario.

int TesteUnitario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------
// Implementações dos metodos da entidade Desenvolvedor.

void TesteDesenvolvedor::setUp()
{
    desenvolvedor_teste = new Desenvolvedor();
    estado = SUCESSO;
};

void TesteDesenvolvedor::tearDown()
{
    delete desenvolvedor_teste;
    desenvolvedor_teste = nullptr;
};

void TesteDesenvolvedor::testarCenarioSucesso()
{
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;
    try
    {
        matricula.set_valor_dominio("1234566");
        desenvolvedor_teste->setMatricula(matricula);
        if (desenvolvedor_teste->getMatricula().get_valor_dominio() != "1234566")
            estado = FALHA;
        
        nome.set_valor_dominio("Sapato sujo");
        desenvolvedor_teste->setNome(nome);
        if (desenvolvedor_teste->getNome().get_valor_dominio() != "Sapato sujo")
            estado = FALHA;

        senha.set_valor_dominio("MAR123");
        desenvolvedor_teste->setSenha(senha);
        if (desenvolvedor_teste->getSenha().get_valor_dominio() != "MAR123")
            estado = FALHA;

        telefone.set_valor_dominio("+8547589");
        desenvolvedor_teste->setTelefone(telefone);
        if (desenvolvedor_teste->getTelefone().get_valor_dominio() != "+8547589")
            estado = FALHA;
        
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
};
void TesteDesenvolvedor::testarCenarioFalha()
{
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;
    try
    {
        matricula.set_valor_dominio("1234562");
        desenvolvedor_teste->setMatricula(matricula);
        estado = FALHA;

        nome.set_valor_dominio("Sapato  sujoooooooo");
        desenvolvedor_teste->setNome(nome);
        estado = FALHA;

        senha.set_valor_dominio("MAR1234");
        desenvolvedor_teste->setSenha(senha);
        estado = FALHA;

        telefone.set_valor_dominio("+854758999");
        desenvolvedor_teste->setTelefone(telefone);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (desenvolvedor_teste->getMatricula().get_valor_dominio() == "1234562")
            estado = FALHA;
        
        if (desenvolvedor_teste->getNome().get_valor_dominio() == "Sapato  sujoooooooo")
            estado = FALHA;

        if (desenvolvedor_teste->getSenha().get_valor_dominio() == "MAR1234")
            estado = FALHA;
        
        if (desenvolvedor_teste->getTelefone().get_valor_dominio() == "+854758999")
            estado = FALHA;

    }
};

// Implementações dos metodos da entidade Teste.
void TesteTeste::setUp()
{
    teste_teste = new Teste();
    estado = SUCESSO;
};

void TesteTeste::tearDown()
{
    delete teste_teste;
    teste_teste = nullptr;
};
void TesteTeste::testarCenarioSucesso()
{
    Texto nome;
    Codigo codigo;
    Classe classe;
    try
    {
        nome.set_valor_dominio("Sapato sujo");
        teste_teste->setNome(nome);
        if (teste_teste->getNome().get_valor_dominio() != "Sapato sujo")
            estado = FALHA;

        codigo.set_valor_dominio("QWE321");
        teste_teste->setCodigo(codigo);
        if (teste_teste->getCodigo().get_valor_dominio() != "QWE321")
            estado = FALHA;

        classe.set_valor_dominio("SISTEMA");
        teste_teste->setClasse(classe);
        if (teste_teste->getClasse().get_valor_dominio() != "SISTEMA")
            estado = FALHA;
        
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
};
void TesteTeste::testarCenarioFalha()
{
    Texto nome;
    Codigo codigo;
    Classe classe;
    try
    {
        nome.set_valor_dominio("Sapato  sujoooooooo");
        teste_teste->setNome(nome);
        estado = FALHA;

        codigo.set_valor_dominio("QWE3214");
        teste_teste->setCodigo(codigo);
        estado = FALHA;

        classe.set_valor_dominio("SISTEME");
        teste_teste->setClasse(classe);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (teste_teste->getNome().get_valor_dominio() == "Sapato  sujoooooooo")
            estado = FALHA;
        
        if (teste_teste->getCodigo().get_valor_dominio() == "QWE3214")
            estado = FALHA;
        
        if (teste_teste->getClasse().get_valor_dominio() == "SISTEME")
            estado = FALHA;
    }
};


// Implementações dos metodos da entidade Caso de Teste.
void TesteCasoDeTeste::setUp()
{
    teste_caso_de_teste = new CasoDeTeste();
    estado = SUCESSO;
};

void TesteCasoDeTeste::tearDown()
{
    delete teste_caso_de_teste;
    teste_caso_de_teste = nullptr;
};
void TesteCasoDeTeste::testarCenarioSucesso()
{
    Codigo codigo;
    Data data;
    Texto nome;
    Texto acao;
    Texto resposta;
    Resultado resultado;
    try
    {
        codigo.set_valor_dominio("QWE321");
        teste_caso_de_teste->setCodigo(codigo);
        if (teste_caso_de_teste->getCodigo().get_valor_dominio() != "QWE321")
            estado = FALHA;
        
        data.set_valor_dominio("20/MAI/2001");
        teste_caso_de_teste->setData(data);
        if (teste_caso_de_teste->getData().get_valor_dominio() != "20/MAI/2001")
            estado = FALHA;

        nome.set_valor_dominio("Sapato sujo");
        teste_caso_de_teste->setNome(nome);
        if (teste_caso_de_teste->getNome().get_valor_dominio() != "Sapato sujo")
            estado = FALHA;

        acao.set_valor_dominio("Sapato limpo");
        teste_caso_de_teste->setAcao(acao);
        if (teste_caso_de_teste->getAcao().get_valor_dominio() != "Sapato limpo")
            estado = FALHA;

        resposta.set_valor_dominio("Sapato branco");
        teste_caso_de_teste->setResposta(resposta);
        if (teste_caso_de_teste->getResposta().get_valor_dominio() != "Sapato branco")
            estado = FALHA;

        resultado.set_valor_dominio("REPROVADO");
        teste_caso_de_teste->setResultado(resultado);
        if (teste_caso_de_teste->getResultado().get_valor_dominio() != "REPROVADO")
            estado = FALHA;
        
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
};

void TesteCasoDeTeste::testarCenarioFalha()
{
    Codigo codigo;
    Data data;
    Texto nome;
    Texto acao;
    Texto resposta;
    Resultado resultado;
    try
    {
        codigo.set_valor_dominio("QWE3214");
        teste_caso_de_teste->setCodigo(codigo);
        estado = FALHA;

        data.set_valor_dominio("20/MAI/1990");
        teste_caso_de_teste->setData(data);
        estado = FALHA;

        nome.set_valor_dominio("Sapato  sujoooooooo");
        teste_caso_de_teste->setNome(nome);
        estado = FALHA;

        acao.set_valor_dominio("Sapato   limpooooo");
        teste_caso_de_teste->setAcao(acao);
        estado = FALHA;

        resposta.set_valor_dominio("Sapato   brancoooooo");
        teste_caso_de_teste->setResposta(resposta);
        estado = FALHA;

        resultado.set_valor_dominio("REPROVADE");
        teste_caso_de_teste->setResultado(resultado);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (teste_caso_de_teste->getCodigo().get_valor_dominio() == "QWE3214")
            estado = FALHA;
        
        if (teste_caso_de_teste->getData().get_valor_dominio() == "20/MAI/1990")
            estado = FALHA;
        
        if (teste_caso_de_teste->getNome().get_valor_dominio() == "Sapato  sujoooooooo")
            estado = FALHA;

        if (teste_caso_de_teste->getAcao().get_valor_dominio() == "Sapato   limpooooo")
            estado = FALHA;
        
        if (teste_caso_de_teste->getResposta().get_valor_dominio() == "Sapato   brancoooooo")
            estado = FALHA;
        
        if (teste_caso_de_teste->getResultado().get_valor_dominio() == "REPROVADE")
            estado = FALHA;
    }
};