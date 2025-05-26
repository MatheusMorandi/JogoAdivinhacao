# 🎯 Jogo de Adivinhação - Qt + C++

Este é um pequeno projeto de um jogo de adivinhação com interface gráfica, desenvolvido com **Qt Creator** e **C++**, ideal para fins de aprendizado sobre:

- Lógica condicional com C++
- Interface gráfica com Qt (widgets, sinais e slots)
- Uso de números aleatórios com o Random

---

## 📸 Interface

O jogo possui uma interface gráfica com os seguintes elementos:

- `QLineEdit`: Onde o usuário digita seu palpite
- `QPushButton`: Um botão para enviar o palpite ou reiniciar o jogo
- `QLabel`: Exibe mensagens de feedback como “Muito alto”, “Muito baixo” ou “Acertou!”
- `QMessageBox`: Utilizado para avisar o usuário quando a entrada não é válida

---

## ⚙️ Funcionalidades

- Ao iniciar o programa, o sistema gera um número secreto aleatório entre 1 e 100
- O usuário digita um número e clica em **"Tentar"**
  - Se o número digitado estiver acima do número secreto → exibe “Muito alto!”
  - Se o número digitado estiver abaixo do número secreto → exibe “Muito baixo!”
  - Se acertar → exibe “Acertou!” e o botão vira **"Recomeçar"**
- Clicando em **"Recomeçar"**, um novo número secreto é gerado

---
