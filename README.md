Calculadora Geométrica Interativa em C
  
Criei esse projeto para treinar lógica e, principalmente, como organizar meu código usando **funções** (modularização). É um programinha rodando direto no terminal que calcula a área de quadrado, 
círculo e retângulo de um jeito bem interativo.
O que usei para fazer:
 -Funções com retorno: Usei para separar as contas de cada área (`areaQ`, `areaC`, `areaR`) e não deixar a `main` bagunçada.
 -Menu em Loop (`do-while` e `switch-case`):** O menu fica rodando direto e só fecha quando você digita a opção 4 (Sair).
 -Limpeza de tela: 2 getchar, um para coletar os "\n" nao copilados e outros para forçar a pessoa pressionar enter para limpar a tela com o system("clear"), se n tivesse esses dois getchar, limparia a tela
  muito rápido, o usuário nao conseguiria ver o resultado
