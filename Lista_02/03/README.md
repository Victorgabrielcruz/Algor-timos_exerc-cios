# Estado da Água

Este programa em C lê a temperatura da água do usuário e determina se ela está em estado sólido, líquido ou gasoso. O programa também permite ao usuário repetir o processo de verificação quantas vezes desejar.


## Explicação

- O programa começa com a inclusão da biblioteca `stdint.h` para permitir operações com tipos de dados inteiros de tamanho fixo.
- A função `main` é declarada, que é o ponto de entrada do programa.
- Variáveis são declaradas para armazenar a temperatura da água e a opção de escolha do usuário.
- Um loop `do-while` é usado para permitir que o usuário repita o processo de entrada de dados e verificação quantas vezes desejar.
- O usuário é solicitado a inserir a temperatura da água.
- O programa verifica a temperatura e determina se a água está em estado sólido (temperatura <= 0), líquido (temperatura > 0 e < 100) ou gasoso (temperatura >= 100).
- Com base no resultado da verificação, o programa informa ao usuário o estado da água.
- O usuário tem a opção de repetir o processo ou sair do programa.

