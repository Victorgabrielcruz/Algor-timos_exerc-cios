# Números Palíndromos

Este programa em C verifica se um número de 5 dígitos é um número palíndromo, ou seja, se ele é igual quando lido da esquerda para a direita ou da direita para a esquerda.

## Explicação

- O programa começa com a inclusão da biblioteca `stdio.h` para permitir operações de entrada e saída, e `string.h` para manipulação de strings.
- A função `UDC` é declarada para verificar se um número é um palíndromo ou não.
- Variáveis são declaradas para armazenar os dígitos do número e o resultado.
- Os dígitos do número são extraídos e usados para calcular o resultado reverso.
- O resultado reverso é comparado com o número original para determinar se é um palíndromo.
- A mensagem correspondente é copiada para uma variável de resultado.
- A função retorna a mensagem.
- Na função `main`, o usuário é solicitado a inserir um número de 5 dígitos.
- O número e o resultado da verificação de palíndromo são impressos.