# Lista 1 - Exercícios

## Assunto: Variáveis, Entrada e Saída, Operadores e Expressões

Esta lista de exercícios aborda conceitos fundamentais de variáveis, entrada e saída, operadores e expressões em C.

### Exercícios

1. **Soma de Dois Números Inteiros:**
   - Escreva um código em C que leia dois números inteiros do teclado, calcule a soma e exiba na tela.

2. **Salários Mínimos:**
   - Escreva um código em C que leia o valor do salário de uma pessoa e imprima na tela quantos salários mínimos ela recebe.

3. **Inversão de Número de Três Dígitos:**
   - Escreva um código em C que leia do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostre o número invertido (no formato UDC). O número invertido deve ser armazenado em outra variável antes de ser mostrado.

4. **Diferença em Segundos para 01/01/1970:**
   - Escreva um código em C que leia uma data completa do teclado (dia, mês e ano) e imprima na tela quantos segundos de diferença para o dia 01/01/1970. Considere a hora 00:00:00 para as duas datas, que todos os anos têm 365 dias e que todos os meses têm 30 dias.

5. **Dígito Verificador de Conta Corrente:**
   - Escreva um código em C que leia uma conta corrente (sempre com 3 dígitos) e mostre o seu dígito verificador que é calculado da seguinte maneira:
     - Primeiro, soma-se o número da conta com o seu inverso (CDU + UDC).
     - Em seguida, multiplica-se cada dígito da soma por sua posição, sendo que a posição das unidades de milhar é 0, das centenas é 1, das dezenas é 2 e das unidades é 3.
     - Depois, soma-se cada uma das multiplicações.
     - Finalmente, o dígito verificador é o último dígito da soma anterior.

Por exemplo, se o número da conta for 235:
   - A soma do número da conta com o seu inverso (532) será 767.
   - O resultado da multiplicação de cada dígito da soma por sua posição será: 7 * 1 = 7, 6 * 2 = 12 e 7 * 3 = 21.
   - A soma dessas multiplicações será 40.
   - O dígito verificador que corresponde ao último dígito dessa soma será 0.

---
