# Conversor de Salário para Salários Mínimos

Este programa é projetado para converter o valor de um salário em salários mínimos. Ele solicita ao usuário que insira o valor do salário e, em seguida, calcula quantos salários mínimos esse valor representa. O usuário tem a opção de continuar inserindo valores de salário até decidir sair do programa.

## Como Funciona

1. **Inicialização**: O programa começa com a variável `op` definida como 1, indicando que o usuário deseja continuar inserindo valores de salário.
2. **Loop Principal**: Um loop `while` é iniciado, que continua enquanto `op` for igual a 1.
3. **Entrada do Usuário**: Dentro do loop, o programa solicita ao usuário que insira o valor do salário.
4. **Cálculo dos Salários Mínimos**: O valor do salário inserido é dividido por 1412.0 (o valor do salário mínimo em muitos países) para calcular quantos salários mínimos esse valor representa.
5. **Exibição do Resultado**: O programa exibe o valor do salário inserido e quantos salários mínimos esse valor representa.
6. **Decisão de Continuar**: Após exibir o resultado, o programa solicita ao usuário se deseja continuar inserindo valores de salário. Se o usuário inserir 1, o programa continua. Se inserir 2, o programa termina.
7. **Tratamento de Entrada Inválida**: Se o usuário inserir qualquer outro valor, uma mensagem de erro é exibida e o usuário é solicitado a inserir novamente.

## Uso

Para usar este programa, compile o código C fornecido e execute o executável gerado. O programa solicitará que você insira o valor do salário. Após inserir o valor, o programa exibirá quantos salários mínimos esse valor representa. Você pode continuar inserindo valores até decidir sair do programa, inserindo 2 quando solicitado.


