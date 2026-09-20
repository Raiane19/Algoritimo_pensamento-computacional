# 🌡️ Desafio Monitoramento de Temperatura

## 📋 1. Identificação

**Nome do aluno:** Raiane dos Santos de Oliveira
**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Profa. Karla Sartin
**Título do projeto:** Sistema de Monitoramento de Temperatura

---

## 🎯 2. Objetivo

O projeto tem como objetivo desenvolver um programa em linguagem **C** para realizar o monitoramento de temperaturas informadas pelo usuário.

O sistema permite definir um **limite de temperatura** e realizar leituras durante o monitoramento. A cada temperatura informada, o programa verifica se o valor está acima do limite estabelecido.

O programa também possui um mecanismo de **encerramento automático**, que ocorre quando são registradas três temperaturas consecutivas acima do limite.

Além disso, o sistema realiza o tratamento de entradas inválidas, evitando que valores que não correspondam ao tipo de dado esperado sejam utilizados no monitoramento.

---

## ⚙️ 3. Funcionamento do Programa

### 🔹 Definição do limite de temperatura

Inicialmente, o programa solicita ao usuário que informe o **limite de temperatura** que será utilizado durante o monitoramento.

Esse valor serve como referência para identificar quando uma temperatura está acima do limite estabelecido.

Por exemplo:

```text
Digite o limite de temperatura: 30
```

Nesse caso, qualquer temperatura **maior que 30°C** será considerada acima do limite.

---

### 🔹 Realização das leituras

Após definir o limite, o programa solicita ao usuário que informe uma temperatura.

Depois de cada leitura, o programa verifica se a temperatura está acima ou não do limite.

Após a análise, o usuário pode escolher se deseja informar uma nova temperatura:

```text
Deseja digitar uma nova temperatura?
1 - Sim
0 - Não
```

Ao escolher:

```text
1
```

o programa continua o monitoramento e solicita uma nova temperatura.

Ao escolher:

```text
0
```

o programa encerra o monitoramento manualmente.

---

### 🔹 Tratamento de valores inválidos

O programa realiza a validação das entradas fornecidas pelo usuário.

Caso seja digitado um valor que não corresponda ao tipo de dado esperado para uma temperatura, o programa identifica a entrada como inválida.

Por exemplo:

```text
Digite a temperatura: LLL
```

Nesse caso, `LLL` não corresponde a um valor numérico válido para uma temperatura.

O programa informa o erro e solicita que o usuário digite novamente uma temperatura válida.

---

### 🔹 Identificação de temperaturas acima do limite

Após receber uma temperatura válida, o programa compara o valor informado com o limite definido inicialmente.

A temperatura é considerada acima do limite quando:

```c
temperatura > limite
```

Quando essa condição é verdadeira, o programa registra a ocorrência e aumenta a contagem de temperaturas consecutivas acima do limite.

Caso a temperatura esteja dentro ou igual ao limite, a contagem de temperaturas consecutivas é reiniciada.

---

### 🔹 Contagem de temperaturas consecutivas

O programa utiliza um contador para verificar quantas temperaturas **acima do limite ocorreram consecutivamente**.

Por exemplo:

```text
Limite: 30°C

32°C → acima do limite → 1 consecutiva
35°C → acima do limite → 2 consecutivas
28°C → dentro do limite → contador reiniciado
```

Nesse caso, a sequência é interrompida pela temperatura de `28°C`.

Portanto, o contador volta para zero e o programa continua normalmente.

---

### 🔴 Condição de encerramento automático

O monitoramento é encerrado automaticamente quando são registradas **três temperaturas consecutivas acima do limite**.

Exemplo:

```text
Limite: 30°C

32°C → acima do limite → 1
35°C → acima do limite → 2
33°C → acima do limite → 3
```

Ao atingir três temperaturas consecutivas acima do limite, o programa encerra automaticamente o monitoramento.

Além dessa condição, o usuário também pode encerrar o programa manualmente escolhendo a opção:

```text
0 - Não
```

quando for perguntado se deseja digitar uma nova temperatura.

---

# 🔄 4. Estruturas de Repetição Utilizadas

## `while`

A estrutura `while` é utilizada para manter o monitoramento em execução enquanto a condição de encerramento automático não for atingida e o usuário escolher continuar informando temperaturas.

A estrutura permite que o programa realize várias leituras sem precisar repetir o código manualmente.

De forma simplificada:

```c
while (condicao)
{
    // Leitura e análise da temperatura
}
```

O `while` é adequado porque a quantidade de temperaturas informadas pelo usuário não é conhecida previamente.

O programa continua repetindo o processo enquanto:

* o usuário escolher continuar;
* e não forem registradas três temperaturas consecutivas acima do limite.

---

## `do...while`

A estrutura `do...while` é utilizada para realizar validações de entrada quando é necessário solicitar uma informação ao usuário pelo menos uma vez.

Por exemplo:

```c
do
{
    // Solicita uma entrada
}
while (entrada_invalida);
```

Essa estrutura permite que, caso o usuário informe um valor inválido, como `LLL`, o programa solicite novamente uma entrada válida.

---

# 💻 5. Como Executar

## 📌 Pré-requisitos

Para executar o projeto é necessário possuir um compilador da linguagem **C**, como o **GCC**.

---

## 🔨 Compilação

No terminal, dentro da pasta do projeto, utilize:

```bash
gcc monitoramento.c -o monitoramento
```

O comando irá compilar o código-fonte e gerar o programa executável.

---

## ▶️ Execução

### Linux/macOS

```bash
./monitoramento
```

### Windows

```bash
.\monitoramento.exe
```

---

# 🧪 6. Testes Realizados

Foram realizados três testes para verificar as principais funcionalidades do programa.

As evidências dos testes estão disponíveis na pasta **`Evidencia`** do repositório.

---

## 🧪 Teste 1 — Escolha de uma nova temperatura

**Objetivo:** verificar o funcionamento da opção que permite ao usuário escolher se deseja informar uma nova temperatura.

Após informar uma temperatura, o programa apresenta as opções:

```text
1 - Sim
0 - Não
```

Ao selecionar:

```text
1
```

o programa continua o monitoramento e solicita uma nova temperatura.

Ao selecionar:

```text
0
```

o programa encerra o monitoramento.

**Resultado:** o programa respondeu corretamente às duas opções, permitindo continuar o monitoramento com `1` e encerrando o processo com `0`.

### 📸 Evidência

![Teste 1](Evidencia/Teste1.png)

---

## 🧪 Teste 2 — Três temperaturas acima do limite

**Objetivo:** verificar o encerramento automático após três temperaturas consecutivas acima do limite.

Foi definido um limite de temperatura e foram informadas três temperaturas consecutivas superiores a esse limite.

Exemplo:

```text
Limite: 30°C

32°C → acima do limite → 1
35°C → acima do limite → 2
33°C → acima do limite → 3
```

**Resultado:** ao identificar a terceira temperatura consecutiva acima do limite, o programa encerrou automaticamente o monitoramento.

### 📸 Evidência

![Teste 2](Evidencia/Teste2.png)

---

## 🧪 Teste 3 — Entrada inválida

**Objetivo:** verificar o tratamento de uma entrada que não corresponde ao valor exigido pelo programa.

Durante a solicitação de uma temperatura, foi digitado:

```text
LLL
```

Como `LLL` não corresponde a um valor numérico de temperatura, o programa identificou a entrada como inválida.

**Resultado:** o programa tratou a entrada incorreta e solicitou que fosse informado um valor válido.

### 📸 Evidência

![Teste 3](Evidencia/Teste3.png)

---

# 📂 Estrutura de Pastas

O repositório está organizado da seguinte forma:

```text
desafio-monitoramento/
│
├── Evidencia/
│   ├── Teste1.png
│   ├── Teste2.png
│   └── Teste3.png
│
└── README.md
```

### 📄 Descrição dos arquivos

| Arquivo/Pasta          | Descrição                                                  |
| ---------------------- | ---------------------------------------------------------- |
| `Evidencia/`           | Pasta que contém as evidências dos testes realizados       |
| `Evidencia/Teste1.png` | Evidência do Teste 1 — escolha entre continuar ou encerrar |
| `Evidencia/Teste2.png` | Evidência do Teste 2 — três temperaturas acima do limite   |
| `Evidencia/Teste3.png` | Evidência do Teste 3 — entrada inválida                    |
| `README.md`            | Documentação técnica do projeto                            |

---

# 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Compilador:** GCC
* **Controle de versão:** Git
* **Repositório:** GitHub

---

# 📚 Conceitos Aplicados

Durante o desenvolvimento do projeto foram aplicados os seguintes conceitos:

* Linguagem C;
* Variáveis;
* Tipos de dados;
* Entrada e saída de dados;
* Estruturas condicionais;
* Estrutura `while`;
* Estrutura `do...while`;
* Contadores;
* Operadores relacionais;
* Validação de entradas;
* Tratamento de valores inválidos;
* Estruturas de repetição;
* Controle de fluxo;
* Lógica de programação.

---

## 👩‍💻 Autoria

**Raiane dos Santos de Oliveira**

Projeto desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional**, sob orientação da **Profa. Karla Sartin**.

