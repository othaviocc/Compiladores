# Exemplo: Compilação Separada em C

Pequena demonstração de como separar **protótipos** (`.h`) e **implementações** (`.c`) usando `make` para automatizar a compilação. Ideal para estudantes que estão migrando de exemplos monolíticos para projetos modulares em C.

## Pré-requisitos
- Compilador C compatível com C11 (ex.: `gcc` ou `clang`)
- `make`

## Estrutura do Projeto
```
.
├── main.c          # Programa principal
├── soma.c/.h       # Função soma
├── subtrai.c/.h    # Função subtrai
├── mult.c/.h       # Função multiplicação
├── div.c/.h        # Função divisão
├── modulo.c/.h     # Função modulo
├── potencia.c/.h    # Função potencia
├── Makefile        # Regras de compilação
├── .gitignore      # Ignora artefatos de build
└── README.md       # Guia do projeto
```

## Como Clonar Repositório
Abra o Terminal, digite:
```
git clone https://github.com/othaviocc/Compiladores.git 
```

## Como Compilar
```bash
make
```
Isso compila cada `.c` em um `.o` e depois gera o executável `main`.

## Como Executar
```bash
make run
```
Saída esperada:
```
s = 3
```

## Como Limpar
```bash
make clean
```
Remove o executável e todos os objetos.

## Conceitos Demonstrados
- **Headers (`.h`)**: contêm apenas os protótipos e incluem *include guards* para evitar múltiplas inclusões (`soma.h`, `subtrai.h`,`mult.h`,`div.h`,`modulo.h`,`potencia.h`).
- **Implementações (`.c`)**: possuem o código real e incluem seu respectivo header para manter as assinaturas sincronizadas.
- **Programa principal**: `main.c` inclui somente headers e coordena o fluxo chamando as funções de cada módulo.
- **Makefile**: recompila apenas o necessário a cada alteração e oferece alvos utilitários (`run`, `clean`).

Autores: Othavio Christmann Correa e Theo Corvello Soares
Turma Engenharia de Computação FURG
Disicplina: Compiladores