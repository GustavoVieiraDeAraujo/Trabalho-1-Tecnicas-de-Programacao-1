// Arquivo de implementação das classes de teste dos domínios.

#include "../src/dominios.h"

// ----------------------------------
// Classe para fazer teste unitarios.

/**
 *
 * @brief Classe abstrata de teste.
 */
class teste_unitario // 211068440
{
protected:
    int estado;                                // Estado do teste.
    virtual void setUp() = 0;                  // Metodo para criar unidade em teste.
    virtual void tearDown() = 0;               // Metodo para destruir unidade em teste.
    virtual void testarCenarioSucesso() = 0;   // Cenario de teste falha.
    virtual void testarCenarioFalha() = 0;     // Cenario de teste sucesso.
public:
    /**
     * @brief Metodo para executar o teste.
     * @return O estado do teste (SUCESSO ou FALHA).
     */
    int run();

    /**
     * @brief Constante respresentando o sucesso do teste.
     */
    const static int SUCESSO = 1;

    /**
     * @brief Constante respresentando a falha do teste.
     */
    const static int FALHA = -1;
};

// ------------------------------------
// Classe para testar o dominio classe.
class teste_classe : public teste_unitario // 211068440
{
private:
    Classe *classe_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ------------------------------------
// Classe para testar o dominio codigo.
class teste_codigo : public teste_unitario // 211068440
{
private:
    Codigo *codigo_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ----------------------------------
// Classe para testar o dominio data.
class teste_data : public teste_unitario // 212006577
{
private:
    Data *data_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ---------------------------------------
// Classe para testar o dominio matricula.
class teste_matricula : public teste_unitario // 212006577
{
private:
    Matricula *matricula_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ---------------------------------------
// Classe para testar o dominio resultado.
class teste_resultado : public teste_unitario // 212006577
{
private:
    Resultado *resultado_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// -----------------------------------
// Classe para testar o dominio senha.
class teste_senha : public teste_unitario // 211068440
{
private:
    Senha *senha_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_telefone : public teste_unitario // 211068440
{
private:
    Telefone *telefone_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_texto : public teste_unitario // 212006737
{
private:
    Texto *texto_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};
