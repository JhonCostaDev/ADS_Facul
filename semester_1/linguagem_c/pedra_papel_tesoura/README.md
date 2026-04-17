# Pedra, Papel e Tesoura 🎮

Um jogo clássico implementado em **C**, onde você pode desafiar o computador em partidas de Pedra, Papel e Tesoura.

---
## 📖 Regras do jogo
- **Pedra** vence **Tesoura** (quebra a tesoura).
- **Tesoura** vence **Papel** (corta o papel).
- **Papel** vence **Pedra** (embrulha a pedra).
- Se ambos escolherem a mesma opção, o resultado é **empate**.


---
## 📌 Funcionalidades
- Escolha entre **Pedra**, **Papel** ou **Tesoura**.
- O computador faz uma jogada aleatória.
- O programa determina o vencedor da rodada.
- Possibilidade de jogar várias vezes até decidir sair.

---

## Estrutura do Projeto
```bash
├── main.c        # Código fonte principal
└── README.md     # Documentação do projeto
```

## 🚀 Como executar
1. Clone este repositório ou copie os arquivos para sua máquina.
2. Compile o código usando `gcc`:
   ```bash
   gcc main.c -o jogo

## Exemplo de uso
```bash
Escolha sua jogada:
1 - Pedra
2 - Papel
3 - Tesoura
Sua escolha: 1
Computador escolheu: Tesoura
Resultado: Você venceu! 🎉
```

## 🔧 Tecnologias utilizadas

* Linguagem C

* Biblioteca padrão **<stdio.h>** e **<stdlib.h>**

* Função <code>rand()</code> para gerar jogadas aleatórias
