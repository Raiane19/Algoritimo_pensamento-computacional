# 🌡️ Conversor de Temperatura em C

Projeto desenvolvido em **linguagem C** com o objetivo de praticar estruturas de repetição, entrada de dados, operações matemáticas e condições.

## 📌 Sobre o projeto

O programa funciona como um **conversor de temperaturas**, permitindo que o usuário escolha entre diferentes tipos de conversão.

O sistema utiliza um menu interativo que continua sendo exibido até que o usuário escolha a opção de sair.

## 🔄 Conversões disponíveis

O programa permite realizar as seguintes conversões:

* Celsius → Fahrenheit
* Fahrenheit → Celsius
* Celsius → Kelvin
* Kelvin → Celsius

## 🛠️ Tecnologias utilizadas

* **C**
* `stdio.h`

## 📚 Conceitos praticados

Neste projeto foram utilizados:

* Variáveis
* Entrada de dados com `scanf()`
* Saída de dados com `printf()`
* Estrutura de repetição `while`
* Estruturas condicionais `if`
* Operações matemáticas
* Menu interativo
* Tipos de dados `int` e `float`

## ▶️ Como executar

### 1. Clone o repositório

```bash
git clone URL_DO_REPOSITORIO
```

### 2. Acesse a pasta

```bash
cd nome-do-projeto
```

### 3. Compile o programa

```bash
gcc conversor.c -o conversor
```

### 4. Execute

No Windows:

```bash
conversor.exe
```

No Linux/macOS:

```bash
./conversor
```

## 🖥️ Exemplo de uso

```text
=== CONVERSOR DE TEMPERATURA ===

1 - Celsius para Fahrenheit
2 - Fahrenheit para Celsius
3 - Celsius para Kelvin
4 - Kelvin para Celsius
5 - Sair

Escolha uma opcao: 1
Digite a temperatura: 25

Resultado: 77.00 Fahrenheit
```

## 📐 Fórmulas utilizadas

### Celsius → Fahrenheit

```text
F = (C × 9 / 5) + 32
```

### Fahrenheit → Celsius

```text
C = (F - 32) × 5 / 9
```

### Celsius → Kelvin

```text
K = C + 273.15
```

### Kelvin → Celsius

```text
C = K - 273.15
```

## 🎯 Objetivo

O objetivo deste projeto é praticar os conceitos básicos de programação em **C**, principalmente o uso de estruturas de repetição com `while` e estruturas condicionais.

---

### 👩‍💻 Autora

**Raiane dos Santos**

Projeto desenvolvido para fins de estudo e prática de programação em C.

