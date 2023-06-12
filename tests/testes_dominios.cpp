#include <stdexcept>
#include "testes_dominios.h"

// -----------------------------------------------------------
// Implementações do metodo "run" da classe de teste unitario.

int teste_unitario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------
// Implementações dos metodos da classe teste_classe.

void teste_classe::setUp()
{
    classe_teste = new Classe();
    estado = SUCESSO;
}

void teste_classe::tearDown()
{
    delete classe_teste;
    classe_teste = nullptr;
}

void teste_classe::testarCenarioSucesso()
{
    try
    {
        classe_teste->set_valor_dominio("INTEGRACAO");
        if (classe_teste->get_valor_dominio() != "INTEGRACAO")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_classe::testarCenarioFalha()
{
    try
    {
        classe_teste->set_valor_dominio("ERROOOOO");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (classe_teste->get_valor_dominio() == "ERROOOOO")
            estado = FALHA;
    }
}

// --------------------------------------------------
// Implementações dos metodos da classe teste_codigo.

void teste_codigo::setUp()
{
    codigo_teste = new Codigo();
    estado = SUCESSO;
}

void teste_codigo::tearDown()
{
    delete codigo_teste;
    codigo_teste = nullptr;
}

void teste_codigo::testarCenarioSucesso()
{
    try
    {
        codigo_teste->set_valor_dominio("ABC123");
        if (codigo_teste->get_valor_dominio() != "ABC123")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_codigo::testarCenarioFalha()
{
    try
    {
        codigo_teste->set_valor_dominio("ABCD12");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (codigo_teste->get_valor_dominio() == "ABCD12")
            estado = FALHA;
    }
}

// ------------------------------------------------
// Implementações dos metodos da classe teste_data.

void teste_data::setUp()
{
    data_teste = new Data();
    estado = SUCESSO;
}

void teste_data::tearDown()
{
    delete data_teste;
    data_teste = nullptr;
}

void teste_data::testarCenarioSucesso()
{
    try
    {
        data_teste->set_valor_dominio("01/JAN/2999");
        if (data_teste->get_valor_dominio() != "01/JAN/2999")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_data::testarCenarioFalha()
{
    try
    {
        data_teste->set_valor_dominio("32/dez/3000");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (data_teste->get_valor_dominio() == "32/dez/3000")
            estado = FALHA;
    }
}

// -----------------------------------------------------
// Implementações dos metodos da classe teste_matricula.

void teste_matricula::setUp()
{
    matricula_teste = new Matricula();
    estado = SUCESSO;
}

void teste_matricula::tearDown()
{
    delete matricula_teste;
    matricula_teste = nullptr;
}

void teste_matricula::testarCenarioSucesso()
{
    try
    {
        matricula_teste->set_valor_dominio("1234566");
        if (matricula_teste->get_valor_dominio() != "1234566")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_matricula::testarCenarioFalha()
{
    try
    {
        matricula_teste->set_valor_dominio("1234561");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (matricula_teste->get_valor_dominio() == "1234561")
            estado = FALHA;
    }
}

// --------------------------------------------------------
// Implementações dos metodos da classe de teste_resultado.

void teste_resultado::setUp()
{
    resultado_teste = new Resultado();
    estado = SUCESSO;
}

void teste_resultado::tearDown()
{
    delete resultado_teste;
    resultado_teste = nullptr;
}

void teste_resultado::testarCenarioSucesso()
{
    try
    {
        resultado_teste->set_valor_dominio("APROVADO");
        if (resultado_teste->get_valor_dominio() != "APROVADO")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_resultado::testarCenarioFalha()
{
    try
    {
        resultado_teste->set_valor_dominio("QUALQUERCOISA");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (resultado_teste->get_valor_dominio() == "QUALQUERCOISA")
            estado = FALHA;
    }
}

// -------------------------------------------------
// Implementações dos metodos da classe teste_senha.

void teste_senha::setUp()
{
    senha_teste = new Senha();
    estado = SUCESSO;
}

void teste_senha::tearDown()
{
    delete senha_teste;
    senha_teste = nullptr;
}

void teste_senha::testarCenarioSucesso()
{
    try
    {
        senha_teste->set_valor_dominio("AmO2@&");
        if (senha_teste->get_valor_dominio() != "AmO2@&")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_senha::testarCenarioFalha()
{
    try
    {
        senha_teste->set_valor_dominio("errooooooo");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (senha_teste->get_valor_dominio() == "errooooooo")
            estado = FALHA;
    }
}

// ----------------------------------------------------
// Implementações dos metodos da classe teste_telefone.

void teste_telefone::setUp()
{
    telefone_teste = new Telefone();
    estado = SUCESSO;
}

void teste_telefone::tearDown()
{
    delete telefone_teste;
    telefone_teste = nullptr;
}

void teste_telefone::testarCenarioSucesso()
{
    try
    {
        telefone_teste->set_valor_dominio("+1234567");
        if (telefone_teste->get_valor_dominio() != "+1234567")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_telefone::testarCenarioFalha()
{
    try
    {
        telefone_teste->set_valor_dominio("+1234567890123456");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (telefone_teste->get_valor_dominio() == "+1234567890123456")
            estado = FALHA;
    }
}

// ----------------------------------------------------
// Implementações dos metodos da classe de teste_texto.

void teste_texto::setUp()
{
    texto_teste = new Texto();
    estado = SUCESSO;
}

void teste_texto::tearDown()
{
    delete texto_teste;
    texto_teste = nullptr;
}

void teste_texto::testarCenarioSucesso()
{
    try
    {
        texto_teste->set_valor_dominio("texto para fins test");
        if (texto_teste->get_valor_dominio() != "texto para fins test")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void teste_texto::testarCenarioFalha()
{
    try
    {
        texto_teste->set_valor_dominio("texto  errado");
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (texto_teste->get_valor_dominio() == "texto  errado")
            estado = FALHA;
    }
}