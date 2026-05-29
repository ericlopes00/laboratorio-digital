# Calculadora Geométrica Interativa em C
Criei esse projeto para treinar lógica e, principalmente, como organizar meu código usando funções (modularização). É um programa rodando direto no terminal que calcula a área de quadrado, círculo e retângulos de um jeito bem interativo. O que uso para fazer:

-Funções com retorno: Usei para separar as contas de cada área ( areaQ, areaC, areaR) e não deixar mainbagunçada.

-Menu em Loop ( do-whilee switch-case): O menu fica rodando direto e só data quando você digita a opção 4 (Sair).

-Limpeza de tela: 2 getchar, um para coletar os "\n" não copilados e outros para forçar a pessoa pressionar enter para limpar a tela com o sistema("clear"), se n tivesse esses dois getchar, limparia a tela muito rápido, o usuário não conseguiria ver o resultado
