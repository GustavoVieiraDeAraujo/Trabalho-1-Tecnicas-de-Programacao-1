// Arquivo de implementação das classes de teste das entidades.
#include "../src/entidades.h"

// ----------------------------------
// Classe para fazer teste unitarios.

/**
 *
 * @brief Classe abstrata de teste.
 */
class TesteUnitario // 212006737
{
protected:
    int estado;
    virtual void setUp() = 0;                // Metodo para criar unidade em teste.
    virtual void tearDown() = 0;             // Metodo para destruir unidade em teste.
    virtual void testarCenarioSucesso() = 0; // Cenario de teste sucesso.
    virtual void testarCenarioFalha() = 0;   // Cenario de teste sucesso.

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
/**
 *
 * @brief Classe para testar a entidade Desenvolvedor.
 */
class TesteDesenvolvedor : public TesteUnitario // 212006737
{
private:
    Desenvolvedor *desenvolvedor_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
    void tearDown() override;
};

// ------------------------------------
// Classe para testar a entidade Teste.
/**
 *
 * @brief Classe para testar a entidade Teste.
 */
class TesteTeste : public TesteUnitario // 212006737
{
private:
    Teste *teste_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
    void tearDown() override;
};

// ------------------------------------
/**
 *
 * @brief Classe para testar a entidade CasoDeTeste.
 */
class TesteCasoDeTeste : public TesteUnitario
{
private:
    CasoDeTeste *teste_caso_de_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
    void tearDown() override;
};