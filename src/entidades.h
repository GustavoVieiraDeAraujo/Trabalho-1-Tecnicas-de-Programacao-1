// Arquivo de implementação das classes de entidades.
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <string>
#include "dominios.h"

using namespace std;

// -------------------
// Entidade Desenvolvedor.

/**
* @brief Classe Entidade Desenvolvedor que tem atributos:
* - matricula,
* - nome
* - senha
* - classe
* estes que sao objetos das classes Nome,Senha e Classe
*/

class Desenvolvedor // 212006737
{
private:
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

public:
    /**
     * @brief Metodo para atribuir a matricula
     * @param string com o valor da matricula a ser atribuido
     */
    void setMatricula(const Matricula &);
    /**
     * @brief Metodo para obter o valor da matricula
     * @return String com o valor da matricula
     */
    Matricula getMatricula() const;

    /**
     * @brief Metodo para atribuir o nome
     * @param string com o valor do nome a ser atribuido
     */
    void setNome(const Texto &);
    /**
     * @brief Metodo para obter o valor do nome
     * @return String com o valor do nome
     */
    Texto getNome() const;

    /**
     * @brief Metodo para atribuir a senha
     * @param string com o valor da senha a ser atribuido
     */
    void setSenha(const Senha &);
    /**
     * @brief Metodo para obter o valor da senha
     * @return String com o valor da senha
     */
    Senha getSenha() const;

    /**
     * @brief Metodo para atribuir o telefone
     * @param string com o valor do telefone a ser atribuido
     */
    void setTelefone(const Telefone &);
    /**
     * @brief Metodo para obter o valor do telefone
     * @return String com o valor do telefone
     */
    Telefone getTelefone() const;
};

// Métodos modificadores da entidade Desenvolvedor
inline void Desenvolvedor::setMatricula(const Matricula &matricula)
{
    this->matricula = matricula;
};
inline void Desenvolvedor::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void Desenvolvedor::setSenha(const Senha &senha)
{
    this->senha = senha;
};
inline void Desenvolvedor::setTelefone(const Telefone &telefone)
{
    this->telefone = telefone;
};

// Métodos acessadores da entidade Desenvolvedor
inline Matricula Desenvolvedor::getMatricula() const
{
    return matricula;
};
inline Texto Desenvolvedor::getNome() const
{
    return nome;
};
inline Senha Desenvolvedor::getSenha() const
{
    return senha;
};
inline Telefone Desenvolvedor::getTelefone() const
{
    return telefone;
};

// -------------------
// Entidade Teste.

/**
* @brief Classe Entidade Teste que tem atributos:
* - codigo
* - nome
* - classe
* estes que sao objetos das classes Codigo, Nome e Classe
*/

class Teste // 211068440
{
private:
    Codigo codigo;
    Texto nome;
    Classe classe;

public:
    /**
     * @brief Metodo para atribuir o codigo
     * @param string com o valor do codigo a ser atribuido
     */
    void setCodigo(const Codigo &);
    /**
     * @brief Metodo para obter o valor do codigo
     * @return String com o valor do codigo
     */
    Codigo getCodigo() const;

    /**
     * @brief Metodo para atribuir o nome
     * @param string com o valor do nome a ser atribuido
     */
    void setNome(const Texto &);
    /**
     * @brief Metodo para obter o valor do nome
     * @return String com o valor do nome
     */
    Texto getNome() const;

    /**
     * @brief Metodo para atribuir a classe
     * @param string com o valor da classe a ser atribuido
     */
    void setClasse(const Classe &);
    /**
     * @brief Metodo para obter o valor da classe
     * @return String com o valor da classe
     */
    Classe getClasse() const;
};

// Métodos modificadores da entidade Teste
inline void Teste::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
};
inline void Teste::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void Teste::setClasse(const Classe &classe)
{
    this->classe = classe;
};

// Métodos acessadores da entidade Teste
inline Codigo Teste::getCodigo() const
{
    return codigo;
};
inline Texto Teste::getNome() const
{
    return nome;
};
inline Classe Teste::getClasse() const
{
    return classe;
};

// -------------------
// Entidade Caso de Teste.

/**
* @brief Classe Entidade CasoDeTeste que tem atributos:
* - codigo
* - data
* - nome
* - acao
* - resposta 
* - resultado
* estes que sao objetos das classes Codigo, Data, Nome, Acao, Resposta e Resultado
*/
class CasoDeTeste // 212006577
{
private:
    Codigo codigo;
    Data data;
    Texto nome;
    Texto acao;
    Texto resposta;
    Resultado resultado;

public:
    /**
     * @brief Metodo para atribuir o codigo
     * @param string com o valor do codigo a ser atribuido
     */
    void setCodigo(const Codigo &);
    /**
     * @brief Metodo para obter o valor do codigo
     * @return String com o valor do codigo
     */
    Codigo getCodigo() const;

    /**
     * @brief Metodo para atribuir a data
     * @param string com o valor da data a ser atribuido
     */
    void setData(const Data &);
    /**
     * @brief Metodo para obter o valor da data
     * @return String com o valor da data
     */
    Data getData() const;

    /**
     * @brief Metodo para atribuir o nome
     * @param string com o valor do nome a ser atribuido
     */
    void setNome(const Texto &);
    /**
     * @brief Metodo para obter o valor do nome
     * @return String com o valor do nome
     */
    Texto getNome() const;

    /**
     * @brief Metodo para configurar a acao
     * @param string com o valor de acao a ser atribuido
     */
    void setAcao(const Texto &);
    /**
     * @brief Metodo para obter o valor da acao
     * @return String com o valor da acao
     */
    Texto getAcao() const;

    /**
     * @brief Metodo para configurar a resposta
     * @param string com o valor de resposta a ser atribuido
     */
    void setResposta(const Texto &);
    /**
     * @brief Metodo para obter o valor da resposta
     * @return String com o valor da resposta
     */
    Texto getResposta() const;

    /**
     * @brief Metodo para configurar resultado
     * @param string com o valor de resultado a ser atribuido
     */
    void setResultado(const Resultado &);
    /**
     * @brief Metodo para obter o valor do resultado
     * @return String com o valor do resultado
     */
    Resultado getResultado() const;
};

// Métodos acessadores da entidade Caso de Teste
inline void CasoDeTeste::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
};
inline void CasoDeTeste::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void CasoDeTeste::setData(const Data &data)
{
    this->data = data;
};
inline void CasoDeTeste::setAcao(const Texto &acao)
{
    this->acao = acao;
};
inline void CasoDeTeste::setResposta(const Texto &resposta)
{
    this->resposta = resposta;
};
inline void CasoDeTeste::setResultado(const Resultado &resultado)
{
    this->resultado = resultado;
};

// Métodos modificadores da entidade Caso de Teste
inline Codigo CasoDeTeste::getCodigo() const
{
    return codigo;
};
inline Texto CasoDeTeste::getNome() const
{
    return nome;
};
inline Data CasoDeTeste::getData() const
{
    return data;
};
inline Texto CasoDeTeste::getAcao() const
{
    return acao;
};
inline Texto CasoDeTeste::getResposta() const
{
    return resposta;
};
inline Resultado CasoDeTeste::getResultado() const
{
    return resultado;
};

#endif // ENTIDADES_H_INCLUDED