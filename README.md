# Dominios, Entidades e Testes Unitarios

Trabalho 1 da disciplina **Tecnicas de Programacao 1 (TP1)** do Departamento de Ciencia da Computacao da Universidade de Brasilia. Implementacao em C++ de dominios (tipos com validacao), entidades (composicao de dominios) e testes unitarios automatizados com padrao setUp/tearDown, documentados com Doxygen.

O sistema modela o dominio de **gerenciamento de testes de software**, onde desenvolvedores criam testes e casos de teste com atributos validados por regras de negocio.

---

## Sumario

- [Participantes](#participantes)
- [Tecnologias](#tecnologias)
- [Escopo do Projeto](#escopo-do-projeto)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Requisitos](#requisitos)
- [Como Executar](#como-executar)
- [Dominios Implementados](#dominios-implementados)
- [Entidades Implementadas](#entidades-implementadas)
- [Testes Unitarios](#testes-unitarios)
- [Saida Esperada](#saida-esperada)

---

## Participantes

| Nome                              | Matricula |
|-----------------------------------|-----------|
| Gustavo Vieira de Araujo          | 211068440 |
| Caetano Korilo                    | 212006737 |
| Arthur Antero de Sa               | 212006577 |

---

## Tecnologias

| Tecnologia | Uso                                              |
|------------|--------------------------------------------------|
| C++        | Linguagem de implementacao                       |
| g++ (GCC)  | Compilador                                       |
| Doxygen    | Documentacao automatica do codigo nos headers    |

---

## Escopo do Projeto

| Requisito                                    | Implementacao                                                  |
|----------------------------------------------|----------------------------------------------------------------|
| Classe abstrata Dominio com validacao        | 8 dominios com `set`/`get` e `validar_dominio()` polimorfico   |
| Entidades como composicao de dominios        | 3 entidades: Desenvolvedor, Teste, CasoDeTeste                 |
| Testes unitarios com setUp/tearDown          | Testes de sucesso e falha para cada dominio e entidade          |
| Documentacao Doxygen                         | Comentarios `@brief` e `@param` nos headers                    |

---

## Estrutura do Projeto

| Diretorio / Arquivo                  | Descricao                                                              |
|--------------------------------------|------------------------------------------------------------------------|
| `src/`                               | Codigo fonte principal                                                 |
| `src/main.cpp`                       | Ponto de entrada — instancia e executa todos os testes unitarios        |
| `src/dominios.h`                     | Classe abstrata `Dominio` e 8 classes concretas com regras de validacao |
| `src/dominios.cpp`                   | Implementacao das validacoes de cada dominio                            |
| `src/entidades.h`                    | 3 entidades com getters/setters inline                                  |
| `tests/`                             | Testes unitarios                                                        |
| `tests/testes_dominios.h` / `.cpp`   | Classe base `teste_unitario` e 8 testes de dominio                      |
| `tests/testes_entidades.h` / `.cpp`  | Classe base `TesteUnitario` e 3 testes de entidade                      |
| `docs/`                              | Documentacao auxiliar                                                   |
| `docs/help.txt`                      | Template de referencia para criacao de dominios e entidades             |

---

## Requisitos

- Compilador C++: `g++` (GCC)

```bash
# Ubuntu/Debian
sudo apt install build-essential
```

---

## Como Executar

```bash
g++ -o executar src/main.cpp src/dominios.cpp tests/testes_dominios.cpp tests/testes_entidades.cpp
./executar
```

O programa executa todos os 11 testes unitarios (8 dominios + 3 entidades) e imprime `SUCESSO` ou `FALHA` para cada um.

---

## Dominios Implementados

Todos os dominios herdam da classe abstrata `Dominio`, que define:
- `set_valor_dominio(string)` — atribui valor apos validacao
- `get_valor_dominio()` — retorna o valor armazenado
- `validar_dominio(string)` — metodo virtual puro, implementado por cada dominio

| Dominio    | Regra de Validacao                                                               |
|------------|----------------------------------------------------------------------------------|
| Classe     | Valor restrito ao conjunto: UNIDADE, INTEGRACAO, FUMACA, SISTEMA, REGRESSAO, ESTADO |
| Codigo     | Formato alfanumerico com tamanho fixo                                            |
| Data       | Formato DD/MM/AAAA com validacao de dia, mes e ano                               |
| Matricula  | 7 digitos numericos com digito verificador por algoritmo modulo 10               |
| Resultado  | Valor restrito: APROVADO ou REPROVADO                                            |
| Senha      | Exatamente 6 caracteres do conjunto [A-Za-z0-9@#$%&], sem caracteres duplicados  |
| Telefone   | Formato +XXXXXXX (sinal de mais seguido de 7 digitos)                            |
| Texto      | Entre 10 e 20 caracteres, sem espacos consecutivos, conjunto de caracteres limitado |

---

## Entidades Implementadas

Cada entidade e uma composicao de dominios, com getters e setters inline no header:

| Entidade       | Atributos (dominios)                                                          |
|----------------|-------------------------------------------------------------------------------|
| Desenvolvedor  | Nome (Texto), Matricula, Senha, Telefone                                      |
| Teste          | Codigo, Nome (Texto), Classe                                                  |
| CasoDeTeste    | Codigo, Data, Nome (Texto), Acao (Texto), Resposta (Texto), Resultado         |

---

## Testes Unitarios

Cada teste segue o padrao:

```
run()
 |
 +--- setUp()                          → instancia o objeto com valores validos
 +--- testarCenarioSucesso()           → atribui valores validos e verifica se foram aceitos
 +--- testarCenarioFalha()             → atribui valores invalidos e verifica se lanca excecao
 +--- tearDown()                       → destroi o objeto (delete + ponteiro nulo)
 |
 retorna SUCESSO ou FALHA
```

- Testes de **sucesso** verificam que `set_valor_dominio()` aceita valores validos sem excecao
- Testes de **falha** verificam que valores invalidos lancam `invalid_argument`

---

## Saida Esperada

```
SUCESSO-DESENVOLVEDOR
SUCESSO-TESTE
SUCESSO-CASO-DE-TESTE
SUCESSO-CLASSE
SUCESSO-CODIGO
SUCESSO-DATA
SUCESSO-MATRICULA
SUCESSO-RESULTADO
SUCESSO-SENHA
SUCESSO-TELEFONE
SUCESSO-TEXTO
```

Todos os 11 testes devem retornar `SUCESSO`. Qualquer `FALHA` indica erro na validacao ou na entidade correspondente.
