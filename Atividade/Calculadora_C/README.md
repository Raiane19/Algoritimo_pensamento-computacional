# 🧮 Calculadora — 20 Operações

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white">
  <img src="https://img.shields.io/badge/Status-Concluído-success?style=for-the-badge">
  <img src="https://img.shields.io/badge/Projeto-Acadêmico-blueviolet?style=for-the-badge">
</p>

## 📖 Sobre o Projeto

A **Calculadora — 20 Operações** é um projeto desenvolvido em **linguagem C** como atividade da disciplina de **Algoritmo e Pensamento Computacional**.

O projeto foi desenvolvido com o objetivo de colocar em prática conceitos fundamentais de programação, como **variáveis, operadores, estruturas condicionais, estruturas de repetição, funções, entrada e saída de dados e utilização de bibliotecas matemáticas**.

A calculadora possui um menu interativo que permite ao usuário escolher entre **20 diferentes operações matemáticas**.

---

## 👩‍💻👨‍💻 Desenvolvedores

Projeto desenvolvido por:

* **Raiane dos Santos**
* **Gabriel Oliveira**

O desenvolvimento foi realizado de forma colaborativa, buscando aplicar os conhecimentos adquiridos durante as aulas da disciplina.

---

## ⚙️ Operações Disponíveis

A calculadora possui as seguintes operações:

| Nº | Operação            | Descrição                           |
| -: | ------------------- | ----------------------------------- |
|  1 | ➕ Soma              | Realiza a soma de dois números      |
|  2 | ➖ Subtração         | Realiza a subtração de dois números |
|  3 | ✖️ Multiplicação    | Multiplica dois números             |
|  4 | ➗ Divisão           | Divide dois números                 |
|  5 | 🔢 Potência         | Calcula um número elevado a outro   |
|  6 | √ Raiz quadrada     | Calcula a raiz quadrada             |
|  7 | π Número PI         | Exibe o valor de PI                 |
|  8 | e Número E          | Exibe o número de Euler             |
|  9 | 📐 Seno             | Calcula o seno de um ângulo         |
| 10 | 📐 Cosseno          | Calcula o cosseno de um ângulo      |
| 11 | 📐 Tangente         | Calcula a tangente de um ângulo     |
| 12 | Γ Gamma             | Calcula a função Gamma              |
| 13 | ❗ Fatorial          | Calcula o fatorial de um número     |
| 14 | 🔗 MDC              | Calcula o Máximo Divisor Comum      |
| 15 | 🔗 MMC              | Calcula o Mínimo Múltiplo Comum     |
| 16 | ∛ Raiz cúbica       | Calcula a raiz cúbica               |
| 17 | 📊 Logaritmo        | Calcula o logaritmo de um número    |
| 18 | 🔢 Valor absoluto   | Calcula o valor absoluto            |
| 19 | 💯 Porcentagem      | Calcula uma porcentagem             |
| 20 | 📈 Média aritmética | Calcula a média de vários números   |

---

## 🧠 Conceitos Utilizados

Durante o desenvolvimento foram utilizados diversos conceitos fundamentais da linguagem C:

* 📌 Variáveis e constantes
* 📌 Tipos de dados
* 📌 Operadores matemáticos
* 📌 Entrada e saída de dados com `scanf()` e `printf()`
* 📌 Estruturas condicionais `if`, `else` e `switch`
* 📌 Estruturas de repetição `while` e `do while`
* 📌 Funções
* 📌 Vetores e operações matemáticas
* 📌 Conversão de graus para radianos
* 📌 Bibliotecas matemáticas
* 📌 Validação de entradas
* 📌 Organização e modularização do código

---

## 🛠️ Tecnologias Utilizadas

### 💻 Linguagem

**C**

### 📚 Bibliotecas

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
```

A biblioteca `math.h` foi utilizada para operações matemáticas como:

```text
pow()      → Potência
sqrt()     → Raiz quadrada
sin()      → Seno
cos()      → Cosseno
tan()      → Tangente
tgamma()   → Gamma
cbrt()     → Raiz cúbica
log()      → Logaritmo
fabs()     → Valor absoluto
```

---

## ▶️ Como Executar

### 1. Clone o repositório

```bash
git clone https://github.com/seu-usuario/seu-repositorio.git
```

### 2. Entre na pasta do projeto

```bash
cd calculadora
```

### 3. Compile o programa

Caso esteja utilizando o GCC:

```bash
gcc main.c -o calculadora -lm
```

> O parâmetro `-lm` é utilizado para realizar a ligação com a biblioteca matemática `math.h`.

### 4. Execute

No Windows:

```bash
calculadora.exe
```

No Linux/macOS:

```bash
./calculadora
```

---

## 🖥️ Funcionamento

Ao executar o programa, será apresentado um menu com as 20 operações disponíveis:

```text
=====================================
       CALCULADORA 20 OPERAÇÕES
=====================================

 1 - Soma
 2 - Subtração
 3 - Multiplicação
 4 - Divisão
 5 - Potência
 6 - Raiz quadrada
 7 - Número PI
 8 - Número E
 9 - Seno
10 - Cosseno
11 - Tangente
12 - Gamma
13 - Fatorial
14 - MDC
15 - MMC
16 - Raiz cúbica
17 - Logaritmo
18 - Valor absoluto
19 - Porcentagem
20 - Média aritmética
 0 - Encerrar

=====================================
Escolha uma opção:
```

O usuário escolhe uma operação e informa os valores solicitados pelo programa.

---

## 🎯 Objetivo Acadêmico

Este projeto foi desenvolvido para a disciplina de **Algoritmo e Pensamento Computacional**, com o objetivo de aplicar, na prática, os conhecimentos estudados durante as aulas da linguagem C.

Além de desenvolver uma aplicação funcional, o projeto possibilitou o aprendizado e a prática de:

> **Lógica de programação + Algoritmos + Linguagem C + Resolução de problemas**

---

## 📚 Aprendizados

Com o desenvolvimento da calculadora, foi possível aprimorar conhecimentos relacionados à construção de algoritmos e à implementação de soluções utilizando a linguagem C.

O projeto também proporcionou experiência com **organização de código, criação de funções, tratamento de diferentes tipos de operações matemáticas e desenvolvimento colaborativo**.

---

## 🚀 Possíveis Melhorias Futuras

Algumas funcionalidades que podem ser adicionadas futuramente:

* [ ] Histórico de operações
* [ ] Interface gráfica
* [ ] Mais operações matemáticas
* [ ] Melhor tratamento de erros de entrada
* [ ] Separação do projeto em arquivos `.c` e `.h`
* [ ] Sistema de memória para resultados anteriores
* [ ] Modo científico

---

## 👩‍💻👨‍💻 Autores

**Raiane dos Santos**

**Gabriel Oliveira**

📚 Projeto acadêmico desenvolvido para a disciplina de **Algoritmo e Pensamento Computacional**.

---

<p align="center">
  💻 Desenvolvido com C, lógica e muito aprendizado.
</p>
