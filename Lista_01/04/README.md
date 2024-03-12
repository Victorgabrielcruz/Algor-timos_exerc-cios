# Cálculo da Diferença em Segundos para 01/01/1970

Este programa é projetado para calcular a diferença em segundos entre uma data fornecida pelo usuário e a data 01/01/1970. Ele solicita ao usuário que insira uma data completa (dia, mês e ano) e, em seguida, calcula e exibe a diferença em segundos. O programa assume que todos os anos têm 365 dias e todos os meses têm 30 dias, e que a hora é 00:00:00 para ambas as datas.

## Como Funciona

1. **Inicialização**: O programa começa com a variável `op` definida como 1, indicando que o usuário deseja continuar inserindo datas.
2. **Loop Principal**: Um loop `while` é iniciado, que continua enquanto `op` for igual a 1.
3. **Entrada do Usuário**: Dentro do loop, o programa solicita ao usuário que insira uma data completa (dia, mês e ano).
4. **Validação da Data**: A data inserida é validada para garantir que o dia e o mês estejam dentro dos limites aceitáveis.
5. **Cálculo da Diferença em Segundos**: A diferença em segundos entre a data fornecida e 01/01/1970 é calculada, considerando a diferença em anos, meses e dias.
6. **Exibição do Resultado**: O programa exibe a diferença em segundos calculada.
7. **Decisão de Continuar**: Após exibir o resultado, o programa solicita ao usuário se deseja continuar inserindo datas. Se o usuário inserir 1, o programa continua. Se inserir 2, o programa termina.
8. **Tratamento de Entrada Inválida**: Se a data inserida for inválida, uma mensagem de erro é exibida e o usuário é solicitado a inserir novamente.

## Uso

Para usar este programa, compile o código C fornecido e execute o executável gerado. O programa solicitará que você insira uma data completa. Após inserir a data, o programa exibirá a diferença em segundos entre essa data e 01/01/1970. Você pode continuar inserindo datas até decidir sair do programa, inserindo 2 quando solicitado.

## Exemplo de Saída

