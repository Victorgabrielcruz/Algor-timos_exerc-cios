# Dígito Verificador de Conta Corrente

Este programa é projetado para calcular o dígito verificador de uma conta corrente, que é sempre composta por três dígitos. O dígito verificador é calculado através de uma série de passos que envolvem a soma do número da conta com seu inverso, multiplicação de cada dígito da soma por sua posição, e soma dessas multiplicações. O último dígito da soma resultante é o dígito verificador.

## Como Funciona

1. **Inicialização**: O programa começa com a variável `op` definida como 1, indicando que o usuário deseja continuar inserindo números de conta corrente.
2. **Loop Principal**: Um loop `while` é iniciado, que continua enquanto `op` for igual a 1.
3. **Entrada do Usuário**: Dentro do loop, o programa solicita ao usuário que insira um número de conta corrente de três dígitos.
4. **Validação da Conta Corrente**: A conta corrente inserida é validada para garantir que tenha exatamente três dígitos.
5. **Cálculo do Dígito Verificador**: O programa calcula o dígito verificador da conta corrente inserida, seguindo os passos descritos acima.
6. **Exibição do Dígito Verificador**: O programa exibe o dígito verificador calculado.
7. **Decisão de Continuar**: Após exibir o dígito verificador, o programa solicita ao usuário se deseja continuar inserindo números de conta corrente. Se o usuário inserir 1, o programa continua. Se inserir 2, o programa termina.
8. **Tratamento de Entrada Inválida**: Se a conta corrente inserida não tiver exatamente três dígitos, uma mensagem de erro é exibida e o usuário é solicitado a inserir novamente.

## Uso

Para usar este programa, compile o código C fornecido e execute o executável gerado. O programa solicitará que você insira um número de conta corrente de três dígitos. Após inserir o número, o programa exibirá o dígito verificador calculado. Você pode continuar inserindo números até decidir sair do programa, inserindo 2 quando solicitado.


